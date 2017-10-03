#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	char op;
	int a, b, res;
	while (true) {
		cout << "Viberete operaciyu [+, -, *, /, %, ^, !, &, |, <, >]" << endl;
		cin >> op;
		cout << "Vvedite pervoe chislo" << endl;
		cin >> a;
		if ((op != '!') && (op != '<') && (op != '>')) {
			cout << "Vvedite vtoroe chislo" << endl;
			cin >> b;	
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
			default:
				cout << "Neverniy znak" << endl;
		}
	}
}
