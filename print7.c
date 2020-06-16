#include <stdio.h>
#include "phone7.h"
extern int size;

void print()
{
	printf("Print all contants in the PhoneBook\n");
	printArray(PhoneBook,size);
}

void printArray(void *arr, int size)
{
	int i;
	void *vp;
	vp=arr;
	for(i=0; i<size; i++)
	{
		printf("Addr vp:%p\t", (contact*)vp+i);
		printf("name:%s\t phone:%s\n",((contact*)vp+i)->Name, ((contact*)vp+i)->PhoneNumber);
	}
	printf("\n");
}
 
