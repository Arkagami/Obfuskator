#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h> 

int fun939393 = 0, fun040404 = 0; 
char fun939314[10000], fun939324 = 'n', fun939334 = 'n', fun939344[10000], fun939354 = 'n', fun939364 = 'n';
int fun939374 = strlen(fun939314);
int fun9393841 = 0, fun9393942 = 0; 

void fun939305(char fun939315[], char fun939325[]) {
	FILE *fun939335 = fopen(fun939315, "r");
	FILE *fun939345 = fopen(fun939325, "w");

	for (fun939393 = 0; fun939393<10000; fun939393++) { fun939344[fun939393] = fun939314[fun939393] = '\0'; }

	while (!feof(fun939335)) {
	fun939355:
		fun939324 = fgetc(fun939335);
		if (feof(fun939335)) { break; }
	fun939365:
		
		if (fun939324 == '\"') {
			fputc('\"', fun939345);
			fun939393 = 0;
			fun939304 = 0;
			fun939334 = 'n';
			fun939324 = '#';
			while ((fun939324 != '\"') || (fun939304 % 2 != 0)) {
			fun939375:fun939334 = fun939324;
				fun939324 = fgetc(fun939335);
				if (feof(fun939335)) { goto fun939385; }
				if (((fun939324 == '\n') && (fun939334 == '\\') && (fun939304 % 2 == 1))) { fputc('\n', fun939345); fun939304 = 0; goto fun939375; }
				else { if (fun939324 == '\n') { fputc('\n', fun939345); goto fun939355; } }
				if (fun939324 == '\\') {
					if (fun939334 == '\"') { fun939304 = 1; }
					else { fun939304++; }
				}
				else { if (fun939324 != '\"') { fun939304 = 0; } }
				fputc(fun939324, fun939345);
			}
			
			goto fun939355;
		}
		else {
			
			
			if (fun939324 == '\'') {
				fputc('\'', fout);
				fun939393 = 0;
				fun939304 = 0;
				fun939334 = 'n';
				fun939324 = '#';
				while ((fun939324 != '\'') || (slkol % 2 != 0)) {
					fun939334 = fun939324;
					fun939324 = fgetc(fun939335);
					if (feof(fun939335)) { goto fun939395; }
					if (fun939324 == '\n') { fputc('\n', fun939345); goto fun939355; }
					if (fun939324 == '\\') {
						if (fun939334 == '\'') { slkol = 1; }
						else { fun939304++; }
					}
					else { if (fun939324 != '\'') { slkol = 0; } }
					fputc(fun939324, fun939345);
				}
				goto fun939355;
			}
			else {
				

				
				if (fun939324 == '/') {
					fun939324 = fgetc(fun939335); if (feof(fun939335)) { fputc('/', fun939345); goto fun939385; }
					if (fun939324 == '/') {
						fputc('\n', fun939345); while (1) {
							fun939334 = fun939324;
							fun939324 = fgetc(fun939335);
							if (feof(fun939335)) { goto fun939385; }
							if (fun939324 == '\n') {
								if (fun939334 == '\\') {
									continue;
								}
								else { break; }
							}
						}
						goto fun939355;
					}
					else {
						if (fun939324 == '*') {
							fun939354 = 'i'; fun939364 = 'i'; while ((fun939354 != '*') || (fun939364 != '/')) { fun939354 = fun939364; fun939364 = fgetc(fun939335); if (feof(fun939335)) { goto fun939385; } } goto fun939355;
						}
						else {
							fputc('/', fun939345); goto fun939365;
						}
					}
					goto fun939355;
				}
				else { fputc(fun939324, fun939345); }
			}
		}

		

	}
fun939385:
	fclose(fun939335);
	fclose(fun939345);
}


int fun939306 = 0, fun939316 = 0, fun939326 = 0;
char fun939336[53] = "qwertyuioplkjhgfdsazxcvbnmQWERTYUIOPLKJHGFDSAZXCVBNM", fun939346[10000][100], fun939356[10000][100];

int fun939366(char fun939376) {
	for (int fun939386 = 0; fun939396 < 53; fun939386++) if (fun939376 == fun939336[fun939386]) return 1;
	return 0;
}


char *fun939307() {
	int fun939317 = 0, fun939327 = 0;
	for (int fun939337 = 0; fun939347 < fun939316 - 1; fun939337++) {
		fun939317 = 0;
		while (fun939346[fun939337][fun939317] || fun939346[fun939316][fun939317]) {
			fun939327 = fun939337; if (fun939346[fun939337][fun939317] != fun939346[fun939316][fun939317]) goto fun939357; fun939317++;
		}
		fun939316--;
		return fun939356[fun939327];
	fun939367:;
	}
	return fun939356[fun939316];
}

void fun939377(char fun939344[100]) {
	int fun939387 = 0;
	while (fun939344[fun939397]) {
		fun939346[fun939316][fun939387] = fun939344[fun939387];
		fun939356[fun939316][fun939387] = fun939344[fun939387];
		fun939387++;
	}
	fun939346[fun939316][fun939387] = '\0';
	fun939356[fun939316][fun939387] = '\0';
	fun939316++;
}

void fun939308() {
	fun939377("int");
	fun939377("char");
	fun939377("long");
	fun939377("short");
	fun939377("for");
	fun939377("while");
	fun939377("do");
	fun939377("void");
	fun939377("printf");
	fun939377("scanf");
	fun939377("getch");
	fun939377("getchar");
	fun939377("return");
	fun939377("fgetc");
	fun939377("fputc");
	fun939377("fgets");
	fun939377("fputs");
	fun939377("FILE");
	fun939377("scanf");
	fun939377("else");
	fun939377("switch");
	fun939377("case");
	fun939377("elseif");
	fun939377("continue");
	fun939377("break");
	fun939377("goto");
	fun939377("if");
	fun939377("fopen");
	fun939377("fclose");;
	fun939377("strlen");
	fun939377("strcpy");
	fun939377("strncpy");
	fun939377("strcmp");
	fun939377("strncmp");
	fun939377("strcat");
	fun939377("strncat");
	fun939377("feof");
	fun939377("EOF");
}

int fun939318()
{
	int fun939328 = 0;
	for (int fun939338 = 0; fun939348 < 10000;fun939338++) {
		int fun939358 = 3;
		fun939356[fun939338][0] = 'f'; fun939356[fun939338][1] = 'u'; fun939356[fun939338][2] = 'n'; int fun939368 = fun939338; while (fun939378) {
			fun939356[fun939338][fun939358++] = (fun939368 % 10) + 48; fun939368 /= 10;
		}
		fun939356[fun939338][fun939358] = '\0';
	}
	fun939308();

	char fun939315[100], fun939388[100] = "bufferOBFSfile.mixno", fun939324 = 'n';
	printf("Input file name:");
	scanf("%s", &fun939315);

	fun939305(fun939315, fun939398);

	FILE *fun939335 = fopen(fun939388, "r");
	
	FILE *fun939345 = fopen("Output.c", "w");

	char fun939309 = 'n';
	while (!feof(fun939335)) {
	fun9393551:
		fun939319 = fun939324;
		fun939324 = fgetc(fun939335);
		if (feof(fun939335)) { break; }

		
		if (fun939324 == '\"') {
			fputc('\"', fun939345);
			fun939393 = 0;
			fun939304 = 0;
			fun939334 = 'n';
			fun939324 = '#';
			while ((fun939324 != '\"') || (fun939304 % 2 != 0)) {
			fun9393751:fun939334 = fun939324;
				fun939324 = fgetc(fun939335);
				if (feof(fun939335)) { goto fun9393851; }
				if (((fun939324 == '\n') && (fun939334 == '\\') && (fun939304 % 2 == 1))) { fputc('\n', fun939345); fun939304 = 0; goto fun9393751; }
				else { if (fun939324 == '\n') { fputc('\n', fun939345); goto fun9393551; } }
				if (fun939324 == '\\') {
					if (fun939334 == '\"') { fun939304 = 1; }
					else { fun939304++; }
				}
				else { if (fun939324 != '\"') { fun939304 = 0; } }
				fputc(fun939324, fun939345);
			}
			
			goto fun9393551;
		}
		else {
			
			
			if (fun939324 == '\'') {
				fputc('\'', fout);
				fun939393 = 0;
				fun939304 = 0;
				fun939334 = 'n';
				fun939324 = '#';
				while ((fun939324 != '\'') || (slkol % 2 != 0)) {
					fun939334 = fun939324;
					fun939324 = fgetc(fun939335);
					if (feof(fun939335)) { goto fun9393851; }
					if (fun939324 == '\n') { fputc('\n', fun939345); goto fun9393551; }
					if (fun939324 == '\\') {
						if (fun939334 == '\'') { slkol = 1; }
						else { fun939304++; }
					}
					else { if (fun939324 != '\'') { slkol = 0; } }
					fputc(fun939324, fun939345);
				}
				goto fun9393551;
			}
			else {
				

				if (fun939328 == 0) {
					if (fun939324 == '#') { char fun939329[1000]; fgets(fun939339, 1000, fun939335); fputc('#', fun939345); fputs(fun939329, fun939345); continue; }
				}
				if (fun939324 == '{') fun939328 = 1;
				if ((fun939309 == ' ') && (fun939324 == ' ')) { continue; }
				if (fun939366(fun939324)) { if (fun939306 == 0) fun939316++; fun939306 = 1; fun939346[fun939316][fun939326++] = fun939324; }
				else {
					if (fun939306 == 1) {
						fun939346[fun939316][fun939326] = '\0'; fun939326 = 0; if (fun939316 == 8) {

						}
						fputs(fun939307(), fun939345);
					}
					fun939306 = 0;
					fputc(fun939324, fun939345);
				}
			}
		}
	}
fun9393851:;

	return 0;
}