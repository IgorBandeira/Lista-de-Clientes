#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "projeto.h"

#define BUFFER 64

// Inicia a fun�ao principal do programa
int main(void)
{

    char escolha; // Cria uma variavel do tipo char

    do
    {

        fprintf(stdout, "\n\t\tCadastro de Clientes\n\n");
        fprintf(stdout, "Escolha uma opcao: \n"); // L� a opcao escolhida pelo usuario
        fprintf(stdout, "1 - Insere Dados\n");
        fprintf(stdout, "2 - Exibe Dados\n");
        fprintf(stdout, "3 - Busca por codigo\n");
        fprintf(stdout, "4 - Buscar por nome\n");
        fprintf(stdout, "5 - Editar por codigo\n");
        fprintf(stdout, "6 - Remover por codigo\n");
        fprintf(stdout, "7 - Sair\n\n");

        scanf("%c", &escolha); // L� o que foi escolhido pelo usuario

        switch (escolha) // Abre um switch
        {
        case '1': // Caso seja digitada a op�ao 1, chama a fun�ao insere dados
            insere();
            break;

        case '2': // Caso seja digitada a op�ao 3, chama a fun�ao exibe dados
            exibe();
            break;

        case '3': // Caso seja digitada a op�ao 3, chama a fun�ao busca por codigo
            busca_codigo1();
            break;

        case '4': // Caso seja digitada a op�ao 4, chama a fun�ao busca por nome
            busca_nome();
            break;

        case '5': // Caso seja digitada a op�ao 5, chama a fun�ao busca por codigo com a op�ao de alterar
            busca_codigo2();
            break;

        case '6': // Caso seja digitada a op�ao 6, chama a fun�ao busca por codigo com a op�ao de deletar
            busca_codigo3();
            break;

        case '7': // Caso seja digitada a op�ao 7, ele fecha o programa
            exit(0);
            break;

        default:
            fprintf(stderr, "Digite uma opcao valida!\n"); // Caso nenhuma das op�oes acima sejam digitadas, ele mostra a mensagem
            sleep(1); // Espera 1 segundo para dar continuidade ao programa
            break;
        }

        getchar(); // L� o que foi digitado pelo usu�rio
    }

    while (escolha > 0);

}
