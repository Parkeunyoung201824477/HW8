#include <stdio.h>
#include "phone.h"

void printAll()
{
	int i;
	for(i=0;i<size;i++){
		printf("%s\t%s\n",PhoneBook[i].Name,PhoneBook[i].PhoneNumber);
	}
	printf("\n");
}

