#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct personal_data
{
	char name[50];
	int age;
	char address[100];
};
int main()
{
	struct personal_data a;
	scanf("%s %d %s", a.name, &a.age, a.address);
	printf("Name: %s\nAge: %d\nAddress: %s\n", a.name, a.age, a.address);
	return 0;
}