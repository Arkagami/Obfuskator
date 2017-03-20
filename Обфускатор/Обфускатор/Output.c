#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h> 
#include <locale.h>

int fun141414 = 0, fun141424 = 0; 
char fun141434[10000], fun141444 = 'n', fun141454 = 'n', fun141464[10000], fun141474 = 'n', fun141484 = 'n';
int fun141494 = strlen(fun141434);
int fun1414051 = 0, fun1414052 = 0; 

void fun141415(char fun141425[], char fun141435[]) {
	FILE *fun141445 = fopen(fun141425, "r");
	FILE *fun141455 = fopen(fun141435, "w");

for (fun141414 = 0; fun141414<10000; fun141414++) { fun141464[fun141414] = fun141434[fun141414] = '\0'; }

while (!feof(fun141445)) {
fun141465:
	fun141444 = fgetc(fun141445);
	if (feof(fun141445)) { break; }
fun141475:
	
	if (fun141444 == '\"') {
		fputc('\"', fun141455);
		fun141414 = 0;
		fun141424 = 0;
		fun141454 = 'n';
		fun141444 = '#';
		while ((fun141444 != '\"') || (fun141424 % 2 != 0)) {
		fun141485:fun141454 = fun141444;
			fun141444 = fgetc(fun141445);
			if (feof(fun141445)) { goto fun141495; }
			if (((fun141444 == '\n') && (fun141454 == '\\') && (fun141424 % 2 == 1))) { fputc('\n', fun141455); fun141424 = 0; goto fun141485; }
			else { if (fun141444 == '\n') { fputc('\n', fun141455); goto fun141465; } }
			if (fun141444 == '\\') {
				if (fun141454 == '\"') { fun141424 = 1; }
				else { fun141424++; }
			}
			else { if (fun141444 != '\"') { if ((fun141454 == '\"') && (fun141424 % 2 == 1)) { fputc(fun141444, fun141455); goto fun141465;
			} else { fun141424 = 0; } } }
			fputc(fun141444, fun141455);
		}
		
		goto fun141465;
	}
	else {
	fun141406:;
		
		
		if (fun141444 == '\'') {
			fputc('\'', fun141455);
			fun141414 = 0;
			fun141424 = 0;
			fun141454 = 'n';
			fun141444 = '#';
			while ((fun141444 != '\'') || (fun141424 % 2 != 0)) {
			fun141416:fun141454 = fun141444;
				fun141444 = fgetc(fun141445);
				if (feof(fun141445)) { goto fun141495; }
				if (fun141444 == '\n') { fputc('\n', fun141455); goto fun141465; }
				if (fun141444 == '\\') {
					if (fun141454 == '\'') { fun141424 = 1; }
					else { fun141424++; }
				}
				else { if (fun141444 != '\'') { if ((fun141454 == '\'') && (fun141424 % 2 == 1)) { fputc(fun141444, fun141455); goto fun141465;
				} else { fun141424 = 0; } } }
				fputc(fun141444, fun141455);
			}
			goto fun141465;
		}
		else {
			

			
			if (fun141444 == '/') {
				fun141444 = fgetc(fun141445); if (feof(fun141445)) { fputc('/', fun141455); goto fun141495; }
				if (fun141444 == '/') {
					fputc('\n', fun141455); while (1) {
						fun141454 = fun141444;
						fun141444 = fgetc(fun141445);
						if (feof(fun141445)) { goto fun141495; }
						if (fun141444 == '\n') {
							if (fun141454 == '\\') {
								continue;
							}
							else { break; }
						}
					}
					goto fun141465;
				}
				else {
					if (fun141444 == '*') {
						fun141474 = 'i'; fun141484 = 'i'; while ((fun141474 != '*') || (fun141484 != '/')) { fun141474 = fun141484; fun141484 = fgetc(fun141445); if (feof(fun141445)) { goto fun141495; } } goto fun141465;
					}
					else {
						fputc('/', fun141455); goto fun141475;
					}
				}
				goto fun141465;
			}
			else { fputc(fun141444, fun141455); }
		}
	}

	

}
fun141495:
	fclose(fun141445);
	fclose(fun141455);
}


int fun141426 = 0, fun141436 = -1, fun141446 = 0, fun141454_fun141456=0;
char fun141466[53] = "qwertyuioplkjhgfdsazxcvbnmQWERTYUIOPLKJHGFDSAZXCVBNM", fun141476[10000][100], fun141486[10000][100];

int fun141496(char fun141407) {
	for (int fun141417 = 0; fun141417 < 53; fun141417++) if (fun141407 == fun141466[fun141417]) return 1;
	return 0;
}

int fun141427(char fun1414641[1000], char fun1414642[1000]) {
	int fun141437 = 0;
	while (fun1414641[fun141437] || fun1414642[fun141437]) {
		if (fun1414641[fun141437] != fun1414642[fun141437]) return 0;
		fun141437++;
	}
	return 1;
}


char *fun141447() {
	int fun141457 = 0, fun141467 = 0;
	for (int fun141477 = 0; fun141477 < fun141436; fun141477++) {
		fun141457 = 0;
		while (fun141476[fun141477][fun141457] || fun141476[fun141436][fun141457]) {
			fun141467 = fun141477; if (fun141476[fun141477][fun141457] != fun141476[fun141436][fun141457]) goto fun141487; fun141457++;
		}
		fun141436--;
		return fun141486[fun141467];
	fun141487:;
	}
	return fun141486[fun141436];
}

void fun141497(char fun141464[100]) {
	fun141436++;
	int fun141408 = 0;
	while (fun141464[fun141408]) {
		fun141476[fun141436][fun141408] = fun141464[fun141408];
		fun141486[fun141436][fun141408] = fun141464[fun141408];
		fun141408++;
	}
	fun141476[fun141436][fun141408] = '\0';
	fun141486[fun141436][fun141408] = '\0';
}

void fun141418() {
	fun141497("int");
	fun141497("char");
	fun141497("long");
	fun141497("short");
	fun141497("for");
	fun141497("while");
	fun141497("do");
	fun141497("void");
	fun141497("printf");
	fun141497("scanf");
	fun141497("getch");
	fun141497("getchar");
	fun141497("return");
	fun141497("fgetc");
	fun141497("fputc");
	fun141497("fgets");
	fun141497("fputs");
	fun141497("FILE");
	fun141497("scanf");
	fun141497("else");
	fun141497("switch");
	fun141497("case");
	fun141497("elseif");
	fun141497("continue");
	fun141497("break");
	fun141497("goto");
	fun141497("if");
	fun141497("fopen");
	fun141497("fclose");;
	fun141497("strlen");
	fun141497("strcpy");
	fun141497("strncpy");
	fun141497("strcmp");
	fun141497("strncmp");
	fun141497("strcat");
	fun141497("strncat");
	fun141497("feof");
	fun141497("EOF");
	fun141497("main");
	fun141497("setlocale");
	fun141497("LC_ALL");
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int fun141428 = 0;
	for (int fun141438 = 0; fun141438 < 10000;fun141438++) {
		int fun141448 = 3;
		fun141486[fun141438][0] = 'f'; fun141486[fun141438][1] = 'u'; fun141486[fun141438][2] = 'n'; int fun141458 = fun141438; while (fun141458) {
			fun141486[fun141438][fun141448++] = (fun141458 % 10) + 48; fun141458 /= 10;
		}
		fun141486[fun141438][fun141448] = '\0';
	}
	fun141418();

	char fun141425[100], fun141468[100] = "bufferOBFSfile.mixno", fun141444 = 'n';
	printf("Input file name:");
	scanf("%s", &fun141425);

	fun141415(fun141425, fun141468);

	FILE *fun141445 = fopen(fun141468, "r");
	
	FILE *fun141455 = fopen("Output.c", "w");

	char fun141478 = 'n';
	while (!feof(fun141445)) {
	fun1414651:
		fun141478 = fun141444;
		fun141488:
		fun141444 = fgetc(fun141445);
		if (feof(fun141445)) { break; }

		
		if (fun141444 == '\"') {
			fputc('\"', fun141455);
			fun141414 = 0;
			fun141424 = 0;
			fun141454 = 'n';
			do {
			fun1414851:fun141454 = fun141444;
				fun141444 = fgetc(fun141445);
				if (feof(fun141445)) { goto fun1414951; }
				if (((fun141444 == '\n') && (fun141454 == '\\') && (fun141424 % 2 == 1))) { fputc('\n', fun141455); fun141424 = 0; goto fun1414851; }
				else { if (fun141444 == '\n') { fputc('\n', fun141455); goto fun1414651; } }
				if (fun141444 == '\\') {
					if (fun141454 == '\"') { fun141424 = 1; }
					else { fun141424++; }
				}
				else { if (fun141444 != '\"') { if ((fun141454 == '\"') && (fun141424 % 2 == 1)) { fputc(fun141444, fun141455); goto fun1414651;
				} else { fun141424 = 0; } } }
				fputc(fun141444, fun141455);
			} while ((fun141444 != '\"') || (fun141424 % 2 != 0));
			
			goto fun1414651;
		}
		else {
		fun1414061:;
			
			
			if (fun141444 == '\'') {
				fputc('\'', fun141455);
				fun141414 = 0;
				fun141424 = 0;
				fun141454 = 'n';
				do {
				fun1414161:fun141454 = fun141444;
					fun141444 = fgetc(fun141445);
					if (feof(fun141445)) { goto fun1414951; }
					if (fun141444 == '\n') { fputc('\n', fun141455); goto fun1414651; }
					if (fun141444 == '\\') {
						if (fun141454 == '\'') { fun141424 = 1; }
						else { fun141424++; }
					}
					else { if (fun141444 != '\'') { if ((fun141454=='\'')&&(fun141424 % 2 == 1)) { fputc(fun141444, fun141455); goto fun1414651;
					} else { fun141424 = 0; } } }
					fputc(fun141444, fun141455);
				} while ((fun141444 != '\'') || (fun141424 % 2 != 0));
				goto fun1414651;
			}
			else {
				
			fun141498:

				
				
				if (fun141428 == 0) {
					if (fun141444 == '#') { char fun141409[1000]; fgets(fun141409, 1000, fun141445); fputc('#', fun141455); fputs(fun141409, fun141455); continue; }
				}
				if (fun141444 == '{') fun141428 = 1;
				if ((fun141478 == ' ') && (fun141444 == ' ')) { goto fun141488; }
				if (fun141496(fun141444)) { if (fun141426 == 0) fun141436++; fun141426 = 1; fun141476[fun141436][fun141446++] = fun141444; }
				else {
					if (fun141426 == 1) {
						fun141476[fun141436][fun141446] = '\0'; fun141446 = 0;
						if (fun141427(fun141476[fun141436], "setlocale")) fun141454_fun141456 = 1;
						fputs(fun141447(), fun141455);
						if (fun141454_fun141456 == 1) {
							fputc(fun141444, fun141455);
							while (fun141444 != ';') { fun141444 = fgetc(fun141445); fputc(fun141444, fun141455); }
							fun141454_fun141456 = 0;
							fun141426 = 0;
							goto fun1414651;
						}
					}
					fun141426 = 0;
					fputc(fun141444, fun141455);
				}
			}
		}
	}
fun1414951:;

	return 0;
}