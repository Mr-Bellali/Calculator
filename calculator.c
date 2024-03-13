#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculator.h"

float evaluateExpression(char operator, float operand1, float operand2) {
    switch (operator) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 != 0)
                return operand1 / operand2;
            else {
                printf("Error: Division by zero\n");
                exit(EXIT_FAILURE);
            }
        default:
            printf("Error: Invalid operator '%c'\n", operator);
            exit(EXIT_FAILURE);
    }
}
