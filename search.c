#include <stdio.h>
#include <string.h>
#include "phone.h"
extern int size;

void searchByName()
{
	int i;
	char inname[10];
	printf(">>Enter a name to search:");
	scanf("%s",&inname);
	for(i=0;i<size;i++){
		if(strcmp(PhoneBook[i].Name,inname)==0){
			break;
		}
	}
		if(i<size){
			printf("%s\t%s\n\n",PhoneBook[i].Name,PhoneBook[i].PhoneNumber);
		}
		else{
			printf("Oops! %s is not in the PhoneBook\n\n",inname);
		}
}
 
