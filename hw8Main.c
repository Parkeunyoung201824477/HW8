#include <stdio.h>
#include "phone8.h"
#include <string.h>
#include <stdlib.h>

void registerPhoneData(contact*);
void print(contact*);
void printArray(void *arr, int size);
void searchByName(contact*);
void deleteByName(contact*);
void sort(contact*);
void load(contact*);
void save(contact*);

int count_service=0;

typedef int (*cmp)(contact*, contact*);
typedef int (*swap)(contact*, contact*);

void sortPhoneBook(contact*, cmp, swap);

int contactCmpr(contact*, contact*);
int contactSwap(contact*, contact*);

int main()
{
	contact* head= (contact*)malloc(sizeof(contact));
	head->next=NULL;
	load(head);
	int service;
	do
	{
		printf("==========Telephone Book Management============");
		printf("\n <<<1. Register\t 2. Print All\t 3. search by ID\t 4.Delete\t 5. Sort\t 6. Exit >>>\n");
		printf("Please enter your service number(1-6)> ");
		scanf("%d", &service);
		if(service >0 && service<=5)
		{
			switch(service)
			{
				case 1: registerPhoneData(head); break;
				case 2: print(head); break;
				case 3: searchByName(head); break;
				case 4: deleteByName(head); break;
				case 5: sort(head); break;
			}
		}
		else if(service==0 || service>6)
		{
			printf("You choose a wrong service number\n");
		}
		else if(service==6){
			save(head);
		}
	} while(service!=6);
	free(head);
	return 0;
}

void load(contact* head){
	FILE *fp=fopen("phone.dat", "rb");
	while(!feof(fp)){
		contact* tail1=(contact*)malloc(sizeof(contact));
		fread(tail1, sizeof(contact),1,fp);
		if(!feof(fp)){
			tail1->next=NULL;
			while(head->next!=NULL)
				head=head->next;
			head->next=tail1;
		}
	}
	fclose(fp);
}

void save(contact* head){
	FILE *fp=fopen("phone.dat", "wb");
	contact* t= head->next;
	while(t!=NULL){
		fwrite(t, sizeof(contact), 1, fp);
		t=t->next;
	}
	fclose(fp);
}
	
