#include <stdio.h> 

// Declare the assembly function as an external function
extern long assembly();

int main() {
    long result = assembly();
    printf("The result is %d\n", result);
    return 0;
}
