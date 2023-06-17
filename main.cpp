//
//  main.cpp
//  arbitrary-precision-arithmetic
//
//  Created by zea on 3/27/1402 AP.
//

#include <iostream>

int main() {
    char input[100];
    
    std::cout << "\n\n big multiply\n\n";
    std:: cout << " ";
    std:: cin >> input;
    char result[100+1] = {' '};
    int len = strlen(input); // returns the length of the string
    int carry_over_digit = 0;
    
    int i = len-1;
    while (i > -1){
        int char_as_number = 0;
        char c = input[i];
        
        switch (c) {
            case '0' :
                char_as_number = 0;
                break;
            case '1' :
                char_as_number = 1;
                break;
            case '2':
                char_as_number = 2;
                break;
            case '3' :
                char_as_number = 3;
                break;
            case '4':
                char_as_number = 4;
                break;
            case '5' :
                char_as_number = 5;
                break;
            case '6' :
                char_as_number = 6;
                break;
            case '7':
                char_as_number = 7;
                break;
            case '8' :
                char_as_number = 8;
                break;
            case '9':
                char_as_number = 9;
                break;

        }
        int partial_result = char_as_number * 2 + carry_over_digit;
        if(char_as_number < 5){
            carry_over_digit = 0;
        }
        else{
            partial_result -= 10;
            carry_over_digit = 1;
        }
        
        result[i + 1] = partial_result + '0';
        i--;
    }
    for(int i = 0;i <len; i++){
        std::cout << " ";
    }
    std::cout << "2×"  << std::endl;

    for(int i = 0;i <len + 2; i++){
        std::cout << "-";
    }
    
    result[0] = carry_over_digit + '0';
    
    
    std::cout << std::endl<<"\033[31m" << result << "\033[0m"<< "\n\n\n";
}
