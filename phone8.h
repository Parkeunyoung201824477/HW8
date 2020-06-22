#define MAX 50

typedef struct contact_st
{
	char Name[10];
	char PhoneNumber[14];
	int* next;
}contact;

contact PhoneBook[MAX];

