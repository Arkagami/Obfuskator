#include <iostream>
#include <regex>
#include <string>
#include <fstream>
#include <clocale>
#include <time.h>

using namespace std;
char *func_rand(char *line);
char *type_rand(char *type);
char *circle_rand(char *circle, char *type);
void search(string text, regex reg, smatch type_match, char *type, string space, regex reg_space);

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");

	FILE *f;

	fopen_s(&f, "Customize.txt", "r");

	int arr[4] = { 0 };
	int j = 0, a;
	char symbol, prev;

	while (symbol = fgetc(f)) {
		if (symbol == '\n') {
			a = (int)prev - 48;
			arr[j] = a;
			j++;
		}

		if (symbol == EOF && prev == '\n') break;

		prev = symbol;
	}

	ifstream file("pass.cpp");
	ofstream done("Done.cpp");
	string text, text_line;

	while (getline(file, text_line))
		text += text_line + "\n";

	cout << text;
	cout << '\n';

	if (arr[0] == 1) {

		regex reg1("\\/\\/.*\\n");
		text = regex_replace(text, reg1, "");
		regex reg2("\\/\\*(.*?\\s*?)*?\\*\\/");
		text = regex_replace(text, reg2, "");
	}

	char letter[] = "; ____ ___(); ";
	char type[] = "___";
	char circle[] = ";\n for (int ___ = 0; ___ < _; ___++){\nint ___ = _;\n___ += _;\n}";
	int k = 0;

	string buf, word, line, line_buf, main, space, space_file, int_main, n;

	main = "main";
	space = " ";
	space_file = " *";
	int_main = "int main";
	n = "\n";

	smatch type_match;

	if (arr[1] == 1) {
		regex reg_int("\\b(int)\\b");

		do {
			strcmp(type, type_rand(type));
			regex_search(text, type_match, reg_int);
			word = type_match.suffix().str();
			line = type_match.prefix().str() + type_match.str();
			regex_search(word, type_match, reg_int);
			regex reg_word("\\b\\w+\\b");
			regex_search(word, type_match, reg_word);
			buf = type_match.str();
			word = type + type_match.suffix().str();
			text = line + word;
			regex reg_buf(buf);

			while (regex_search(text, type_match, reg_buf))
				text = type_match.prefix().str() + type + type_match.suffix().str();

		} while (regex_search(text, type_match, reg_int));

		k = 0;

		regex reg_int_space("\\b(int)");

		word = text;

		while (regex_search(word, type_match, reg_int_space))
		{

			if (k == 0) {
				line = type_match.prefix().str() + type_match.str();
				k++;
			}

			else if (k == 1) {
				line_buf = type_match.prefix().str() + type_match.str();
				k++;
			}

			text = type_match.prefix().str() + type_match.str() + space + type_match.suffix().str();
			word = type_match.suffix().str();
		}

		regex reg_word("\\b\\w+\\b");
		regex_search(text, type_match, reg_word);

		word = main + type_match.suffix().str();
		text = type_match.prefix().str() + word;
		text = line + space + line_buf + space + text;

		regex reg_file("\\b(FILE)\\b");

		do {
			strcmp(type, type_rand(type));
			regex_search(text, type_match, reg_file);

			if (type_match.size() == 0) break;

			word = type_match.suffix().str();

			line = type_match.prefix().str() + type_match.str();

			regex reg_word("\\b\\w+\\b");

			regex_search(word, type_match, reg_word);

			buf = type_match.str();

			word = type + type_match.suffix().str();

			text = line + word;

			regex reg_buf(buf);

			while (regex_search(text, type_match, reg_buf))

				text = type_match.prefix().str() + type + type_match.suffix().str();

		} while (regex_search(text, type_match, reg_file));

		regex reg_file_space("\\b(FILE)");

		word = text;

		while (regex_search(word, type_match, reg_file_space)) {

			text = type_match.prefix().str() + type_match.str() + space_file + type_match.suffix().str();

			word = type_match.suffix().str();

		}

		regex reg_char("\\b(char)\\b");

		do {

			strcmp(type, type_rand(type));

			regex_search(text, type_match, reg_char);

			word = type_match.suffix().str();

			line = type_match.prefix().str() + type_match.str();

			regex reg_word("\\b\\w+\\b");

			regex_search(word, type_match, reg_word);

			buf = type_match.str();

			word = type + type_match.suffix().str();

			text = line + word;

			regex reg_buf(buf);

			while (regex_search(text, type_match, reg_buf))

				text = type_match.prefix().str() + type + type_match.suffix().str();

		} while (regex_search(text, type_match, reg_char));

		k = 0;

		regex reg_char_space("\\b(char)");

		word = text;

		while (regex_search(word, type_match, reg_char_space)) {

			if (k == 0) {

				line = type_match.prefix().str() + type_match.str();

				k++;

			}

			text = type_match.prefix().str() + type_match.str() + space + type_match.suffix().str();

			word = type_match.suffix().str();

		}

		text = line + space + text;

	}

	regex reg_char("\\b(char)\\b");

	if (arr[3] == 1) {

		strcmp(circle, circle_rand(circle, type));

		regex_search(text, type_match, reg_char);

		word = type_match.suffix().str();

		line = type_match.prefix().str() + type_match.str();

		regex reg_sym(";");

		regex_search(word, type_match, reg_sym);

		text = line + type_match.prefix().str() + circle + type_match.suffix().str();

	}

	smatch str_match;

	if (arr[2] == 1) {

		regex reg_t("\\t");

		while (regex_search(text, str_match, reg_t)) {

			strcmp(letter, func_rand(letter));

			text = str_match.prefix().str() + letter + str_match.suffix().str();

		}

		regex reg_n("\\n");

		while (regex_search(text, str_match, reg_n)) {

			strcmp(letter, func_rand(letter));

			text = str_match.prefix().str() + letter + str_match.suffix().str();

		}

	}

	regex reg_func("int \\w+\\(\\) \\{");

	regex_search(text, str_match, reg_func);

	text = str_match.prefix().str() + n + str_match.str() + str_match.suffix().str();

	regex reg_main("int main");

	regex_search(text, str_match, reg_main);

	text = str_match.prefix().str() + n + int_main + str_match.suffix().str();

	regex reg_symb("; ;|;;");

	buf = ";";

	while (regex_search(text, str_match, reg_symb))

		text = str_match.prefix().str() + buf + str_match.suffix().str();

	cout << "-------------------------------------\n";

	cout << text;

	cout << "\n";

	done << text;

	file.close();

	done.close();

	system("pause");

	return 0;

}

char *func_rand(char *line) {

	int buf[5];

	int i, x;

	x = rand() % 3 + 1;

	switch (x)

	{

	case 1:

	{

		line[2] = 'c';

		line[3] = 'h';

		line[4] = 'a';

		line[5] = 'r';

		break;

	}

	case 2:

	{

		line[2] = 'v';

		line[3] = 'o';

		line[4] = 'i';

		line[5] = 'd';

		break;

	}

	case 3:

	{

		line[2] = 'i';

		line[3] = 'n';

		line[4] = 't';

		line[5] = ' ';

		break;

	}

	default: break;

	}

	for (i = 0; i < 3; i++) {

		buf[i] = rand() % 26 + 97;

		line[i + 7] = (char)buf[i];

	}

	return line;

}

char *type_rand(char *type)

{

	int buf[3];

	for (int i = 0; i < 3; i++) {

		buf[i] = rand() % 26 + 97;

		type[i] = (char)buf[i];

	}

	return type;

}

char *circle_rand(char *circle, char *type)

{

	type = type_rand(type);

	for (int i = 0; i < 3; i++) {

		circle[12 + i] = type[i];

		circle[21 + i] = type[i];

		circle[30 + i] = type[i];

	}

	circle[27] = rand() % 8 + 50;

	type = type_rand(type);

	for (int i = 0; i < 3; i++) {

		circle[42 + i] = type[i];

		circle[51 + i] = type[i];

	}

	circle[48] = rand() % 8 + 50;

	circle[58] = rand() % 8 + 50;

	return (circle);

}
