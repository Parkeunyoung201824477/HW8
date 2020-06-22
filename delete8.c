#include <stdio.h>
#include "phone8.h"
#include <string.h>
#include <stdlib.h>

void deleteByName(contact* head)
{
	char inname[10];
	printf(">>Enter a name to delete: ");
	scanf("%s", &inname);
	contact* current= head;
	contact* previous=current;
	while(current!=NULL){
		if(strcmp(current->Name, inname)==0){
			previous->next=current->next;
		if(current==head)
			head=current->next;
			free(current);
		printf("%s is deleted...\n\n",inname);
		return;
	}
	previous=current;
	current=current->next;
	}
	if(current==NULL)
		printf("Oops! %s is not in the PhoneBook\n\n", inname);
	free(current);
}

