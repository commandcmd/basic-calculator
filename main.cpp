#include "evaluateExpression.hpp"
#include <iostream>

int main(void){
    std::string input;

    for(;;){
        std::cout << "Input an expression : ";
        std::getline(std::cin >> std::ws, input);

        std::cout << "Output : " << expression::evaluate(input) << std::endl;
    }
}