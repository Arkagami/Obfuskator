#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h> 

int fun93 = 0, fun04 = 0; 
char fun14[10000], fun24 = 'n', fun34 = 'n', fun44[10000], fun54 = 'n', fun64 = 'n';
int fun74 = strlen(fun14);
int fun841 = 0, fun942 = 0; 

void fun05(char fun15[], char fun25[]) {
	FILE *fun35 = fopen(fun15, "r");
	FILE *fun45 = fopen(fun25, "w");

	for (fun93 = 0; fun93<10000; fun93++) { fun44[fun93] = fun14[fun93] = '\0'; }

	while (!feof(fun35)) {
	fun55:
		fun24 = fgetc(fun35);
		if (feof(fun35)) { break; }
	fun65:
		
		if (fun24 == '\"') {
			fputc('\"', fun45);
			fun93 = 0;
			fun04 = 0;
			fun34 = 'n';
			fun24 = '#';
			while ((fun24 != '\"') || (fun04 % 2 != 0)) {
			fun75:fun34 = fun24;
				fun24 = fgetc(fun35);
				if (feof(fun35)) { goto fun85; }
				if (((fun24 == '\n') && (fun34 == '\\') && (fun04 % 2 == 1))) { fputc('\n', fun45); fun04 = 0; goto fun75; }
				else { if (fun24 == '\n') { fputc('\n', fun45); goto fun55; } }
				if (fun24 == '\\') {
					if (fun34 == '\"') { fun04 = 1; }
					else { fun04++; }
				}
				else { if (fun24 != '\"') { fun04 = 0; } }
				fputc(fun24, fun45);
			}
			
			goto fun55;
		}
		else {
			
			
			if (fun24 == '\'') {
				fputc('\'', fout);
				fun93 = 0;
				fun04 = 0;
				fun34 = 'n';
				fun24 = '#';
				while ((fun24 != '\'') || (slkol % 2 != 0)) {
					fun34 = fun24;
					fun24 = fgetc(fun35);
					if (feof(fun35)) { goto fun95; }
					if (fun24 == '\n') { fputc('\n', fun45); goto fun55; }
					if (fun24 == '\\') {
						if (fun34 == '\'') { slkol = 1; }
						else { fun04++; }
					}
					else { if (fun24 != '\'') { slkol = 0; } }
					fputc(fun24, fun45);
				}
				goto fun55;
			}
			else {
				

				
				if (fun24 == '/') {
					fun24 = fgetc(fun35); if (feof(fun35)) { fputc('/', fun45); goto fun85; }
					if (fun24 == '/') {
						fputc('\n', fun45); while (1) {
							fun34 = fun24;
							fun24 = fgetc(fun35);
							if (feof(fun35)) { goto fun85; }
							if (fun24 == '\n') {
								if (fun34 == '\\') {
									continue;
								}
								else { break; }
							}
						}
						goto fun55;
					}
					else {
						if (fun24 == '*') {
							fun54 = 'i'; fun64 = 'i'; while ((fun54 != '*') || (fun64 != '/')) { fun54 = fun64; fun64 = fgetc(fun35); if (feof(fun35)) { goto fun85; } } goto fun55;
						}
						else {
							fputc('/', fun45); goto fun65;
						}
					}
					goto fun55;
				}
				else { fputc(fun24, fun45); }
			}
		}

		

	}
fun85:
	fclose(fun35);
	fclose(fun45);
}


int fun06 = 0, fun16 = 0, fun26 = 0;
char fun36[53] = "qwertyuioplkjhgfdsazxcvbnmQWERTYUIOPLKJHGFDSAZXCVBNM", fun46[10000][100], fun56[10000][100];

int fun66(char fun76) {
	for (int fun86 = 0; fun96 < 53; fun86++) if (fun76 == fun36[fun86]) return 1;
	return 0;
}


char *fun07() {
	int fun17 = 0, fun27 = 0;
	for (int fun37 = 0; fun47 < fun16 - 1; fun37++) {
		fun17 = 0;
		while (fun46[fun37][fun17] || fun46[fun16][fun17]) {
			fun27 = fun37; if (fun46[fun37][fun17] != fun46[fun16][fun17]) goto fun57; fun17++;
		}
		fun16--;
		return fun56[fun27];
	fun67:;
	}
	return fun56[fun16];
}

void fun77(char fun44[100]) {
	int fun87 = 0;
	while (fun44[fun97]) {
		fun46[fun16][fun87] = fun44[fun87];
		fun56[fun16][fun87] = fun44[fun87];
		fun87++;
	}
	fun46[fun16][fun87] = '\0';
	fun56[fun16][fun87] = '\0';
	fun16++;
}

void fun08() {
	fun77("int");
	fun77("char");
	fun77("long");
	fun77("short");
	fun77("for");
	fun77("while");
	fun77("do");
	fun77("void");
	fun77("printf");
	fun77("scanf");
	fun77("getch");
	fun77("getchar");
	fun77("return");
	fun77("fgetc");
	fun77("fputc");
	fun77("fgets");
	fun77("fputs");
	fun77("FILE");
	fun77("scanf");
	fun77("else");
	fun77("switch");
	fun77("case");
	fun77("elseif");
	fun77("continue");
	fun77("break");
	fun77("goto");
	fun77("if");
	fun77("fopen");
	fun77("fclose");;
	fun77("strlen");
	fun77("strcpy");
	fun77("strncpy");
	fun77("strcmp");
	fun77("strncmp");
	fun77("strcat");
	fun77("strncat");
	fun77("feof");
	fun77("EOF");
}

int fun18()
{
	int fun28 = 0;
	for (int fun38 = 0; fun48 < 10000;fun38++) {
		int fun58 = 3;
		fun56[fun38][0] = 'f'; fun56[fun38][1] = 'u'; fun56[fun38][2] = 'n'; int fun68 = fun38; while (fun78) {
			fun56[fun38][fun58++] = (fun68 % 10) + 48; fun68 /= 10;
		}
		fun56[fun38][fun58] = '\0';
	}
	fun08();

	char fun15[100], fun88[100] = "bufferOBFSfile.mixno", fun24 = 'n';
	printf("Input file name:");
	scanf("%s", &fun15);

	fun05(fun15, fun98);

	FILE *fun35 = fopen(fun88, "r");
	
	FILE *fun45 = fopen("Output.c", "w");

	char fun09 = 'n';
	while (!feof(fun35)) {
	fun551:
		fun19 = fun24;
		fun24 = fgetc(fun35);
		if (feof(fun35)) { break; }

		
		if (fun24 == '\"') {
			fputc('\"', fun45);
			fun93 = 0;
			fun04 = 0;
			fun34 = 'n';
			fun24 = '#';
			while ((fun24 != '\"') || (fun04 % 2 != 0)) {
			fun751:fun34 = fun24;
				fun24 = fgetc(fun35);
				if (feof(fun35)) { goto fun851; }
				if (((fun24 == '\n') && (fun34 == '\\') && (fun04 % 2 == 1))) { fputc('\n', fun45); fun04 = 0; goto fun751; }
				else { if (fun24 == '\n') { fputc('\n', fun45); goto fun551; } }
				if (fun24 == '\\') {
					if (fun34 == '\"') { fun04 = 1; }
					else { fun04++; }
				}
				else { if (fun24 != '\"') { fun04 = 0; } }
				fputc(fun24, fun45);
			}
			
			goto fun551;
		}
		else {
			
			
			if (fun24 == '\'') {
				fputc('\'', fout);
				fun93 = 0;
				fun04 = 0;
				fun34 = 'n';
				fun24 = '#';
				while ((fun24 != '\'') || (slkol % 2 != 0)) {
					fun34 = fun24;
					fun24 = fgetc(fun35);
					if (feof(fun35)) { goto fun851; }
					if (fun24 == '\n') { fputc('\n', fun45); goto fun551; }
					if (fun24 == '\\') {
						if (fun34 == '\'') { slkol = 1; }
						else { fun04++; }
					}
					else { if (fun24 != '\'') { slkol = 0; } }
					fputc(fun24, fun45);
				}
				goto fun551;
			}
			else {
				

				if (fun28 == 0) {
					if (fun24 == '#') { char fun29[1000]; fgets(fun39, 1000, fun35); fputc('#', fun45); fputs(fun29, fun45); continue; }
				}
				if (fun24 == '{') fun28 = 1;
				if ((fun09 == ' ') && (fun24 == ' ')) { continue; }
				if (fun66(fun24)) { if (fun06 == 0) fun16++; fun06 = 1; fun46[fun16][fun26++] = fun24; }
				else {
					if (fun06 == 1) {
						fun46[fun16][fun26] = '\0'; fun26 = 0; if (fun16 == 8) {

						}
						fputs(fun07(), fun45);
					}
					fun06 = 0;
					fputc(fun24, fun45);
				}
			}
		}
	}
fun851:;

	return 0;
}