#include <stdio.h>

int main() {
    int senha, cargo;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    if (senha == 1234) {
        printf("Senha correta!\n");
        printf("Informe o cargo:\n");
        printf("1 - Administrador\n");
        printf("2 - Gerente\n");
        printf("3 - Funcionário\n");
        printf("Digite o número do cargo: ");
        scanf("%d", &cargo);

        switch (cargo) {
            case 1:
                printf("Acesso total ao sistema\n");
                break;
            case 2:
                printf("Acesso parcial (relatórios e estoque)\n");
                break;
            case 3:
                printf("Acesso básico (apenas consultas)\n");
                break;
            default:
                printf("Cargo inválido!\n");
                break;
        }
    } else {
        printf("Acesso negado!\n");
    }

    return 0;
}