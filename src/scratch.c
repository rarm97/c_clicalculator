// This should run a bunch of tests that import the main functions and checks that they don't have any unexpected behaviour
#include <stdio.h>
int main(){
    char buffer[100];
    fgets(buffer, sizeof(buffer), stdin); // Reads a line of input from the user. 
    printf("Buffer: %s", buffer);
    for (int i = 0; buffer[i] != '\n'; i++) {
        printf("The %dth character is %c. \n", i, buffer[i]);
    }
    return 0;
}
