#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h> 

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
        else { if (c != '\"') { slkol = 0; } }
        fputc(c, fout);
      }
      //fputc('#', fout); 
      goto xyz;
    }
    else {
      //TODO Уйти в кулинарный 
      //кавычки типа '_' 
      if (c == '\'') {
        fputc('\'', fout);
        i = 0;
        slkol = 0;
        lc = 'n';
        c = '#';
        while ((c != '\'') || (slkol % 2 != 0)) {
          lc = c;
          c = fgetc(fin);
          if (feof(fin)) { goto tuda; }
          if (c == '\n') { fputc('\n', fout); goto xyz; }
          if (c == '\\') {
            if (lc == '\'') { slkol = 1; }
            else { slkol++; }
          }
          else { if (c != '\'') { slkol = 0; } }
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
              fputc('/', fout);  goto eto;
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


int word = 0, countOfWords = 0, whereWord = 0;
char iswords[53] = "qwertyuioplkjhgfdsazxcvbnmQWERTYUIOPLKJHGFDSAZXCVBNM", words[10000][100], chang[10000][100];
//Проверяет символ на принадлежность к английскому алфавиту 
int isWord(char qwertyuiop) {
  for (int qwerty = 0; qwerty < 53; qwerty++) if (qwertyuiop == iswords[qwerty]) return 1;
  return 0;
}


char *changeWord() {
  int e = 0, save = 0;
  for (int tyoh = 0; tyoh < countOfWords - 1; tyoh++) {
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
  int n = 0;
  while (s[n]) {
    words[countOfWords][n] = s[n];
    chang[countOfWords][n] = s[n];
    n++;
  }
  words[countOfWords][n] = '\0';
  chang[countOfWords][n] = '\0';
  countOfWords++;
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
  take("scanf");
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
}

int main()
{
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
        else { if (c != '\"') { slkol = 0; } }
        fputc(c, fout);
      }
      //fputc('#', fout); 
      goto xyz1;
    }
    else {
      //TODO Уйти в кулинарный 
      //кавычки типа '_' 
      if (c == '\'') {
        fputc('\'', fout);
        i = 0;
        slkol = 0;
        lc = 'n';
        c = '#';
        while ((c != '\'') || (slkol % 2 != 0)) {
          lc = c;
          c = fgetc(fin);
          if (feof(fin)) { goto tuda1; }
          if (c == '\n') { fputc('\n', fout); goto xyz1; }
          if (c == '\\') {
            if (lc == '\'') { slkol = 1; }
            else { slkol++; }
          }
          else { if (c != '\'') { slkol = 0; } }
          fputc(c, fout);
        }
        goto xyz1;
      }
      else {
        //.

        if (def == 0) {
          if (c == '#') { char ss[1000]; fgets(ss, 1000, fin); fputc('#', fout); fputs(ss, fout); continue; }
        }
        if (c == '{') def = 1;
        if ((last == ' ') && (c == ' ')) { continue; }
        if (isWord(c)) { if (word == 0) countOfWords++; word = 1; words[countOfWords][whereWord++] = c; }
        else {
          if (word == 1) {
            words[countOfWords][whereWord] = '\0';  whereWord = 0; if (countOfWords == 8) {

            }
            fputs(changeWord(), fout);
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