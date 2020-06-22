#include <stdio.h>
#include "phone8.h"
#include <string.h>
#include <stdlib.h>

void searchByName(contact* head)
{
	int i;
	char inname[10];
	contact* current=head;
	printf(">>>Enter a name to search: ");
	scanf("%s", &inname);
	while(current!=NULL){
		if(strcmp(current->Name, inname)==0) {
			printf("%s\t%s\n\n", current->Name, current->PhoneNumber);
			return;
			}
			current=current->next;
		}
		if(current==NULL)
			printf("Oops! %s is not in the PhoneBook\n\n", inname);
		free(current);
}
	
