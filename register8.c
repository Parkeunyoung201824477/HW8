#include <stdio.h>
#include "phone8.h"
#include <string.h>
#include <stdlib.h>

extern int count_service;

void registerPhoneData(contact* head){
	contact* tail=(contact*)malloc(sizeof(contact));
	char pwd[]="qwert1234";
	char inpwd[20];
	printf("Ask to type password\n");
	printf("Password: ");
	while((scanf("%s", &inpwd) && (strcmp(inpwd,pwd)==0) || count_service!=3)) {
		if(strcmp(inpwd, pwd)==0) {
			printf("New User Name: ");
			scanf("%s", tail->Name);
			printf("PhoneNumber: ");
			scanf("%s", tail->PhoneNumber);
			printf("Registered...\n\n");
			count_service=0;
			tail->next=NULL;
			while(head->next!=NULL)
				head=head->next;
			head->next=tail;
			break;
		}
		else{
			count_service+=1;
			if(count_service==1)
				printf(">>>Not Matched!!!\n");
			if(count_service==2)
				printf(">>>Not Matched(twice)!!!\n");
			if(count_service==3){
				printf("cccees PhoneBook.\n\n");
				count_service=0;
				break;
			}
		}
	}
}
 
