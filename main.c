#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "calculator.h"

int main()
{
    char input[100];

    printf("Enter an expression (e.g., 45+5*5): ");
    scanf("%s", input);

    char *op = input;
    float result = 0; // Initialize result to 0
    float operand;    // Operand variable

    while (*op != '\0')
    {
        // Check if the current character is a digit
        if (isdigit(*op))
        {
            operand = strtof(op, &op); // Convert the string to float
            // If it's the first operand, assign it to the result
            if (result == 0)
                result = operand;
            continue;
        }

        // If it's not a digit, it should be an operator
        char operator= * op;
        op++; // Move to the next character

        // Check if the next character is a digit
        if (!isdigit(*op))
        {
            printf("Error: Expected digit after operator\n");
            exit(EXIT_FAILURE);
        }

        operand = strtof(op, &op); // Convert the string to float

        // Evaluate the expression
        result = evaluateExpression(operator, result, operand);
    }

    printf("Result: %.2f\n", result);

    return 0;
}
