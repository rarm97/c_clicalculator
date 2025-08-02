// This program is to function as a calculator that takes input from the user, at first this could take three pieces of input from the user, a, method, b. This allows for checking each input fits the necessary criteria before moving onto the next criteria. 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int get_double(const char *str, double *out){
    char *endptr;
    char buffer[100];
    printf("%s", str);
    fgets(buffer, sizeof(buffer), stdin);
    *out = strtod(buffer, &endptr);
    // Skip whitespace after number
    while (isspace((unsigned char)*endptr)) endptr++;
    // If we didn't consume the whole string, it's not valid
    return *str != '\0' && *endptr == '\0';
}

int main(void) {
    double a, b, result;
    char op; 
    b = 10;
    result = 15;
    op = 'f';
    printf("%f %f %c ", b, result, op);
    get_double("Please enter your first number: ", &a);
    printf("%f", a);
    if (a < 10 ) {
        printf("This isn't going to work anymore, because the number is too small. \n");
    }
    return 0;
}
