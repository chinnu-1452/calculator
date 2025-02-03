#include <stdio.h>

int main() {
    char op;
    double a, b;

    printf("Enter an operator: ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);

    switch (op) {
        case '+': printf("Result: %.2lf\n", a + b); break;
        case '-': printf("Result: %.2lf\n", a - b); break;
        case '*': printf("Result: %.2lf\n", a * b); break;
        case '/': 
            if (b != 0) 
                printf("Result: %.2lf\n", a / b); 
            else 
                printf("Error! Division by zero.\n"); 
            break;
        default: printf("Error! Invalid operator.\n");
    }

    return 0;
}
