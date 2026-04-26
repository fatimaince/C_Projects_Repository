#include <stdio.h>
#include <stdbool.h>

int basic_op(char op, int value1, int value2) {
    switch (op) {
        case '+':
        return value1 + value2;
        case '-':
        return value1 - value2;
        case '*':
        return value1 * value2;
        case '/':
        return value1 / value2;
        default:
        return 0; 
    }
  return 0;
}

int main() {
    char op;
    int value1, value2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two numbers: ");
    scanf("%d %d", &value1, &value2);
    
    int result = basic_op(op, value1, value2);
    printf("Result: %d\n", result);
    
    return 0;
}