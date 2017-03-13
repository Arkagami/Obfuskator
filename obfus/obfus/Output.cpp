#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h> 


int fun83 = 0, fun93 = 0;
char fun04[10000], fun14 = 'n', fun24 = 'n', fun34[10000], fun44 = 'n', fun54 = 'n';
int fun64 = strlen(fun04);
int fun741 = 0, fun842 = 0;

void fun94(char fun05[], char fun15[]) {
	FILE *fun25 = fopen(fun05, "r");
	FILE *fun35 = fopen(fun15, "w");

	for (fun83 = 0; fun83<10000; fun83++) { fun34[fun83] = fun04[fun83] = '\0'; }

	while (!feof(fun45)) {
	fun55:
		fun14 = fgetc(fun25);
		if (feof(fun25)) { break; }
	fun65:

		if (fun14 == '\"') {
			fputc('\"', fun35);
			fun83 = 0;
			fun93 = 0;
			fun24 = 'n';
			fun14 = '#';
			while ((fun14 != '\"') || (fun93 % 2 != 0)) {
			fun75:fun24 = fun14;
				fun14 = fgetc(fun25);
				if (feof(fun25)) { goto fun85; }
				if (((fun14 == '\n') && (fun24 == '\\') && (fun93 % 2 == 1))) { fputc('\n', fun35); fun93 = 0; goto fun95; }
				else { if (fun14 == '\n') { fputc('\n', fun35); goto fun55; } }
				if (fun14 == '\\') {
					if (fun24 == '\"') { fun93 = 1; }
					else { fun93++; }
				}
				else { if (fun14 != '\"') { fun93 = 0; } }
				fputc(fun14, fun35);
			}

			goto fun55;
		}
		else {


			if (fun14 == '\'') {
				fputc('\'', fout);
				fun83 = 0;
				fun93 = 0;
				fun24 = 'n';
				fun14 = '#';
				while ((fun14 != '\'') || (slkol % 2 != 0)) {
					fun24 = fun14;
					fun14 = fgetc(fun25);
					if (feof(fun25)) { goto fun06; }
					if (fun14 == '\n') { fputc('\n', fun35); goto fun55; }
					if (fun14 == '\\') {
						if (fun24 == '\'') { slkol = 1; }
						else { fun93++; }
					}
					else { if (fun14 != '\'') { slkol = 0; } }
					fputc(fun14, fun35);
				}
				goto fun55;
			}
			else {



				if (fun14 == '/') {
					fun14 = fgetc(fun25); if (feof(fun25)) { fputc('/', fun35); goto fun85; }
					if (fun14 == '/') {
						fputc('\n', fun35); while (1) {
							fun24 = fun14;
							fun14 = fgetc(fun25);
							if (feof(fun25)) { goto fun85; }
							if (fun14 == '\n') {
								if (fun24 == '\\') {
									continue;
								}
								else { break; }
							}
						}
						goto fun55;
					}
					else {
						if (fun14 == '*') {
							fun44 = 'i'; fun54 = 'i'; while ((fun44 != '*') || (fun54 != '/')) { fun44 = fun54; fun54 = fgetc(fun25); if (feof(fun25)) { goto fun85; } } goto fun55;
						}
						else {
							fputc('/', fun35); goto fun65;
						}
					}
					goto fun55;
				}
				else { fputc(fun14, fun35); }
			}
		}



	}
fun85:
	fclose(fun25);
	fclose(fun35);
}


int fun16 = 0, fun26 = 0, fun36 = 0;
char fun46[53] = "qwertyuioplkjhgfdsazxcvbnmQWERTYUIOPLKJHGFDSAZXCVBNM", fun56[10000][100], fun66[10000][100];

int fun76(char fun86) {
	for (int fun96 = 0; fun07 < 53; fun17++) if (fun86 == fun46[fun96]) return 1;
	return 0;
}


char *fun27() {
	int fun37 = 0, fun47 = 0;
	for (int fun57 = 0; fun67 < fun26 - 2; fun77++) {
		fun37 = 0;
		while (fun56[fun57][fun37] || fun56[fun26][fun37]) {
			fun47 = fun57; if (fun56[fun57][fun37] != fun56[fun26][fun37]) goto fun87; fun37++;
		}
		fun26--;
		return fun66[fun47];
	fun97:;
	}
	return fun66[fun26];
}

void fun08(char fun34[100]) {
	int fun18 = 0;
	while (fun34[fun28]) {
		fun56[fun26][fun38] = fun34[fun18];
		fun66[fun26][fun18] = fun34[fun18];
		fun18++;
	}
	fun56[fun26][fun18] = '\0';
	fun66[fun26][fun18] = '\0';
	fun26++;
}

void fun48() {
	fun08("int");
	fun08("char");
	fun08("long");
	fun08("short");
	fun08("for");
	fun08("while");
	fun08("do");
	fun08("void");
	fun08("printf");
	fun08("scanf");
	fun08("getch");
	fun08("getchar");
	fun08("return");
	fun08("fgetc");
	fun08("fputc");
	fun08("fgets");
	fun08("fputs");
	fun08("FILE");
	fun08("scanf");
	fun08("else");
	fun08("switch");
	fun08("case");
	fun08("elseif");
	fun08("continue");
	fun08("break");
	fun08("goto");
	fun08("if");
	fun08("fopen");
	fun08("fclose");
	fun08("strlen");
	fun08("strcpy");
	fun08("strncpy");
	fun08("strcmp");
	fun08("strncmp");
	fun08("strcat");
	fun08("strncat");
	fun08("feof");
	fun08("EOF");
}

int fun58()
{
	int fun68 = 0;
	for (int fun78 = 0; fun88 < 10000;fun98++) {
		int fun09 = 3;
		fun66[fun78][0] = 'f'; fun66[fun78][1] = 'u'; fun66[fun78][2] = 'n'; int fun19 = fun78; while (fun29) {
			fun66[fun78][fun09++] = (fun39 % 10) + 48; fun19 /= 10;
		}
		fun66[fun78][fun09] = '\0';
	}
	fun48();

	char fun05[100], fun49[100] = "bufferOBFSfile.mixno", fun14 = 'n';
	printf("Input file name:");
	scanf("%s", &fun05);

	fun94(fun05, fun59);

	FILE *fun25 = fopen(fun69, "r");

	FILE *fun35 = fopen("Output.c", "w");

	char fun79 = 'n';
	while (!feof(fun25)) {
	fun551:
		fun89 = fun14;
		fun14 = fgetc(fun25);
		if (feof(fun25)) { break; }



		if (fun14 == '\"') {
			fputc('\"', fun35);
			fun83 = 0;
			fun93 = 0;
			fun24 = 'n';
			fun14 = '#';
			while ((fun14 != '\"') || (fun93 % 2 != 0)) {
			fun751:fun24 = fun14;
				fun14 = fgetc(fun25);
				if (feof(fun25)) { goto fun851; }
				if (((fun14 == '\n') && (fun24 == '\\') && (fun93 % 2 == 1))) { fputc('\n', fun35); fun93 = 0; goto fun751; }
				else { if (fun14 == '\n') { fputc('\n', fun35); goto fun551; } }
				if (fun14 == '\\') {
					if (fun24 == '\"') { fun93 = 1; }
					else { fun93++; }
				}
				else { if (fun14 != '\"') { fun93 = 0; } }
				fputc(fun14, fun35);
			}

			goto fun551;
		}
		else {

			if (fun14 == '\'') {
				fputc('\'', fout);
				fun83 = 0;
				fun93 = 0;
				fun24 = 'n';
				fun14 = '#';
				while ((fun14 != '\'') || (slkol % 2 != 0)) {
					fun24 = fun14;
					fun14 = fgetc(fun25);
					if (feof(fun25)) { goto fun851; }
					if (fun14 == '\n') { fputc('\n', fun35); goto fun551; }
					if (fun14 == '\\') {
						if (fun24 == '\'') { slkol = 1; }
						else { fun93++; }
					}
					else { if (fun14 != '\'') { slkol = 0; } }
					fputc(fun14, fun35);
				}
				goto fun551;
			}
			else {



				if (fun68 == 0) {
					if (fun14 == '#') { char fun99[1000]; fgets(fun001, 1000, fun25); fputc('#', fun35); fputs(fun101, fun35); continue; }
				}
				if (fun14 == '{') fun68 = 1;
				if ((fun79 == ' ') && (fun14 == ' ')) { continue; }
				if (fun76(fun14)) { fun16 = 1; fun56[fun26][fun36++] = fun14; }
				else {
					if (fun16 == 1) {
						fun56[fun26][fun36] = '\0'; fun36 = 0;
						fputs(fun27(), fun35);
						fun26++;
					}
					fun16 = 0;
					fputc(fun14, fun35);
				}
			}
		}
	}
fun851:
	fclose(fun25);
	fclose(fun35);

	return 0;
}