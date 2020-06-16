#include <stdio.h>
#include "phone7.h"
#include <string.h>
#include <stdlib.h>

typedef int (*cmp)(const void*, int,int);
typedef int (*swap)(void*, int, int);
int contactCmpr(const void*,int,int);
int contactSwap(void*,int,int);
extern int count;
void sort(contact* head, contact* target)
{
	printf("Sort function is called\n");
	printf("Before sorting\n");
	print(head);	

	int c,d;
	contact* current=head;
	contact* now=head;

	for(c=0; c<count; c++){
		strcpy(arr[c].Name, current->Name);
		strcpy(arr[c].PhoneNumber, current->PhoneNumber);
		current=current->next;
		printf("a");
	}

	sortPhoneBook(arr,count, contactCmpr, contactSwap);

	for(d=0; d<count; d++){
		strcpy(target->Name, arr[d].Name);
		strcpy(target->PhoneNumber, arr[d].PhoneNumber);
		now=now->next;
		printf("B");
	}
	head=target;

	printf("After sorting\n");
	print(head);
}

void sortPhoneBook(void* A, int size, cmp cfn, swap sfn)
{
	int i,j;
	for(i=0; i<size; i++)
	{
		for(j=0; j<size-i-1; j++)
		{
			if(cfn(A,j,j+1)>0)
				sfn(A,j,j+1);
		}
	}
}

int contactCmpr(const void* arr, int i, int j)
{
	if(strcmp( ((carr*)arr+i)->Name, ((carr*)arr+j)->Name)>0)
		return 1;
	else
		return 0;
}

int contactSwap(void* arr, int i, int j)
{
	carr temp;
	carr* ccarr=(carr*)arr;
	temp=*(ccarr+j);
	*(ccarr+j)=*(ccarr+i);
	*(ccarr+i)=temp;

	return 1;
}	
