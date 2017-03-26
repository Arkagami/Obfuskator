#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h> 
#include <locale.h>

int i = 0, slkol = 0; //slkol - количество слешей, идущих подряд 
char cArray[10000], c = 'n', lc = 'n', s[10000], cc = 'n', ccc = 'n';
int len = strlen(cArray);
int kav1 = 0, kav2 = 0; // Кавычки. 1 - '_', 2 - "_"; 

void delComments(char inFile[], char outFile[]) {
	FILE *fin = fopen(inFile, "r");
	FILE *fout = fopen(outFile, "w");

for (i = 0; i<10000; i++) { s[i] = cArray[i] = '\0'; }

while (!feof(fin)) {
xyz:
	c = fgetc(fin);
	if (feof(fin)) { break; }
eto:
	//кавычки типа "_" 
	if (c == '\"') {
		fputc('\"', fout);
		i = 0;
		slkol = 0;
		lc = 'n';
		c = '#';
		while ((c != '\"') || (slkol % 2 != 0)) {
		repa:lc = c;
			c = fgetc(fin);
			if (feof(fin)) { goto tuda; }
			if (((c == '\n') && (lc == '\\') && (slkol % 2 == 1))) { fputc('\n', fout); slkol = 0; goto repa; }
			else { if (c == '\n') { fputc('\n', fout); goto xyz; } }
			if (c == '\\') {
				if (lc == '\"') { slkol = 1; }
				else { slkol++; }
			}
			else {
				if (c == '\"') {
					if (lc == '\"') {
						if (slkol % 2 == 1) {
							fputc(c, fout); goto xyz;
						}
						else { slkol = 0; }
					}
				}
				else { slkol = 0; }
			}
			fputc(c, fout);
		}
		//fputc('#', fout); 
		goto xyz;
	}
	else {
	uidi:;
		//TODO Уйти в кулинарный 
		//кавычки типа '_' 
		if (c == '\'') {
			fputc('\'', fout);
			i = 0;
			slkol = 0;
			lc = 'n';
			c = '#';
			while ((c != '\'') || (slkol % 2 != 0)) {
			repet:lc = c;
				c = fgetc(fin);
				if (feof(fin)) { goto tuda; }
				if (c == '\n') { fputc('\n', fout); goto xyz; }
				if (c == '\\') {
					if (lc == '\'') { slkol = 1; }
					else { slkol++; }
				}
				else {
					if (c == '\'') {
						if (lc == '\'') {
							if (slkol % 2 == 1) {
								fputc(c, fout); goto xyz;
							}
							else { slkol = 0; }
						}
					}
					else { slkol = 0; }
				}
				fputc(c, fout);
			}
			goto xyz;
		}
		else {
			//. 

			//Комментарии 
			if (c == '/') {
				c = fgetc(fin); if (feof(fin)) { fputc('/', fout); goto tuda; }
				if (c == '/') {
					fputc('\n', fout); while (1) {
						lc = c;
						c = fgetc(fin);
						if (feof(fin)) { goto tuda; }
						if (c == '\n') {
							if (lc == '\\') {
								continue;
							}
							else { break; }
						}
					}
					goto xyz;
				}
				else {
					if (c == '*') {
						cc = 'i'; ccc = 'i'; while ((cc != '*') || (ccc != '/')) { cc = ccc; ccc = fgetc(fin); if (feof(fin)) { goto tuda; } } goto xyz;
					}
					else {
						fputc('/', fout); goto eto;
					}
				}
				goto xyz;
			}
			else { fputc(c, fout); }
		}
	}

	//----------------------Комментарии 

}
tuda:
	fclose(fin);
	fclose(fout);
}


int word = 0, countOfWords = -1, whereWord = 0, lc_al=0;
char iswords[53] = "qwertyuioplkjhgfdsazxcvbnmQWERTYUIOPLKJHGFDSAZXCVBNM", words[10000][100], chang[10000][100];
//Проверяет символ на принадлежность к английскому алфавиту 
int isWord(char qwertyuiop) {
	for (int qwerty = 0; qwerty < 53; qwerty++) if (qwertyuiop == iswords[qwerty]) return 1;
	return 0;
}

int sravWord(char s1[1000], char s2[1000]) {
	int tt = 0;
	while (s1[tt] || s2[tt]) {
		if (s1[tt] != s2[tt]) return 0;
		tt++;
	}
	return 1;
}


char *changeWord() {
	int e = 0, save = 0;
	for (int tyoh = 0; tyoh < countOfWords; tyoh++) {
		e = 0;
		while (words[tyoh][e] || words[countOfWords][e]) {
			save = tyoh; if (words[tyoh][e] != words[countOfWords][e]) goto met; e++;
		}
		countOfWords--;
		return chang[save];
	met:;
	}
	return chang[countOfWords];
}

void take(char s[100]) {
	countOfWords++;
	int n = 0;
	while (s[n]) {
		words[countOfWords][n] = s[n];
		chang[countOfWords][n] = s[n];
		n++;
	}
	words[countOfWords][n] = '\0';
	chang[countOfWords][n] = '\0';
}

void launch() {
	take("int");
	take("char");
	take("long");
	take("short");
	take("for");
	take("while");
	take("do");
	take("void");
	take("printf");
	take("scanf");
	take("getch");
	take("getchar");
	take("return");
	take("fgetc");
	take("fputc");
	take("fgets");
	take("fputs");
	take("FILE");
	take("else");
	take("switch");
	take("case");
	take("elseif");
	take("continue");
	take("break");
	take("goto");
	take("if");
	take("fopen");
	take("fclose");;
	take("strlen");
	take("strcpy");
	take("strncpy");
	take("strcmp");
	take("strncmp");
	take("strcat");
	take("strncat");
	take("feof");
	take("EOF");
	take("main");
	take("setlocale");
	take("LC_ALL");
	take("abort");
	take("fscanf");
	take("perror");
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int neNado = 0;
	int def = 0;
	for (int rt = 0; rt < 10000;rt++) {
		int zx = 3;
		chang[rt][0] = 'f'; chang[rt][1] = 'u'; chang[rt][2] = 'n'; int ku = rt; while (ku) {
			chang[rt][zx++] = (ku % 10) + 48; ku /= 10;
		}
		chang[rt][zx] = '\0';
	}
	launch();

	char inFile[100], bufFile[100] = "bufferOBFSfile.mixno", c = 'n';
	printf("Input file name:");
	scanf("%s", &inFile);

	delComments(inFile, bufFile);

	FILE *fin = fopen(bufFile, "r");
	//FILE *fout = fopen(inFile, "w");
	FILE *fout = fopen("Output.c", "w");

	char last = 'n';
	while (!feof(fin)) {
	xyz1:
		then:
		last = c;
		c = fgetc(fin);
		if (feof(fin)) { break; }

		//кавычки типа "_" 
		if (c == '\"') {
			fputc('\"', fout);
			i = 0;
			slkol = 0;
			lc = 'n';
			c = '#';
			while ((c != '\"') || (slkol % 2 != 0)) {
			repa1:lc = c;
				c = fgetc(fin);
				if (feof(fin)) { goto tuda1; }
				if (((c == '\n') && (lc == '\\') && (slkol % 2 == 1))) { fputc('\n', fout); slkol = 0; goto repa1; }
				else { if (c == '\n') { fputc('\n', fout); goto xyz1; } }
				if (c == '\\') {
					if (lc == '\"') { slkol = 1; }
					else { slkol++; }
				}
				else {
					if (c == '\"') {
						if (lc == '\"') {
							if (slkol % 2 == 1) {
								fputc(c, fout); goto xyz1;
							}
							else { slkol = 0; }
						}
					}
					else { slkol = 0; }
				}
				fputc(c, fout);
			}
			//fputc('#', fout); 
			goto xyz1;
		}
		else {
		uidi1:;
			//TODO Уйти в кулинарный 
			//кавычки типа '_' 
			if (c == '\'') {
				fputc('\'', fout);
				i = 0;
				slkol = 0;
				lc = 'n';
				c = '#';
				while ((c != '\'') || (slkol % 2 != 0)) {
				repet:lc = c;
					c = fgetc(fin);
					if (feof(fin)) { goto tuda1; }
					if (c == '\n') { fputc('\n', fout); goto xyz1; }
					if (c == '\\') {
						if (lc == '\'') { slkol = 1; }
						else { slkol++; }
					}
					else {
						if (c == '\'') {
							if (lc == '\'') {
								if (slkol % 2 == 1) {
									fputc(c, fout); goto xyz1;
								}
								else { slkol = 0; }
							}
						}
						else { slkol = 0; }
					}
					fputc(c, fout);
				}
				goto xyz1;
			}
			else {
				//. 
			open:

				
				

				//if ((c == '\t') || (c == '\n')) goto xyz1;
				if (def == 0) {
					if (c == '#') { char ss[1000]; fgets(ss, 1000, fin); fputc('#', fout); fputs(ss, fout); continue; }
				}
				if (c == '{') def = 1;
				if ((last == ' ') && (c == ' ')) { goto then; }
				if (isWord(c)) { if (word == 0) countOfWords++; word = 1; words[countOfWords][whereWord++] = c; }
				else {
					if (word == 1) {
						words[countOfWords][whereWord] = '\0';  whereWord = 0;
						if (sravWord(words[countOfWords], "setlocale")) lc_al = 1;

						if ((neNado == 1) && (sravWord(words[countOfWords], "s"))) {
							fputc('s', fout);
							countOfWords--;
							goto nado;
						}
						neNado = 0;

						if ((sravWord(words[countOfWords], "fscanf")) || (sravWord(words[countOfWords], "fopen")) || (sravWord(words[countOfWords], "scanf")) || (sravWord(words[countOfWords], "gets")) || (sravWord(words[countOfWords], "fputs")) || (sravWord(words[countOfWords], "getch"))) neNado = 1;
						fputs(changeWord(), fout);


						if (lc_al == 1) {
							fputc(c, fout);
							while (c != ';') { c = fgetc(fin); fputc(c, fout); }
							lc_al = 0;
							word = 0;
							goto xyz1;
						}
					nado:;
					}
					word = 0;
					fputc(c, fout);
				}
			}
		}
	}
tuda1:;

	return 0;
}