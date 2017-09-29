#include <iostream>
#include <stdio.h>

int main(int argc, char *argv[]){
    std::cout << "Count = " << argc - 1 << std::endl;
    for (int i = 1; i < argc; i++){
        std::cout << "Argv[" << i << "] = " << argv[i] << std::endl;
    }

    int res = atoi(argv[1]);
    for (int i = 2; i < argc; i = i + 2){
        switch(argv[i][0]){
            case '+':
            res = res + atoi(argv[i + 1]);
            break;
            case '-':
            res = res - atoi(argv[i + 1]);
            break;
            case '*':
            res = res * atoi(argv[i + 1]);
            break;
            case '/':
            res = res / atoi(argv[i + 1]);
            break;
        }
    }
    std::cout <<"Result: " << res << std::endl;
}
