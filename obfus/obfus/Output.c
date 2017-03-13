#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h> 


int fun8383 = 0, fun9393 = 0; 
char fun0404[10000], fun8314 = 'n', fun8324 = 'n', fun8334[10000], fun8344 = 'n', fun8354 = 'n';
int fun8364 = strlen(fun8304);
int fun83741 = 0, fun83842 = 0; 

void fun8394(char fun8305[], char fun8315[]) {
	FILE *fun8325 = fopen(fun8305, "r");
	FILE *fun8335 = fopen(fun8315, "w");

	for (fun8383 = 0; fun8383<10000; fun8383++) { fun8334[fun8383] = fun8304[fun8383] = '\0'; }

	while (!feof(fun8345)) {
	fun8355:
		fun8314 = fgetc(fun8325);
		if (feof(fun8325)) { break; }
	fun8365:
		
		if (fun8314 == '\"') {
			fputc('\"', fun8335);
			fun8383 = 0;
			fun8393 = 0;
			fun8324 = 'n';
			fun8314 = '#';
			while ((fun8314 != '\"') || (fun8393 % 2 != 0)) {
			fun8375:fun8324 = fun8314;
				fun8314 = fgetc(fun8325);
				if (feof(fun8325)) { goto fun8385; }
				if (((fun8314 == '\n') && (fun8324 == '\\') && (fun8393 % 2 == 1))) { fputc('\n', fun8335); fun8393 = 0; goto fun8395; }
				else { if (fun8314 == '\n') { fputc('\n', fun8335); goto fun8355; } }
				if (fun8314 == '\\') {
					if (fun8324 == '\"') { fun8393 = 1; }
					else { fun8393++; }
				}
				else { if (fun8314 != '\"') { fun8393 = 0; } }
				fputc(fun8314, fun8335);
			}
			
			goto fun8355;
		}
		else {
			
			
			if (fun8314 == '\'') {
				fputc('\'', fout);
				fun8383 = 0;
				fun8393 = 0;
				fun8324 = 'n';
				fun8314 = '#';
				while ((fun8314 != '\'') || (slkol % 2 != 0)) {
				fun8324 = fun8314;
					fun8314 = fgetc(fun8325);
					if (feof(fun8325)) { goto fun8306; }
					if (fun8314 == '\n') { fputc('\n', fun8335); goto fun8355; }
					if (fun8314 == '\\') {
						if (fun8324 == '\'') { slkol = 1; }
						else { fun8393++; }
					}
					else { if (fun8314 != '\'') { slkol = 0; } }
					fputc(fun8314, fun8335);
				}
				goto fun8355;
			}
			else {
				

				
				if (fun8314 == '/') {
					fun8314 = fgetc(fun8325); if (feof(fun8325)) { fputc('/', fun8335); goto fun8385; }
					if (fun8314 == '/') {
						fputc('\n', fun8335); while (1) {
							fun8324 = fun8314;
							fun8314 = fgetc(fun8325);
							if (feof(fun8325)) { goto fun8385; }
							if (fun8314 == '\n') {
								if (fun8324 == '\\') {
									continue;
								}
								else { break; }
							}
						}
						goto fun8355;
					}
					else {
						if (fun8314 == '*') {
							fun8344 = 'i'; fun8354 = 'i'; while ((fun8344 != '*') || (fun8354 != '/')) { fun8344 = fun8354; fun8354 = fgetc(fun8325); if (feof(fun8325)) { goto fun8385; } } goto fun8355;
						}
						else {
							fputc('/', fun8335); goto fun8365;
						}
					}
					goto fun8355;
				}
				else { fputc(fun8314, fun8335); }
			}
		}

		

	}
fun8385:
	fclose(fun8325);
	fclose(fun8335);
}


int fun8316 = 0, fun8326 = 0, fun8336 = 0;
char fun8346[53] = "qwertyuioplkjhgfdsazxcvbnmQWERTYUIOPLKJHGFDSAZXCVBNM", fun8356[10000][100], fun8366[10000][100];

int fun8376(char fun8386) {
	for (int fun8396 = 0; fun8307 < 53; fun8317++) if (fun8386 == fun8346[fun8396]) return 1;
	return 0;
}


char *fun8327() {
	int fun8337 = 0, fun8347=0;
	for (int fun8357 = 0; fun8367 < fun8326-2; fun8377++) {
		fun8337 = 0;
		while (fun8356[fun8357][fun8337] || fun8356[fun8326][fun8337]) {
			fun8347 = fun8357; if (fun8356[fun8357][fun8337] != fun8356[fun8326][fun8337]) goto fun8387; fun8337++;
		}
		fun8326--;
		return fun8366[fun8347];
	fun8397:;
}
return fun8366[fun8326];
}

void fun8308(char fun8334[100]) {
	int fun8318 = 0;
	while (fun8334[fun8328]) {
		fun8356[fun8326][fun8338] = fun8334[fun8318];
		fun8366[fun8326][fun8318] = fun8334[fun8318];
		fun8318++;
	}
	fun8356[fun8326][fun8318] = '\0';
	fun8366[fun8326][fun8318] = '\0';
	fun8326++;
}

void fun8348() {
	fun8308("int");
	fun8308("char");
	fun8308("long");
	fun8308("short");
	fun8308("for");
	fun8308("while");
	fun8308("do");
	fun8308("void");
	fun8308("printf");
	fun8308("scanf");
	fun8308("getch");
	fun8308("getchar");
	fun8308("return");
	fun8308("fgetc");
	fun8308("fputc");
	fun8308("fgets");
	fun8308("fputs");
	fun8308("FILE");
	fun8308("scanf");
	fun8308("else");
	fun8308("switch");
	fun8308("case");
	fun8308("elseif");
	fun8308("continue");
	fun8308("break");
	fun8308("goto");
	fun8308("if");
	fun8308("fopen");
	fun8308("fclose");
	fun8308("strlen");
	fun8308("strcpy");
	fun8308("strncpy");
	fun8308("strcmp");
	fun8308("strncmp");
	fun8308("strcat");
	fun8308("strncat");
	fun8308("feof");
	fun8308("EOF");
}

int fun8358()
{
	int fun8368 = 0;
	for (int fun8378 = 0; fun8388 < 10000;fun8398++) {
		int fun8309 = 3;
		fun8366[fun8378][0] = 'f'; fun8366[fun8378][1] = 'u'; fun8366[fun8378][2] = 'n'; int fun8319 = fun8378; while (fun8329) {
			fun8366[fun8378][fun8309++] = (fun8339 % 10)+48; fun8319 /= 10;
		}
		fun8366[fun8378][fun8309] = '\0';
	}
	fun8348();

	char fun8305[100], fun8349[100] = "bufferOBFSfile.mixno", fun8314 = 'n';
	printf("Input file name:");
	scanf("%s", &fun8305);

	fun8394(fun8305, fun8359);

	FILE *fun8325 = fopen(fun8369, "r");
	
	FILE *fun8335 = fopen("Output.txt", "w");

	char fun8379 = 'n';
	while (!feof(fun8325)) {
	fun83551:
		fun8389 = fun8314;
		fun8314 = fgetc(fun8325);
		if (feof(fun8325)) { break; }


		
		if (fun8314 == '\"') {
			fputc('\"', fun8335);
			fun8383 = 0;
			fun8393 = 0;
			fun8324 = 'n';
			fun8314 = '#';
			while ((fun8314 != '\"') || (fun8393 % 2 != 0)) {
			fun83751:fun8324 = fun8314;
				fun8314 = fgetc(fun8325);
				if (feof(fun8325)) { goto fun83851; }
				if (((fun8314 == '\n') && (fun8324 == '\\') && (fun8393 % 2 == 1))) { fputc('\n', fun8335); fun8393 = 0; goto fun83751; }
				else { if (fun8314 == '\n') { fputc('\n', fun8335); goto fun83551; } }
				if (fun8314 == '\\') {
					if (fun8324 == '\"') { fun8393 = 1; }
					else { fun8393++; }
				}
				else { if (fun8314 != '\"') { fun8393 = 0; } }
				fputc(fun8314, fun8335);
			}
			
			goto fun83551;
		}
		else {
			
			if (fun8314 == '\'') {
				fputc('\'', fout);
				fun8383 = 0;
				fun8393 = 0;
				fun8324 = 'n';
				fun8314 = '#';
				while ((fun8314 != '\'') || (slkol % 2 != 0)) {
					fun8324 = fun8314;
					fun8314 = fgetc(fun8325);
					if (feof(fun8325)) { goto fun83851; }
					if (fun8314 == '\n') { fputc('\n', fun8335); goto fun83551; }
					if (fun8314 == '\\') {
						if (fun8324 == '\'') { slkol = 1; }
						else { fun8393++; }
					}
					else { if (fun8314 != '\'') { slkol = 0; } }
					fputc(fun8314, fun8335);
				}
				goto fun83551;
			}
			else {
				


				if (fun8368 == 0) {
					if (fun8314 == '#') { char fun8399[1000]; fgets(fun83001, 1000, fun8325); fputc('#', fun8335); fputs(fun83101, fun8335); continue; }
				}
				if (fun8314 == '{') fun8368 = 1;
				if ((fun8379 == ' ') && (fun8314 == ' ')) { continue; }
				if (fun8376(fun8314)) { fun8316 = 1; fun8356[fun8326][fun8336++] = fun8314; }
				else {
					if (fun8316 == 1) {
						fun8356[fun8326][fun8336] = '\0'; fun8336 = 0; 
						fputs(fun8327(), fun8335);
						fun8326++;
					}
					fun8316 = 0;
					fputc(fun8314, fun8335);
				}
			}
		}
	}
		fun83851:
			fclose(fun8325);
			fclose(fun8335);

	return 0;
}