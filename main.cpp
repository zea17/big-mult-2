#include <iostream>
#include <cstring>

int main()
{
    char input[100];

    std::cout << "\n\nBig Multiply\n\n";
    std::cout << " ";
    std::cin >> input;

    char result[100 + 1] = {' '};
    int len = strlen(input);
    int carry_over_digit = 0;

    int i = len - 1;
    while (i >= 0)
    {
        int char_as_number = input[i] - '0';
        int partial_result = char_as_number * 2 + carry_over_digit;

        if (char_as_number < 5)
        {
            carry_over_digit = 0;
        }
        else
        {
            partial_result -= 10;
            carry_over_digit = 1;
        }

        result[i + 1] = partial_result + '0';
        i--;
    }

    for (int i = 0; i < len - 1; i++)
    {
        std::cout << " ";
    }
    std::cout << " 2×" << std::endl;
    for (int i = 0; i < len + 2; i++)
    {
        std::cout << "─";
    }

    result[0] = carry_over_digit + '0';

    std::cout << std::endl
              << "\033[31m" << result << "\033[0m"
              << "\n\n\n";

    return 0;
}
