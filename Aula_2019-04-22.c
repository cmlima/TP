#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
    scanf("%d");
    getchar();
    scanf("%c");
    scanf("%f");
    scanf("%s");

    gets(variavel);
    fgets(variavel, tamanho, stdin);

*/
typedef struct pessoas {
    char nome[100];
    short idade;
    float salario;
    char indicador;
} Pessoa;

int ponteiros();
int input();
int structs();
void lerPessoa(Pessoa *pessoa);
void mostrarPessoa(Pessoa pessoa);
short proximaPessoa(Pessoa *pessoa);

int main()
{

    setlocale(LC_ALL, "Portuguese");

    structs();

    return 0;
}

int structs() {

    Pessoa pessoas[100];

    for (short i = 0; i < 100; i++) {
        strcpy(pessoas[i].nome, "\0");
        pessoas[i].idade = 0;
        pessoas[i].salario = 0;
        pessoas[i].indicador = 'n';
    }

    lerPessoa(pessoas);
    mostrarPessoa(pessoas[0]);
    while(getchar() != '\n');
    lerPessoa(pessoas + 1);
    mostrarPessoa(pessoas[1]);

    printf("\nPróxima: %hd", proximaPessoa(pessoas));

    return 0;
}

short proximaPessoa(Pessoa *pessoas) {

    short tamanho = sizeof(*pessoas)/sizeof(Pessoa);
    short indice = -1;

    for (int i = 0; i < tamanho; i++) {
        if (!strcmp((*pessoas).nome, "\0")) {
            indice = i;
            break;
        }
    }

    return indice;
}

void lerPessoa(Pessoa *pessoa) {

    printf("\nNome: ");
    //fgets((*pessoa).nome, 100, stdin);
    scanf("%[^\n]", &(*pessoa).nome);
    printf("\nIdade: ");
    scanf("%hd", &(*pessoa).idade);
    printf("\nSalário: ");
    scanf("%f", &(*pessoa).salario);
    printf("\nIndicador (s/n): ");
    while(getchar() != '\n');
    scanf("%c", &(*pessoa).indicador);
}

void mostrarPessoa(Pessoa pessoa) {

    printf("\nNome: %s", pessoa.nome);
    printf("\nIdade: %hd", pessoa.idade);
    printf("\nSalário: %.2f", pessoa.salario);
    printf("\nIndicador (s/n): %c", pessoa.indicador);

}

int input() {

    char frase[100];
    char caractere;
    short num;

    //fgets(frase, 100, stdin);
    //scanf("%[^\n]", frase);
    //printf("\n\nFrase: %s", frase);
    //printf("Proxima linha.");


    scanf("%hd", &num);
    printf("\n%hd\n\n", num);
    while(getchar() != '\n');
    scanf("%c", &caractere);
    printf("\n\n%c", caractere);

    return 0;

}

int ponteiros() {

    int num = 5, num2;
    int *ponteiro = &num;

    *ponteiro = 8;

    ponteiro = &num2;

    printf("\nEndereço: %p", (void*) &num);

}
