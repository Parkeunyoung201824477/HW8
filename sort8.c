#include <stdio.h>
#include "phone8.h"
#include <string.h>
#include <stdlib.h>

typedef int (*cmp)(contact*, contact*);
typedef int (*swap)(contact*, contact*);

int contactCmpr(contact* current, contact* connext)
{
	if(strcmp(current->Name, connext->Name)>0)
		return 1;
	else
		return 0;
}

int contactSwap(contact* current, contact* connext)
{
	char name[10];
	char number[14];
	strcpy(name, current->Name);
	strcpy(current->Name, connext->Name);
	strcpy(connext->Name, name);
	strcpy(number, current->PhoneNumber);
	strcpy(current->PhoneNumber, connext->PhoneNumber);
	strcpy(connext->PhoneNumber, number);
	return 1;
}

void sort(contact* head)
{
	printf("Sort function is called\n");
	printf("Before sorting\n");
	
	print(head);
	sortPhoneBook(head, contactCmpr, contactSwap);
	printf("After sorting\n");

	print(head);
}

void sortPhoneBook(contact* head, cmp cfn, swap sfn)
{
	contact* current;
	contact* last=NULL;
	int i;
	if(head==NULL)
		return;
	do{
		i=0;
		current=head->next;
		while(current->next!=last){
			if(cfn(current, current->next)){
				sfn(current, current->next);
				i=1;
			}
			current=current->next;
		}
		last=current;
	}while(i!=0);
}
	
