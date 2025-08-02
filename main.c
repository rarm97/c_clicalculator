// This program is to function as a calculator that takes input from the user, at first this could take three pieces of input from the user, a, method, b. This allows for checking each input fits the necessary criteria before moving onto the next criteria. 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char prompt_user_input(char * a){
    printf("Please provide %s\n", a);
    char input;
    scanf("%s", &input);
    return input;
}

int is_valid_double(const char *str, double *out){
    char *endptr;
    // Point to the reference rather than to the varianle
    *out = strtod(str, &endptr);
    // Skip whitespace after number
    while (isspace((unsigned char)*endptr)) endptr++;
    // If we didn't consume the whole string, it's not valid
    return *str != '\0' && *endptr == '\0';
}

int main(void) {
    double a;
    long b, result;
    char op; 
    char input1;
    input1 = prompt_user_input("your first number");
    if (input1 < 10 ) {
        printf("This isn't going to work anymore, because the number is too small. \n");
    }
    printf("%s", &input1);
    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("First number i think is, %lf\n", a);
    b = 2;
    b++;
    op = 'i';
    result = 5;
    result ++;
    result = result << 1;
    printf("a = %lf, b = %ld, op = %c, result = %ld\n", a, b, op, result);
    return 0;
}
