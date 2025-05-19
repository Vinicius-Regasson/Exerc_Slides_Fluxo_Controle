#include <stdio.h>

int main() {
    double num1, num2, resultado;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '/':
            if (num2 == 0) {
                printf("Erro: Divisão por zero não é permitida.\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            }
            break;
        default:
            printf("Operador inválido.\n");
    }

    return 0;
}