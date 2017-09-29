#include <iostream>

int main(int argc, char argv[]){
    std::cin >> argc;
    for (int i = 0; i < argc; i++){
        std::cin >> argv[i];
    }
    for (int i = 0; i < argc; i++){
        std::cout << "Argv[" << i << "] = " << argv[i] << std::endl;
    }
    
    int res = static_cast<int>(argv[0] - 48);
    for (int i = 1; i < argc; i = i + 2){
        switch(argv[i]){
            case '+':
            res = res + static_cast<int>(argv[i + 1] - 48);
            break;
            case '-':
            res = res - static_cast<int>(argv[i + 1] - 48);
            break;
            case '*':
            res = res * static_cast<int>(argv[i + 1] - 48);
            break;
            case '/':
            res = res / static_cast<int>(argv[i + 1] - 48);
            break;
        }
    }
    std::cout <<"Result: " << res << std::endl;
}
