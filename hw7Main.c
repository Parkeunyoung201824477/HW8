#include <stdio.h>
#include "phone7.h" 
#include <string.h>
#include <stdlib.h>

void registerPhoneData(contact*);
void print(contact*);
void searchByName(contact*);
void deleteByName(contact*);
void sort(contact*,contact*);

int count_service=0;
int count=0;
typedef int (*cmp)(const void*, int,int);
typedef int (*swap)(void*, int, int);

void sortPhoneBook(void *A, int size, cmp cfn, swap sfn);

int contactCmpr(const void*, int,int);
int contactSwap(void*,int,int);

contact* creat();
void swap2(contact**, contact**);

int main()
{
	contact* head=(contact*)malloc(sizeof(contact));
	contact* target=(contact*)malloc(sizeof(contact));
	head->next=NULL;
	int service;
	do
	{
		printf("=========Telephone Book Management==========");
		printf("\n <<<1. Register\t 2.Print All\t 3.Search By ID\t 4.Delete\t 5. Sort\t 6.Exit>>>\n");
		printf("Please enter your service number(1-6)> ");
		scanf("%d",&service);
		if(service>0 && service<=5)
		{
			switch(service)
			{
				case 1: registerPhoneData(head); break;
				case 2: print(head); break;
				case 3: searchByName(head); break;
				case 4: deleteByName(head); break;
				case 5: sort(head, target); break;
			}
		}
		else if(service==0 || service>6)
		{
			printf("You choose a wrong service number\n");
		}
	}while(service!=6);
	free(head);
	return 0;
}
 
