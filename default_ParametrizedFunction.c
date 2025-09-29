/* Program on default function and parameterized function. */

#include <stdio.h>

// Default function (no parameters) that sums two numbers
void defaultFunction() {
    int a = 10, b = 20;
    printf("The sum of %d and %d in the default function is: %d\n", a, b, a + b);
}

// Parameterized function (with parameters)
void parameterizedFunction(int a, int b) {
    printf("The sum of %d and %d in the parameterized function is: %d\n", a, b, a + b);
}

int main() {
    // Calling the default function
    defaultFunction();
    
    // Calling the parameterized function with arguments
    int num1 = 30, num2 = 40;
    parameterizedFunction(num1, num2);

    return 0;
}
