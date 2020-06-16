#define MAX 50

typedef struct contact_st
{
	char Name[10];
	char PhoneNumber[14];
	struct contact_st* next;
}contact;

contact PhoneBook[MAX];

