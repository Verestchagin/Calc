#include <iostream>
#include <cmath>
#include <cctype>
#include <cstdlib>
using namespace std;

void sum(int a, int b, char si[] = "") {
	cout << "Result: " << a + b << endl;

	si[0] = '0';
}

void sub(int a, int b, char si[] = "") {
	si[0] = '0';
	cout << "Result: " << a - b << endl;
}

void mul(int a, int b, char si[] = "") {
	si[0] = '0';
	cout << "Result: " << a * b << endl;
}

void div(int a, int b, char si[] = "") {
	float af = a, bf = b;
	si[0] = '0';
	if (b != 0) {
		cout << "Result: " << af / bf << endl;
	}
	else {
		cout << "Na 0 delit nelzya" << endl;
	}
}

void mod(int a, int b, char si[] = "") {
	if (b != 0) {
		si[0] = '0';
		cout << "Result: " << a % b << endl;
	}
	else {
		cout << "Na 0 delit nelzya" << endl;
	}
}

void pow(int a, int b, float res1, char si[] = "") {
	float af = a, bf = b;
	si[0] = '0';
	if (bf == 0) {
		cout << "Result: " << 1 << endl;
	}
	if (bf > 0) {
		res1 = 1;
		for (int i = 0; i < bf; ++i) {
			res1 = res1 * af;
		}
		cout << "Result: " << res1 << endl;
	}
	if (bf < 0){
		res1 = 1;
		for (int i = 0; i > bf; --i) {
			res1 = res1 / af;
		}
		cout << "Result: " << res1 << endl;
	}
}

void negative(int a, char si[] = "") {
	si[0] = '0';
	cout << "Result: " << a * (-1) << endl;
}

void andd(int a, int b, int res, char si[] = "") {
	si[0] = '0';
	res = a & b;
	cout << "Result: " << res << endl;
}

void orr(int a, int b, int res, char si[] = "") {
	res = a | b;
	si[0] = '0';
	cout << "Result: " << res << endl;
}

void rol(int a, int b, int res, char si[] = "") {
	res = a << 1;
	si[0] = '0';
	cout << "Result: " << res << endl;
}

void ror(int a, int b, int res, char si[] = "") {
	res = a >> 1;
	si[0] = '0';
	cout << "Result: " << res << endl;
}

int main()
{
	char op[] = "";
	int itog = 0, b, a;
	char a1[] = "", b1[] = "";
	bool f1 = false, f2 = false;
	float itogf = 1;
	while (true) {
		while ((op[0] != '+') && (op[0] != '-') && (op[0] != '*') && (op[0] != '/') && (op[0] != '%') && (op[0] != '^') && (op[0] != '!') && (op[0] != '&') && (op[0] != '|') && (op[0] != '<') && (op[0] != '>')) {
			cout << "Viberete operaciyu [+, -, *, /, %, ^, !, &, |, <, >]" << endl;
			cin >> op;
		}
		while (f1 == false) {
			cout << "Vvedite pervoe chislo" << endl;
			cin >> a1;
			if (isdigit(a1[0]) || (isdigit(a1[1]))) {
				a = atoi(a1);
				f1 = true;
				break;
			}
			else {
				cout << "Neobhodimo vvesti chislo" << endl;
			}
		}
		if ((op[0] != '!') && (op[0] != '<') && (op[0] != '>')) {
			while (f2 == false) {
				cout << "Vvedite vtoroe chislo" << endl;
				cin >> b1;
				if (isdigit(b1[0]) || (isdigit(b1[1]))) {
					b = atoi(b1);
					f2 = true;
					break;
				}
				else {
					cout << "Neobhodimo vvesti chislo" << endl;
				}
			}
		}
		f1 = false;
		f2 = false;
		switch (op[0]) {
		case '+':
			sum(a, b, op);
			break;
		case '-':
			sub(a, b, op);
			break;
		case '*':
			mul(a, b, op);
			break;
		case '/':
			div(a, b, op);
			break;
		case '%':
			mod(a, b, op);
			break;
		case '^':
			pow(a, b, itogf, op);
			break;
		case '!':
			negative(a, op);
			break;
		case '&':
			andd(a, b, itog, op);
			break;
		case '|':
			orr(a, b, itog, op);
			break;
		case '<':
			rol(a, b, itog, op);
			break;
		case '>':
			ror(a, b, itog, op);
			break;
		}

	}
	return 0;
}
