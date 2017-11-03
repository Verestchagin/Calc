#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

int main(int argc,char*argv[]) {
	char op[10], str[30];
	int chisla[20], pozso[20], pozsz[20];
	int sko = 0, skz = 0, counts = 0, count1 = 0, countop = 0, countn = 0, counto = 0, countz = 0, res = 0, f = 0, strlenstr = 0;
	bool fl1 = false;
	string prres;
	for (int i = 0; i < strlen(argv[1]); i++){
		if(argv[1][i] == '('){
			sko++;
			pozso[counto] = i;
			counto++;
		}
		if(argv[1][i] == ')'){
			pozsz[countz] = i;
			countz++;
		}
	}
	for (int i = 0; i < strlen(argv[1]); i++){
		str[i] = argv[1][i];
		strlenstr++;
	}
	counts = sko;
	if (sko == 0){
		countn = 0;
		countop = 0;
		count1 = 0;
		fl1 = false;
		for (int j = 0; j < 20; j++){
			chisla[j] = 0;
		}	
		for (int j = 0; j < 10; j++){
			op[j] = '0';
		}
		for (int i = 0; i < strlenstr; i++){
			if((str[i] == '+') || (str[i] == '-') || (str[i] == '*') || (str[i] == '/') || (str[i] == '^') || (str[i] == '%')){
				op[countop] = str[i];
				countop++;
			}
		}
		cout << endl;
		for (int j = 0; j < strlenstr; j++){
			if((str[j] != '+') && (str[j] != '-') && (str[j] != '*') && (str[j] != '/')  && (str[j] != '^')  && (str[j] != '%')){
				if (fl1 == false){
					chisla[countn] = str[j] - 48;
				}
				else{
					chisla[countn] = chisla[countn] * 10 + str[j] - 48;
				}
				if((str[j + 1] == '+') || (str[j + 1] == '-') || (str[j + 1] == '*') || (str[j + 1] == '/') || (str[j + 1] == '^') || (str[j + 1] == '%')){
					countn++;
					fl1 = false;
				}
				else{
					fl1 = true;
				}
			}
		}
		countn++;
		for (int l = 0; l < strlen(op); l++){
			if (op[l] == '^'){
				count1++;
				chisla[l] = pow(chisla[l], chisla[l + 1]);
				for (int j = l + 1; j < countn - 1; j++){					
					chisla[j] = chisla[j + 1];
				}	
				for (int j = countn - count1 ; j < countn; j++){
					chisla[j] = 0;
				}
				for (int j = l; j < strlen(op) - count1; j++){
					op[j] = op[j + 1];
				}
				op[strlen(op) - count1] = '0';
			}
			if (op[l] == '%'){
				count1++;
				chisla[l] = chisla[l] % chisla[l + 1];
				for (int j = l + 1; j < countn - 1; j++){
					chisla[j] = chisla[j + 1];
				}
				for (int j = countn - count1 ; j < countn; j++){
					chisla[j] = 0;
				}
				for (int j = l; j < strlen(op) - count1; j++){
					op[j] = op[j + 1];
				}
				op[strlen(op) - count1] = '0';
			}
		}
		for (int l = 0; l < strlen(op); l++){
			if (op[l] == '*'){
				count1++;
				chisla[l] = chisla[l] * chisla[l + 1];
				for (int j = l + 1; j < countn - 1; j++){
					chisla[j] = chisla[j + 1];
				}
				for (int j = countn - count1 ; j < countn; j++){
					chisla[j] = 0;
				}
				for (int j = l; j < strlen(op) - count1; j++){
					op[j] = op[j + 1];
				}
				op[strlen(op) - count1] = '0';
			}
			if (op[l] == '/'){
				count1++;
				chisla[l] = chisla[l] / chisla[l + 1];
				for (int j = l + 1; j < countn - 1; j++){
					chisla[j] = chisla[j + 1];
				}
				for (int j = countn - count1 ; j < countn; j++){
					chisla[j] = 0;
				}
				for (int j = l; j < strlen(op) - count1; j++){
					op[j] = op[j + 1];
				}
				op[strlen(op) - count1] = '0';
			}
		}
		for (int l = 0; l < strlen(op); l++){
			if (op[l] == '+'){
				count1++;
				chisla[l] = chisla[l] + chisla[l + 1];
				for (int j = l + 1; j < countn - 1; j++){
					chisla[j] = chisla[j + 1];
				}
				for (int j = countn - count1 ; j < countn; j++){
					chisla[j] = 0;
				}
				for (int j = l; j < strlen(op) - count1; j++){
					op[j] = op[j + 1];
				}
				op[strlen(op) - count1] = '0';
			}
			if (op[l] == '-'){
				count1++;
				chisla[l] = chisla[l] - chisla[l + 1];
				for (int j = l + 1; j < countn - 1; j++){
					chisla[j] = chisla[j + 1];
				}
				for (int j = countn - count1 ; j < countn; j++){
					chisla[j] = 0;
				}
				for (int j = l; j < strlen(op) - count1; j++){
					op[j] = op[j + 1];
				}
				op[strlen(op) - count1] = '0';
			}
		}
		res = chisla[0] + chisla[1];
	}
	else{
	for (int z = 0; z < 2; z++){
	if (sko == 0){
		countn = 0;
		countop = 0;
		count1 = 0;
		fl1 = false;
		for (int j = 0; j < 20; j++){
			chisla[j] = 0;
		}	
		for (int j = 0; j < 10; j++){
			op[j] = '0';
		}
		for (int i = 0; i < strlenstr; i++){
			if((str[i] == '+') || (str[i] == '-') || (str[i] == '*') || (str[i] == '/') || (str[i] == '^') || (str[i] == '%')){
				op[countop] = str[i];
				countop++;
			}
		}
		for (int j = 0; j < strlenstr; j++){
			if((str[j] != '+') && (str[j] != '-') && (str[j] != '*') && (str[j] != '/')  && (str[j] != '^')  && (str[j] != '%')){
				if (fl1 == false){
					chisla[countn] = str[j] - 48;
				}
				else{
					chisla[countn] = chisla[countn] * 10 + str[j] - 48;
				}
				if((str[j + 1] == '+') || (str[j + 1] == '-') || (str[j + 1] == '*') || (str[j + 1] == '/') || (str[j + 1] == '^') || (str[j + 1] == '%')){
					countn++;
					fl1 = false;
				}
				else{
					fl1 = true;
				}
			}
		}
		countn++;
		for (int l = 0; l < strlen(op); l++){
			if (op[l] == '^'){
				count1++;
				chisla[l] = pow(chisla[l], chisla[l + 1]);
				for (int j = l + 1; j < countn - 1; j++){					
					chisla[j] = chisla[j + 1];
				}	
				for (int j = countn - count1 ; j < countn; j++){
					chisla[j] = 0;
				}
				for (int j = l; j < strlen(op) - count1; j++){
					op[j] = op[j + 1];
				}
				op[strlen(op) - count1] = '0';
			}	
			if (op[l] == '*'){
				count1++;
				chisla[l] = chisla[l] * chisla[l + 1];
				for (int j = l + 1; j < countn - 1; j++){
					chisla[j] = chisla[j + 1];
				}
				for (int j = countn - count1 ; j < countn; j++){
					chisla[j] = 0;
				}
				for (int j = l; j < strlen(op) - count1; j++){
					op[j] = op[j + 1];
				}
				op[strlen(op) - count1] = '0';
			}
			if (op[l] == '/'){
				count1++;
				chisla[l] = chisla[l] / chisla[l + 1];
				for (int j = l + 1; j < countn - 1; j++){
					chisla[j] = chisla[j + 1];
				}
				for (int j = countn - count1 ; j < countn; j++){
					chisla[j] = 0;
				}
				for (int j = l; j < strlen(op) - count1; j++){
					op[j] = op[j + 1];
				}
				op[strlen(op) - count1] = '0';
			}
		}
		for (int l = 0; l < strlen(op); l++){
			if (op[l] == '%'){
				count1++;
				chisla[l] = chisla[l] % chisla[l + 1];
				for (int j = l + 1; j < countn - 1; j++){
					chisla[j] = chisla[j + 1];
				}
				for (int j = countn - count1 ; j < countn; j++){
					chisla[j] = 0;
				}
				for (int j = l; j < strlen(op) - count1; j++){
					op[j] = op[j + 1];
				}
				op[strlen(op) - count1] = '0';
			}
			if (op[l] == '+'){
				count1++;
				chisla[l] = chisla[l] + chisla[l + 1];
				for (int j = l + 1; j < countn - 1; j++){
					chisla[j] = chisla[j + 1];
				}
				for (int j = countn - count1 ; j < countn; j++){
					chisla[j] = 0;
				}
				for (int j = l; j < strlen(op) - count1; j++){
					op[j] = op[j + 1];
				}
				op[strlen(op) - count1] = '0';
			}
			if (op[l] == '-'){
				count1++;
				chisla[l] = chisla[l] - chisla[l + 1];
				for (int j = l + 1; j < countn - 1; j++){
					chisla[j] = chisla[j + 1];
				}
				for (int j = countn - count1 ; j < countn; j++){
					chisla[j] = 0;
				}
				for (int j = l; j < strlen(op) - count1; j++){
					op[j] = op[j + 1];
				}
				op[strlen(op) - count1] = '0';
			}
		}
		res = chisla[0] + chisla[1];
	}
	else{
		for(int i = 0; i < counts; i++){
			sko--;
			countn = 0;
			countop = 0;
			count1 = 0;
			fl1 = false;
			f = pozso[sko] + 1;
			while (str[f] != ')'){
				f++;
			}
			for (int j = 0; j < 20; j++){
				chisla[j] = 0;
			}
			
			for (int j = 0; j < 10; j++){
				op[j] = '0';
			}
			for (int j = pozso[sko]; j < f; j++){
				if((str[j] == '+') || (str[j] == '-') || (str[j] == '*') || (str[j] == '/') || (str[j] == '^') || (str[j] == '%')){
					op[countop] = str[j];
					countop++;
				}
			}
			for (int j = pozso[sko] + 1; j < f; j++){
				if((str[j] != '+') && (str[j] != '-') && (str[j] != '*') && (str[j] != '/')  && (str[j] != '^')  && (str[j] != '%')){
					if (fl1 == false){
						chisla[countn] = str[j] - 48;
					}
					else{
						chisla[countn] = chisla[countn] * 10 + str[j] - 48;
					}	
					if((str[j + 1] == '+') || (str[j + 1] == '-') || (str[j + 1] == '*') || (str[j + 1] == '/') || (str[j + 1] == '^') || (str[j + 1] == '%')){
						countn++;
						fl1 = false;
					}
					else{
						fl1 = true;
					}
				}
			}
			countn++;
			for (int l = 0; l < strlen(op); l++){
				if (op[l] == '^'){
					count1++;
					chisla[l] = pow(chisla[l], chisla[l + 1]);
					for (int j = l + 1; j < countn - 1; j++){
						chisla[j] = chisla[j + 1];
					}
					for (int j = countn - count1 ; j < countn; j++){
						chisla[j] = 0;
					}
					for (int j = l; j < strlen(op) - count1; j++){
						op[j] = op[j + 1];
					}
					op[strlen(op) - count1] = '0';
				}
				if (op[l] == '*'){
					count1++;
					chisla[l] = chisla[l] * chisla[l + 1];
					for (int j = l + 1; j < countn - 1; j++){
						chisla[j] = chisla[j + 1];
					}
					for (int j = countn - count1; j < countn; j++){
						chisla[j] = 0;
					}
					for (int j = l; j < strlen(op) - count1; j++){
						op[j] = op[j + 1];
					}
					op[strlen(op) - count1] = '0';
				}
				if (op[l] == '/'){
					count1++;
					chisla[l] = chisla[l] / chisla[l + 1];
					for (int j = l + 1; j < countn - 1; j++){
						chisla[j] = chisla[j + 1];
					}
					for (int j = countn - count1 ; j < countn; j++){
						chisla[j] = 0;
					}
					for (int j = l; j < strlen(op) - count1; j++){
						op[j] = op[j + 1];
					}
					op[strlen(op) - count1] = '0';
				}
			}
			for (int l = 0; l < strlen(op); l++){
				if (op[l] == '%'){
					count1++;
					chisla[l] = chisla[l] % chisla[l + 1];
					for (int j = l + 1; j < countn - 1; j++){
						chisla[j] = chisla[j + 1];
					}
					for (int j = countn - count1 ; j < countn; j++){
						chisla[j] = 0;
					}
					for (int j = l; j < strlen(op) - count1; j++){
						op[j] = op[j + 1];
					}
					op[strlen(op) - count1] = '0';
				}
				if (op[l] == '+'){
					count1++;
					chisla[l] = chisla[l] + chisla[l + 1];
					for (int j = l + 1; j < countn - 1; j++){
						chisla[j] = chisla[j + 1];
					}
					for (int j = countn - count1 ; j < countn; j++){
						chisla[j] = 0;
					}
					for (int j = l; j < strlen(op) - count1; j++){
						op[j] = op[j + 1];
					}
					op[strlen(op) - count1] = '0';
				}
				if (op[l] == '-'){
					count1++;
					chisla[l] = chisla[l] - chisla[l + 1];
					for (int j = l + 1; j < countn - 1; j++){
						chisla[j] = chisla[j + 1];
					}
					for (int j = countn - count1 ; j < countn; j++){
						chisla[j] = 0;
					}
					for (int j = l; j < strlen(op) - count1; j++){
						op[j] = op[j + 1];
					}
					op[strlen(op) - count1] = '0';
				}
			}
			prres = to_string(chisla[0] + chisla[1]);
			for (int j = 0; j < prres.length(); j++){
				str[pozso[sko] + j] = prres[j];
			}
			for (int m = 0; m < f - pozso[sko] - prres.length() + 1; m++){
				for (int j = pozso[sko]+prres.length(); j < strlen(str) - 1; j++){
					str[j] = str[j + 1];
				}
			}
			for (int j = strlen(str) - (f - pozso[sko]) + prres.length() - 1; j < strlen(str); j++){
				str[j] = 'n';
			}
		}
		strlenstr = 0;
		while (str[strlenstr] != 'n'){
			strlenstr++;
		}
		if (argv[1][strlen(argv[1]) - 1] == ')'){
			strlenstr--;
		}
		
	}
	}
	}
	cout << endl;
	cout << "Result: " << res << endl;	
}	
