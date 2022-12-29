typedef struct cliente  // Cria uma estrutura chamada "cliente"
{
    int *codigo;
    char *nome;
    char *empresa;
    char *departamento;
    long int telefone;
    long int celular;
    char *email;
    struct cliente *proximo;
} Dados;

Dados *inicia_dados(int *codigo, char *nome, char *empresa, char *departamento, long int telefone, long int celular, char *email); // Declara��o da fun��o que inicia o programa
Dados *insere_dados(Dados *dados, int *codigo, char *nome, char *empresa, char *departamento, long int telefone, long int celular, char *email); // Declara��o da fun��o que insere os dados no programa
void exibe_dados(Dados *dados); // Declara��o da fun��o que exibe os dados
void busca_dados_nome(Dados *dados, char *chave); // Declara��o da fun��o que busca um registro pelo par�metro "nome"

// Foram declaradas 3 fun��es do tipo "busca_dados_codigo" porque cada uma tem uma fun��o no "switch"
void busca_dados_codigo1(Dados *dados, int *cadeado); // Declara��o da fun��o que busca um registro pelo par�metro "codigo"
void busca_dados_codigo2(Dados *dados, int *cadeado); // Declara��o da fun��o que busca um registro pelo par�metro "codigo"
void busca_dados_codigo3(Dados *dados, int *cadeado); // Declara��o da fun��o que busca um registro pelo par�metro "codigo"
Dados *deleta_dados(Dados *dados); // Declara��o da fun��o que deleta um registro
Dados *deleta_dados2(Dados *dados);
int checa_vazio(Dados *dados); // Declara��o da fun��o que verifica se a lista est� vazia

void insere(void);
void exibe(void);
void busca_nome(void);
void busca_codigo1(void);
void busca_codigo2(void);
void busca_codigo3(void);
void deleta(void);
void deleta2(void);

