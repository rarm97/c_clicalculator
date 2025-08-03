// This program is to function as a calculator that takes input from the user, at first this could take three pieces of input from the user, a, method, b. This allows for checking each input fits the necessary criteria before moving onto the next criteria. 
#include <stdio.h> // standard input output
#include <stdlib.h> // for functions like strtod (string to double conversion)
#include <ctype.h> // for isspace

void get_operator(const char *prompt, char *op){
    printf("%s", prompt);
    scanf(" %c", op);  // This reads a single character. Skipping whitespace. 
}

float get_double(const char *prompt, double *out){
    char *endptr;
    char buffer[100];
    printf("%s", prompt);
    fgets(buffer, sizeof(buffer), stdin); // Reads a line of input from the user. 
    printf("%s read from the user.", buffer);
    *out = strtod(buffer, &endptr); // strtod is string to a double. 
    while (isspace((unsigned char)*endptr)) endptr++; // Skip trailing whitespace
    return *endptr == '\0';
}

double multiplication(const float a, const float b){
    return a * b; 
}

double division(const double a, const double b){
    return a / b;
}

double addition(const double a, const double b){
    return a + b;
}

double subtraction(const double a, const double b){
    return a - b;
}

int main(void) {
    double a, b, result;
    char op;
    get_double("Please enter your first number: ", &a);
    get_double("Please enter your second number: ", &b);
    get_operator("Please enter the operator: ", &op);
    switch (op) {
        case '*': 
            result = multiplication(a, b);
            break;
        case '/': result = division(a, b);
            break;
        case '+': result = addition(a, b);
            break;
        case '-': result = subtraction(a, b);
            break;
    }
    printf("Result: %lf\n", result);
    return 0;
}
