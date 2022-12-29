#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "projeto.h"

#define BUFFER 64

Dados *principal = NULL;
// Inicia a função "inicia_dados"
Dados *inicia_dados(int *codigo, char *nome, char *empresa, char *departamento, long int telefone, long int celular, char *email)
// As variáveis que serão usadas na função
{

    Dados *novo; // Declaração do Ponteiro

    novo = (Dados *)malloc(sizeof(Dados)); // Alocação dinâmica de memória, alocando de acordo com a qtd de bytes da variável "Dados"
    novo->codigo = codigo; // Aloca a quantidade de memória da variável interia "codigo"
    novo->nome = (char *)malloc(strlen(nome) + 1); // A função strlen recebe a variável "nome" como parâmetro e aloca a qtd + 1 bytes de memória
    strncpy(novo->nome, nome, strlen(nome) + 1); // A função strncpy copia os caracteres da string até que caia em uma string nula. A função strlen recebe a variável "nome" como parâmetro e aloca a qtd + 1 bytes de memória
    novo->empresa = (char *)malloc(strlen(empresa) + 1); // A função strlen recebe a variável "empresa" como parâmetro e aloca a qtd + 1 bytes de memória
    strncpy(novo->empresa, empresa, strlen(empresa) + 1); // A função strncpy copia os caracteres da string até que caia em uma string nula. A função strlen recebe a variável "empresa" como parâmetro e aloca a qtd + 1 bytes de memória
    novo->departamento = (char *)malloc(strlen(departamento) + 1); // A função strlen recebe a variável "departamento" como parâmetro e aloca a qtd + 1 bytes de memória
    strncpy(novo->departamento, departamento, strlen(departamento) + 1); // A função strncpy copia os caracteres da string até que caia em uma string nula. A função strlen recebe a variável "departamento" como parâmetro e aloca a qtd + 1 bytes de memória
    novo->telefone = telefone; // Aloca a quantidade de memória da variável interia "telefone"
    novo->celular = celular; // Aloca a quantidade de memória da variável interia "celular"
    novo->email = (char *)malloc(strlen(email) + 1); // A função strlen recebe a variável "email" como parâmetro e aloca a qtd + 1 bytes de memória
    strncpy(novo->email, email, strlen(email) + 1); // A função strncpy copia os caracteres da string até que caia em uma string nula. A função strlen recebe a variável "email" como parâmetro e aloca a qtd + 1 bytes de memória
    novo->proximo = NULL; // Para que os dados sejam possíveis de serem lidos

    return novo;
}

// Inicia a função que insere os dados na struct
Dados *insere_dados(Dados *dados, int *codigo, char *nome, char *empresa, char *departamento, long int telefone, long int celular, char *email)
// As variáveis que serão usadas na função
{

    Dados *novo;

    novo = (Dados *)malloc(sizeof(Dados)); // Alocação dinâmica de memória, alocando de acordo com a qtd de bytes da variável "Dados"
    novo->codigo = codigo; // Aloca a quantidade de memória da variável interia "codigo"
    novo->nome = (char *)malloc(strlen(nome) + 1); // A função strlen recebe a variável "nome" como parâmetro e aloca a qtd + 1 bytes de memória
    strncpy(novo->nome, nome, strlen(nome) + 1); // A função strncpy copia os caracteres da string até que caia em uma string nula. A função strlen recebe a variável "nome" como parâmetro e aloca a qtd + 1 bytes de memória
    novo->empresa = (char *)malloc(strlen(empresa) + 1); // A função strlen recebe a variável "empresa" como parâmetro e aloca a qtd + 1 bytes de memória
    strncpy(novo->empresa, empresa, strlen(empresa) + 1); // A função strncpy copia os caracteres da string até que caia em uma string nula. A função strlen recebe a variável "empresa" como parâmetro e aloca a qtd + 1 bytes de memória
    novo->departamento = (char *)malloc(strlen(departamento) + 1); // A função strlen recebe a variável "departamento" como parâmetro e aloca a qtd + 1 bytes de memória
    strncpy(novo->departamento, departamento, strlen(departamento) + 1); // A função strncpy copia os caracteres da string até que caia em uma string nula. A função strlen recebe a variável "departamento" como parâmetro e aloca a qtd + 1 bytes de memória
    novo->telefone = telefone; // Aloca a quantidade de memória da variável interia "telefone"
    novo->celular = celular; // Aloca a quantidade de memória da variável interia "celular"
    novo->email = (char *)malloc(strlen(email) + 1); // A função strlen recebe a variável "email" como parâmetro e aloca a qtd + 1 bytes de memória
    strncpy(novo->email, email, strlen(email) + 1); // A função strncpy copia os caracteres da string até que caia em uma string nula. A função strlen recebe a variável "email" como parâmetro e aloca a qtd + 1 bytes de memória
    novo->proximo = dados; // Para inserir o outro dado (que está amrmazenado na outra variavel)

    return novo;
}

// Inicia a função que exibe a lista com os dados inseridos
void exibe_dados(Dados *dados)
{

    fprintf(stdout, "\n\nCadastro:\n");

    fprintf(stdout, "------------------------\n");

    for (principal != NULL; dados != NULL; dados = dados->proximo)
    {
        fprintf(stdout, "Codigo: %d\n", dados->codigo); // Foi usado o fprintf para que o valor digitado no parametro "codigo" seja passado para um arquivo.
        fprintf(stdout, "Nome: %s\n", dados->nome); // Foi usado o fprintf para que o valor digitado no parametro "nome" seja passado para um arquivo.
        fprintf(stdout, "Empresa: %s\n", dados->empresa); // Foi usado o fprintf para que o valor digitado no parametro "empresa" seja passado para um arquivo.
        fprintf(stdout, "Departamento: %s\n", dados->departamento); // Foi usado o fprintf para que o valor digitado no parametro "departamento" seja passado para um arquivo.
        fprintf(stdout, "Telefone: %d\n", dados->telefone); // Foi usado o fprintf para que o valor digitado no parametro "telefone" seja passado para um arquivo.
        fprintf(stdout, "Celular: %d\n", dados->celular); // Foi usado o fprintf para que o valor digitado no parametro "celular" seja passado para um arquivo.
        fprintf(stdout, "Email: %s\n", dados->email); // Foi usado o fprintf para que o valor digitado no parametro "email" seja passado para um arquivo.
        fprintf(stdout, "------------------------\n");
    }

    getchar(); // Lê o que foi digitado pelo usuário
}

// Inicia a função que faz a busca de dados pelo parametro "nome"
void busca_dados_nome(Dados *dados, char *chave)
{

    int achou = 0;

    fprintf(stdout, "\n\nCadastro:\n");
    for (achou = 0; dados != NULL; dados = dados->proximo)
    // Enquanto a variável achou receber valor vazio, enquanto o ponteiro "dados" for diferente de nulo, o ponteiro dados deve apontar para o próximo tipo de dado da struct.
    {
        if (strcmp(chave, dados->nome) == 0) // Se o valor da variavel nome for igual a 0(falsa), ele pede para digitar novamente
        {

            fprintf(stdout, "------------------------\n");
            fprintf(stdout, "Codigo: %d\n", dados->codigo); // O que foi digitado na variavel "codigo" é salvo em um arquivo
            fprintf(stdout, "Nome: %s\n", dados->nome); // O que foi digitado na variavel "nome" é salvo em um arquivo
            fprintf(stdout, "Empresa: %s\n", dados->empresa); // O que foi digitado na variavel "empresa" é salvo em um arquivo
            fprintf(stdout, "Departamento: %s\n", dados->departamento); // O que foi digitado na variavel "departamento" é salvo em um arquivo
            fprintf(stdout, "Telefone: %d\n", dados->telefone); // O que foi digitado na variavel "telefone" é salvo em um arquivo
            fprintf(stdout, "Celular: %d\n", dados->celular); // O que foi digitado na variavel "celular" é salvo em um arquivo
            fprintf(stdout, "Email: %s\n", dados->email); // O que foi digitado na variavel "email" é salvo em um arquivo
            fprintf(stdout, "------------------------\n");
            achou++;
        }
    }

    if (achou == 0)
    // Se o valor da variavel nome for falsa(nao existir), aparecerá a mensagem
        fprintf(stdout, "Nenhum resultado encontrado.\n");
    else
        fprintf(stdout, "Foram encontrados %d registros.\n", achou);
    // Caso o valor sejagualama "espera" 1 segundo para prosseguir para a próxima etapa
    sleep(1); // O programa espera 1 segundo antes de continuar
}

// Inicia a função de busca de dados pelo codigo
void busca_dados_codigo1(Dados *dados, int *cadeado)
{

    int achou = 0;

    fprintf(stdout, "\n\nCadastro:\n");
    for (achou = 0; dados != NULL; dados = dados->proximo)
    // Enquanto a variável achou receber valor vazio, enquanto o ponteiro "dados" for diferente de nulo, o ponteiro dados deve apontar para o próximo tipo de dado da struct.
    {
        if (cadeado == dados->codigo) // Se o valor da variavel codigo for igual a que está armazainada no ponteiro dados, ele pede para digitar novamente
        {

            fprintf(stdout, "------------------------\n");
            fprintf(stdout, "Codigo: %d\n", dados->codigo);
            fprintf(stdout, "Nome: %s\n", dados->nome);
            fprintf(stdout, "Empresa: %s\n", dados->empresa);
            fprintf(stdout, "Departamento: %s\n", dados->departamento);
            fprintf(stdout, "Telefone: %d\n", dados->telefone);
            fprintf(stdout, "Celular: %d\n", dados->celular);
            fprintf(stdout, "Email: %s\n", dados->email);
            fprintf(stdout, "------------------------\n");
            achou++;
        }
    }

    if (achou == 0)
    // Se o valor da variavel nome for falsa(nao existir), aparecerá a mensagem
        fprintf(stdout, "Nenhum resultado encontrado.\n");
    else
        fprintf(stdout, "Foram encontrados %d registros.\n", achou);
    // Caso o valor sejagualama "espera" 1 segundo para prosseguir para a próxima etapa

    sleep(1); // O programa espera 1 segundo antes de continuar
}

// Inicia a função de busca de dados pelo codigo COM a opcao de alterar o codigo
void busca_dados_codigo2(Dados *dados, int *cadeado)
{

    int achou = 0; // Variavel inicializa com valor 0
    int op2 = 0; // Declara variavel op2

    fprintf(stdout, "\n\nCadastro:\n");
    for (achou = 0; dados != NULL; dados = dados->proximo)
    // Variavel achou inicializa com 0, até que dados seja diferente de nulo, o ponteiro dados passará para o próximo
    {
        if (cadeado == dados->codigo) // Se o valor da variavel codigo for igual a que está armazainada no ponteiro dados, ele pede para digitar novamente
        {

            fprintf(stdout, "------------------------\n");
            fprintf(stdout, "Codigo: %d\n", dados->codigo);
            fprintf(stdout, "Nome: %s\n", dados->nome);
            fprintf(stdout, "Empresa: %s\n", dados->empresa);
            fprintf(stdout, "Departamento: %s\n", dados->departamento);
            fprintf(stdout, "Telefone: %d\n", dados->telefone);
            fprintf(stdout, "Celular: %d\n", dados->celular);
            fprintf(stdout, "Email: %s\n", dados->email);
            fprintf(stdout, "------------------------\n");
            achou++;
        }
    }

    if (achou == 0)
    // Se o valor da variavel nome for falsa(nao existir), aparecerá a mensagem
        fprintf(stdout, "Nenhum resultado encontrado.\n");

    else {
    // Caso contrário, o usuário deve confirmar se realmente quer alterar o registro
        printf("\n\n Voce deseja realmente alterar esse contato?\n Sim(01) ou Nao(02): ");
        scanf("%d", &op2);
        switch (op2) // Inicia um switch passando a variável op2 como parâmetro
        {
        case 1: // No primeiro caso, ele escolhe alterar o registro
            deleta2();
            insere();
            break;
        case 2: // No segundo caso, cancela o procedimento
            break;
        default:
            printf("\n Opcao invalida!");
            break;
        }
    }
}

//Inicia a funçao que busca registro pelo codigo com a opçao de excluir o registro
void busca_dados_codigo3(Dados *dados, int *cadeado)
{

    int achou = 0; // Variavel inicializa com valor 0
    int op2 = 0; // Declara variavel op2

    fprintf(stdout, "\n\nCadastro:\n");
    for (achou = 0; dados != NULL; dados = dados->proximo)
    // Variavel achou inicializa com 0, até que dados seja diferente de nulo, o ponteiro dados passará para o próximo
    {
        if (cadeado == dados->codigo) // Se o valor da variavel codigo for igual a que está armazainada no ponteiro dados, ele pede para digitar novamente
        {

            fprintf(stdout, "------------------------\n");
            fprintf(stdout, "Codigo: %d\n", dados->codigo);
            fprintf(stdout, "Nome: %s\n", dados->nome);
            fprintf(stdout, "Empresa: %s\n", dados->empresa);
            fprintf(stdout, "Departamento: %s\n", dados->departamento);
            fprintf(stdout, "Telefone: %d\n", dados->telefone);
            fprintf(stdout, "Celular: %d\n", dados->celular);
            fprintf(stdout, "Email: %s\n", dados->email);
            fprintf(stdout, "------------------------\n");
            achou++;
        }
    }

    if (achou == 0)
    // Se o valor da variavel nome for falsa(nao existir), aparecerá a mensagem
        fprintf(stdout, "Nenhum resultado encontrado.\n");
    else
    // Caso contrário, o usuário deve confirmar se realmente quer deletar o registro
    {
        printf("\n\n Voce deseja realmente excluir esse contato?\n Sim(01) ou Nao(02): ");
        scanf("%d", &op2);
        switch (op2) // Inicia um switch passando a variável op2 como parâmetro
        {
        case 1: // No primeiro caso, ele escolhe deletar o registro
            deleta();
            break;
        case 2: // No segundo caso, cancela o procedimento
            break;
        default:
            printf("\n Opcao invalida!");
            break;
        }
    }
}

// Inicia a funçao de deletar dados
Dados *deleta_dados(Dados *dados)
{

    Dados *novo; // Variavel apontando para a ponteiro novo

    novo = dados->proximo; // Variavel armazena o "proximo" dado inserido

    free(dados); //Limpa a memória do parâmetro "dados"

    fprintf(stdout, "Deletado com sucesso.\n");
    sleep(1); // Espera 1 segundo para dar continuidade ao programa

    return novo;
}

// Inicia a funçao de deletar dados
Dados *deleta_dados2(Dados *dados)
{

    Dados *novo; // Variavel apontando para a ponteiro novo

    novo = dados->proximo; // Variavel armazena o "proximo" dado inserido

    free(dados); //Limpa a memória do parâmetro "dados"

    return novo;
}

// Inicia a funçao que checa se a lista está vazia
int checa_vazio(Dados *dados)
{

    if (dados == NULL) // Se o ponteiro dados for nulo (ou seja, se a lista estiver vazia)
    {
        fprintf(stdout, "Lista vazia!\n"); // Aparecerá a mensagem
        sleep(1); // // Espera 1 segundo para dar continuidade ao programa
        return 1;
    }
    else // Caso a lista não esteja vazia, ele retorna a própria lista
        return 0;
}

// Inicia a funçao que insere dados
void insere(void)
{

    int *codigo;
    char *nome;
    char *empresa;
    char *departamento;
    long int telefone;
    long int celular;
    char *email;

    codigo = (int *)malloc(BUFFER); // Aloca memoria para a variavel "codigo" do tamanho do buffer
    nome = (char *)malloc(BUFFER); // Aloca memoria para a variavel "nome" do tamanho do buffer
    empresa = (char *)malloc(BUFFER); // Aloca memoria para a variavel "empresa" do tamanho do buffer
    departamento = (char *)malloc(BUFFER); // Aloca memoria para a variavel "departamento" do tamanho do buffer
    email = (char *)malloc(BUFFER); // Aloca memoria para a variavel "email" do tamanho do buffer

    // Nos códigos abaixo:
    // fprintf usado para que o valor digitado seja passado para um arquivo
    // scanf usado para ler o que foi digitado pelo usuario
    // stdout usado para mostrar como saída o que foi digitado em forma de arquivo
    fprintf(stdout, "\nDigite o codigo: \n----> ");
    scanf("%d", &codigo);
    fprintf(stdout, "\n");

    fprintf(stdout, "\n\nDigite o nome: \n----> ");
    scanf("%s", nome);
    fprintf(stdout, "\n");

    fprintf(stdout, "\n\nDigite a empresa: \n----> ");
    scanf("%s", empresa);
    fprintf(stdout, "\n");

    fprintf(stdout, "\n\nDigite o departamento: \n----> ");
    scanf("%s", departamento);
    fprintf(stdout, "\n\n");

    fprintf(stdout, "Digite o telefone: \n----> ");
    scanf("%d", &telefone);
    fprintf(stdout, "\n\n\n");

    fprintf(stdout, "Digite o celular: \n----> ");
    scanf("%d", &celular);
    fprintf(stdout, "\n\n\n");

    fprintf(stdout, "\n\nDigite o email: \n----> ");
    scanf("%s", email);
    fprintf(stdout, "\n");

    if (principal == NULL) // Se a variavel for nula, inicia o programa
        principal = inicia_dados(codigo, nome, empresa, departamento, telefone, celular, email);
    else // Se a variavel não for nula, vai para a insercao de dados
        principal = insere_dados(principal, codigo, nome, empresa, departamento, telefone, celular, email);
}

// Inicia a funçao que exibe dados
void exibe(void)
{

    if (!checa_vazio(principal)) // Se for diferente da funcao checa_vazio
        exibe_dados(principal); // Ela exibe o registro
}

// Inicia a funcao busca por nome
void busca_nome(void)
{

    char *chave; //Cria um ponteiro do tipo char

    if (!checa_vazio(principal)) // Se for diferente de vazio
    {

        chave = (char *)malloc(BUFFER); // Aloca memória do tamanho do buffer

        fprintf(stdout, "\nDigite o nome para buscar: \n--> "); // Exibe a mensagem
        scanf("%s", chave); // Lê o que foi digitado pelo usuario

        busca_dados_nome(principal, chave); // Realiza a busca pelo nome
    }
}

// Inicia a funcao busca por codigo
void busca_codigo1(void)
{

    int *cadeado; // Cria um ponteiro do tipo inteiro

    if (!checa_vazio(principal)) // Se for diferente de vazio
    {
        cadeado = (int *)malloc(BUFFER); // Aloca memória do tamanho do buffer

        fprintf(stdout, "\nDigite o codigo para buscar: \n--> "); // Exibe a mensagem
        scanf("%d", &cadeado); // Lê o que foi digitado pelo usuario

        busca_dados_codigo1(principal, cadeado); // Realiza a busca pelo codigo
    }
}

// Inicia a funçao por codigo com opçcao de alterar dados
void busca_codigo2(void)
{

    int *cadeado; // Cria um ponteiro do tipo inteiro

    if (!checa_vazio(principal)) // Se for diferente de vazio
    {
        cadeado = (int *)malloc(BUFFER); // Se for diferente de vazio

        fprintf(stdout, "\nDigite o codigo para buscar: \n--> "); // Exibe a mensagem
        scanf("%d", &cadeado); // Lê o que foi digitado pelo usuario

        busca_dados_codigo2(principal, cadeado); // Realiza a busca pelo codigo, com opçao de alterar
    }
}

// Inicia a funçao por codigo com opçcao de deletar dados
void busca_codigo3(void)
{

    int *cadeado; // Cria um ponteiro do tipo inteiro

    if (!checa_vazio(principal)) // Se for diferente de vazio
    {
        cadeado = (int *)malloc(BUFFER); // Se for diferente de vazio

        fprintf(stdout, "\nDigite o codigo para buscar: \n--> "); // Exibe a mensagem
        scanf("%d", &cadeado); // Lê o que foi digitado pelo usuario

        busca_dados_codigo3(principal, cadeado); // Realiza a busca pelo codigo, com opçao de alterar
    }
}

// Inicia a funcao deleta
void deleta(void)
{

    if (!checa_vazio(principal)) // Se for diferente de vazio
        principal = deleta_dados(principal); // Deleta os dados
}

void deleta2(void)
{

    if (!checa_vazio(principal)) // Se for diferente de vazio
        principal = deleta_dados2(principal); // Deleta os dados
}
