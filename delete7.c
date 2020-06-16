#include <stdio.h>
#include "phone7.h"
#include <string.h>
extern int size;
void deleteByName()
{
	char inname[10];
	int i,j;
	printf(">>Enter a name to delete:");
	scanf("%s",&inname);
	for(i=0; i<size; i++){
		if(strcmp(PhoneBook[i].Name, inname)==0)
			break;
	}
	if(i<size){
		for(j=i+1; j<size; j++){
			strcpy(PhoneBook[i].Name, PhoneBook[j].Name);
			strcpy(PhoneBook[i].PhoneNumber, PhoneBook[j].PhoneNumber);
			i++;
		}
		size--;
		strcpy(PhoneBook[size].Name, "");
		strcpy(PhoneBook[size].PhoneNumber, "");
		printf("%s is deleted...\n\n", inname);
	}
	else
		printf("Oops! %s is not in the PhoneBook\n\n");
}
	
