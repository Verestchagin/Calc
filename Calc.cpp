#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

void sum(int a, int b) {
	cout << "Result: " << a + b << endl;
}

void sub(int a, int b) {
	cout << "Result: " << a - b << endl;
}

void mul(int a, int b) {
	cout << "Result: " << a * b << endl;
}

void dif(int a, int b) {
	float af = a, bf = b;
	if (b != 0) {
		cout << "Result: " << af / bf << endl;
	}
	else {
		cerr << "Na 0 delit nelzya" << endl;
	}
}

void mod(int a, int b) {
	if (b != 0) {
		cout << "Result: " << a % b << endl;
	}
	else {
		cerr << "Na 0 delit nelzya" << endl;
	}
}

void pow(int a, int b, float res1) {
	float af = a, bf = b;
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
	if (bf < 0) {
		res1 = 1;
		for (int i = 0; i > bf; --i) {
			res1 = res1 / af;
		}
		cout << "Result: " << res1 << endl;
	}
}

void negative(int a) {
	cout << "Result: " << a * (-1) << endl;
}

void andd(int a, int b, int res) {
	res = a & b;
	cout << "Result: " << res << endl;
}

void orr(int a, int b, int res) {
	res = a | b;
	cout << "Result: " << res << endl;
}

void rol(int a, int b, int res) {
	res = a << 1;
	cout << "Result: " << res << endl;
}

void ror(int a, int b, int res) {
	res = a >> 1;
	cout << "Result: " << res << endl;
}

int main()
{
	char op1[] = "0",op;
	int itog = 0, b, a;
	float itogf = 1;
	char a1[10], b1[10];
	bool f1 = false, f2 = false, f3 = false, f4 = false;
	while (true) {
		while ((op1[0] != '+') && (op1[0] != '-') && (op1[0] != '*') && (op1[0] != '/') && (op1[0] != '%') && (op1[0] != '^') && (op1[0] != '!') && (op1[0] != '&') && (op1[0] != '|') && (op1[0] != '<') && (op1[0] != '>')) {
			cout << "Viberite operaciyu [+, -, *, /, %, ^, !, &, |, <, >]" << endl;
			cin >> op1;
		}
		op = op1[0];
		op1[0] = '0';
		while ((f1 == false) || (f2 == false)) {
			cout << "Vvedite pervoe chislo" << endl;
			cin >> a1;
			if ((op != '!') && (op != '<') && (op != '>')) {
				cout << "Vvedite vtoroe chislo" << endl;
				cin >> b1;
			}
			for (int i = 0; i < strlen(a1); i++) {
				if (i == 0) {
					if ((a1[i] == '-') || (a1[i] == '1') || (a1[i] == '2') || (a1[i] == '3') || (a1[i] == '4') || (a1[i] == '5') || (a1[i] == '6') || (a1[i] == '7') || (a1[i] == '8') || (a1[i] == '9') || (a1[i] == '0')) {
						f1 = true;
					}
					else {
						f3 = true;
					}
				}
				else {
					if ((a1[i] == '1') || (a1[i] == '2') || (a1[i] == '3') || (a1[i] == '4') || (a1[i] == '5') || (a1[i] == '6') || (a1[i] == '7') || (a1[i] == '8') || (a1[i] == '9') || (a1[i] == '0')) {
						f1 = true;
					}
					else {
						f3 = true;
					}
				}
			}
			for (int i = 0; i < strlen(b1); i++) {
				if (i == 0) {
					if ((b1[i] == '-') || (b1[i] == '1') || (b1[i] == '2') || (b1[i] == '3') || (b1[i] == '4') || (b1[i] == '5') || (b1[i] == '6') || (b1[i] == '7') || (b1[i] == '8') || (b1[i] == '9') || (b1[i] == '0')) {
						f2 = true;
					}
					else {
						f4 = true;
					}
				}
				else {
					if ((b1[i] == '1') || (b1[i] == '2') || (b1[i] == '3') || (b1[i] == '4') || (b1[i] == '5') || (b1[i] == '6') || (b1[i] == '7') || (b1[i] == '8') || (b1[i] == '9') || (b1[i] == '0')) {
						f2 = true;
					}
					else {
						f4 = true;
					}
				}
			}
			if ((f3 == true) || (f4 == true)) {
				f1 = false;
				f2 = false;
				f3 = false;
				f4 = false;
				cerr << "Neobhodimo vvesti chisla" << endl;
			}
		}
		a = atoi(a1);
		b = atoi(b1);
		f1 = false;
		f2 = false;
		switch (op) {
			case '+':
				sum(a, b);
				break;
			case '-':
				sub(a, b);
				break;
			case '*':
				mul(a, b);
				break;
			case '/':
				dif(a, b);
				break;
			case '%':
				mod(a, b);
				break;
			case '^':
				pow(a, b, itogf);
				break;
			case '!':
				negative(a);
				break;
			case '&':
				andd(a, b, itog);
				break;
			case '|':
				orr(a, b, itog);
				break;
			case '<':
				rol(a, b, itog);
				break;
			case '>':
				ror(a, b, itog);
				break;
		}

	}
	return 0;
}
