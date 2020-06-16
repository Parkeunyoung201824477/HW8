#include <stdio.h>
#include <string.h>
#include "phone7.h"
extern int count_service;
extern int size;

void registerPhoneData()
{
	char pwd[]="qwert1234";
	char inpwd[20];
	printf("Ask to type password\n");
	printf("Password:\n");
	while((scanf("%s", &inpwd) && (strcmp(inpwd, pwd)==0) || count_service!=3) ) {
		if(strcmp(inpwd,pwd)==0){
			printf("New user Name:");
			scanf("%s",PhoneBook[size].Name);
			printf("PhoneNumber:");
			scanf("%s", PhoneBook[size].PhoneNumber);
			printf("Registered...\n\n");
			count_service=0;
			size++;
			break;
		}
		else{
			count_service+=1;
			if(count_service==1)
				printf(">>Not Matched!!\n");
			if(count_service==2)
				printf(">>Not Matched(twice)!!!\n");
			if(count_service==3){
				printf("cccees PhoneBook.\n\n");
				count_service=0;
				break;
			}
		}
	}
}
	
