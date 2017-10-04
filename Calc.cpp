// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

//#include <stdfax.h>
#include <iostream>
#include <cmath>
#include <cctype>
#include <cstdlib>
using namespace std;


int main()
{
	char op = '0';
	int res,b,a;
	char a1[] = "", b1[] = "";
	bool f1 = false, f2 = false;
	while (true) {
		while ((op != '+') && (op != '-') && (op != '*') && (op != '/') && (op != '%') && (op != '^') && (op != '!') && (op != '&') && (op != '|') && (op != '<') && (op != '>')) {
			cout << "Viberete operaciyu [+, -, *, /, %, ^, !, &, |, <, >]" << endl;
			cin >> op;
		}
		while (f1 == false) {
			cout << "Vvedite pervoe chislo" << endl;
			cin >> a1;
			if (isdigit(a1[0])) {
				a = atoi(a1);
				f1 = true;
				break;
			}
			else {
				cout << "Neobhodimo vvesti chislo" << endl;
			}
		}
		if ((op != '!') && (op != '<') && (op != '>')) {
			while (f2 == false) {
				cout << "Vvedite vtoroe chislo" << endl;
				cin >> b1;
				if (isdigit(b1[0])) {
					b = atoi(b1);
					f2 = true;
					break;
				}
				else {
					cout << "Neobhodimo vvesti chislo" << endl;
				}
			}
		}
		switch (op) {
			case '+':
				res = a + b;
				cout << "Result: " << res << endl;
				break;
			case '-':
				res = a - b;
				cout << "Result: " << res << endl;
				break;
			case '*':
				res = a * b;
				cout << "Result: " << res << endl;
				break;
			case '/':
				if (b != 0) {
					float a1 = a, b1 = b, res1;
					res1 = a1 / b1;
					cout << "Result: " << res1 << endl;
					break;
				}
				else {
					cout << "Nevozmozhnoe deistvie" << endl;
					break;
				}
			case '%':
				if (b != 0) {
					res = a % b;
					cout << "Result: " << res << endl;
					break;
				}
				else {
					cout << "Nevozmozhnoe deistvie" << endl;
				}
			case '^':
				if (b == 0) {
					res = 1;
				}
				else {
					res = 1;
					for (int i = 0; i < b; ++i) {
						res = res * a;
					}

				}
				cout << "Result: " << res << endl;
				break;
			case '!':
				res = a * (-1);
				cout << "Result: " << res << endl;
				break;
			case '&':
				res = a & b; 
				cout << "Result: " << res << endl;
				break;
			case '|':
				res = a | b;
				cout << "Result: " << res << endl;
				break;
			case '<':
				res = a << 1;
				cout << "Result: " << res << endl;
				break;
			case '>':
				res = a >> 1;
				cout << "Result: " << res << endl;
				break;
		}
	}
    return 0;
}

