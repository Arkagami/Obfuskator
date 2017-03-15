#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int fun83(char fun93[21]) {
	FILE *fun04 = fopen("pass.dat", "r");
	char fun14[21] = "n";
	fgets(fun14, 20, fun04);
	fclose(fun04);
	int fun24 = 0;
	while (fun14[fun24]) {
		if (fun14[fun24] != fun93[fun24]) { return 0; }
		fun24++;
	}
	if (fun93[fun24] != '\0') { return 0; }
	else { return 1; }
}


int fun34() {
	char fun44[21];
	printf("Input password (not more 20 simbols):");
	scanf("%s", &fun44);
	if (fun83(fun44)) { goto fun54; }
	else { printf("Wrong passsord!\n"); goto fun64; }
fun54:
	printf("Hello, User!\n\n(c)Mixno Production O_^_O\n");
	
fun64:
	_getch();
	return 0;
}





