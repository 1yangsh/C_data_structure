#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char name[20];
	printf("�̸��� �Է��Ͻÿ� : ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	return 0;
}