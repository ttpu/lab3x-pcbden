#include <stdio.h>

// Declare the assembly function that returns int pointer
extern long* assembly_array();

int main() {
    long *array = assembly_array(); // Get the array address

    printf("Array elements:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}