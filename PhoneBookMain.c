#include <stdio.h>
#include "phone.h"

int count_service=0;

void registerPhoneData();
void printAll();
void searchByName();
void deleteByName();

int main()
{
	int service;
	do
	{
		printf("==========Telephone Book Management==========");
		printf("\n <<<1.Register\t 2.print All\t 3.Search by ID\t 4.Delete\t 5.Exit >>>\n");
		printf("Please enter your service number (1-5)> ");
		scanf("%d",&service);

		switch(service)
		{
			case 1: registerPhoneData(); break;
			case 2: printAll(); break;
			case 3: searchByName(); break;
			case 4: deleteByName(); break;
		}
	} while(service!=5);
	return 0;
}
	
