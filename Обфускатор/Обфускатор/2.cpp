#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int passcheck(char s[21]) {
	FILE *f = fopen("pass.dat", "r");
	char pas[21] = "n";
	fgets(pas, 20, f);
	fclose(f);
	int i = 0;
	while (pas[i]) {
		if (pas[i] != s[i]) { return 0; }
		i++;
	}
	if (s[i] != '\0') { return 0; }
	else { return 1; }
}


int main() {
	char pass[21];
	printf("Input password (not more 20 simbols):");
	scanf("%s", &pass);
	if (passcheck(pass)) { goto next; }
	else { printf("Wrong passsord!\n"); goto exit; }
next:
	printf("Hello, User!\n\n(c)Mixno Production O_^_O\n");
	//Telo programmi
exit:
	_getch();
	return 0;
}





/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int passcheck(char s[21]) {
	FILE *f = fopen("passs.dat", "r");
	char pas[21] = "n", cip[21]="cipHeRbYmIxNoprod228";
	fgets(pas, 20, f);
	fclose(f);
	int i = 0;
	while (pas[i]) {
		if (pas[i] != (s[i]^cip[i])) { return 0; }
		i++;
	}
	if (s[i] != '\0') { return 0; }
	else { return 1; }
}


int main() {
	char pass[21];
	printf("Input password (not more 20 simbols):");
	scanf("%s", &pass);
	if (passcheck(pass)) { goto next; }
	else { printf("Wrong passsord!\n"); goto exit; }
next:
	printf("Hello, User!\n\n(c)Mixno Production O_^_O\n");
	//Telo programmi
exit:
	_getch();
	return 0;
	}*/