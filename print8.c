#include <stdio.h>
#include "phone8.h"
#include <string.h>
#include <stdlib.h>

void print(contact* head)
{
	contact *temp=head->next;
	while(temp!=NULL){
		printf("Addr vp:%p\t name:%s\t phone:%s\n", &temp, temp->Name, temp->PhoneNumber);
		temp=temp->next;
	}
	printf("\n");
}
 
