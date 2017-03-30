#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

int Password()
{
	char pass[30], check[30];
	FILE * fi;
	fopen_s(&fi, "password.txt", "r");
	fscanf_s(fi, "%s", &pass, 30);
	fclose(fi);
	printf("Hello! Enter password:\n\r");
	scanf_s("%s", &check, 30);
	if (strcmp(check, pass))
		return 0;
	else
		return 1;
}

int main()
{
	if (!Password())
	{
		perror("Nice try.");
		abort();
	}
	else
		printf("Nice to see you.");
	getchar();
	getchar();
	return 0;
}