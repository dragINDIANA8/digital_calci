#include <iostream>
int main()
{
    char op {};
    int a {}, b {}, result {};
    std::cout << "This is the Digital Calculator developed by SHUBHRANSHU SHEKHAR DAS!!" << std::endl;
    std::cout << "*******Press 0 to quit the program*******" << std::endl;
    std::cout << "What is your fist digit?: " << std::endl;
    std::cin >> a;
    std::cout << "What is your operator (+, -, *, /): " << std::endl;
    std::cin >> op;
    std::cout << "What is your second digit?: " << std::endl;
    std::cin >> b;
    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    case '0':
        exit(0);
        break;
    default:
        std::cout << "\n******Wrong op, Enter valid op******\n\n";
        break;
    }
    std::cout << "Result = " << result << std::endl;
    return 0;
}
