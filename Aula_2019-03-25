#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int exemplo1();
int exemplo2();
int exemplo3();
int exemplo4();
int exemplo5();

int exercicio1();
int exercicio2();
int exercicio3();

int main()
{

    setlocale(LC_ALL, "Portuguese");

    exercicio3();

    return 0;

}

int exemplo1() {

    int dados[100];
    int i, qtdDados;

    printf("\nDigite a quantidade de dados que ira utilizar:");
    scanf("%d", &qtdDados);

    for(i=0; i < qtdDados; i++) {
        printf("\nDigite valor de dados[%d]=",i);
        scanf("%d", &dados[i]);
    }

    for(i=0; i < qtdDados; i++) {
        printf("\nValor de dados[%d]=%d",i,dados[i]);
    }

    return 0;
}

int exemplo2() {

    //criando um ponteiro para int
    int *ptr;

    //alocando memoria para armazenar um numero inteiro
    // e associando esta memoria ao ponteiro
    ptr = (int*) malloc(sizeof(int));

    //atribuindo um valor ao ponteiro
    *ptr = 42;

    //imprimindo o endereco do ponteiro e valor
    printf("\nEndereco %u", (unsigned int) ptr);
    printf("\nValor %d", *ptr);

    free(ptr);

    printf("\nEndereco %u", (unsigned int) ptr);
    printf("\nValor %d", *ptr);

    return 0;
}

int exemplo3() {

    //criando um ponteiro para int
    int *ptr;

    //alocando memoria para armazenar um numero inteiro
    // e associando esta memoria ao ponteiro
    ptr = (int *) malloc(sizeof(int));

    //atribuindo um valor ao ponteiro
    *ptr = 42;

    //imprimindo o endereco do ponteiro e valor
    printf("\nEndereco %u", (unsigned int) ptr);
    printf("\nValor %d", *ptr);

    //liberando a memoria alocada
    free(ptr);

return 0;
    return 0;
}

int exemplo4() {

    //declarando um ponteiro para inteiro
    int *pVetor;
    int i;

    //Alocando um vetor de 10 posicoes
    pVetor = (int *) malloc( 10 *sizeof(int) );

    if(pVetor != NULL) {
        //preenchendo os 10 elementos do vetor
        for(i=0; i<10; i++){
            printf("\nDigite elemento %d do vetor:", i);
            scanf("%d", (pVetor+i));
        }

        //imprimindo o vetor
        for(i=0; i<10; i++) {
            printf("\npVetor[%d] = %d", i, *(pVetor+i));
        }
    } else {
        printf("\n Erro: Nao foi possivel alocar memoria!!");
    }

    return 0;
}

int exemplo5() {

    //declarando um ponteiro para inteiro
    int *pVetor;
    int i;

    //Alocando um vetor de 10 posicoes
    pVetor = calloc(10, sizeof(int));

    if(pVetor != NULL){

        //imprimindo o vetor
        //inicializado
        for(i=0; i<10; i++) {
            printf("\npVetor[%d] = %d", i, *(pVetor+i));
        }

        //preenchendo os 10 elementos do vetor
        for(i=0; i<10; i++){
            printf("\nDigite elemento %d do vetor:", i);
            scanf("%d", (pVetor+i));
        }

        //imprimindo o vetor
        for(i=0; i<10; i++) {
            printf("\npVetor[%d] = %d", i, *(pVetor+i));
        }

    } else {

        printf("\n Erro: Nao foi possivel alocar memoria!!");
    }

    return 0;

}

int exercicio1() {

    srand(time(NULL));

    int *vetor = (int*) malloc(sizeof(int) * 10);

    for (int i = 0; i < 10; i++) {
        *(vetor+i) = rand();
        printf("\nPosição %d: %p (%u)", i, (void*) (vetor+i), (unsigned int) (vetor+i));
        printf("\nValor: %d", *(vetor+i));
    }

    free(vetor);

    return 0;
}

int exercicio2() {

    srand(time(NULL));

    int *vetor = (int*) calloc(10, sizeof(int));

    for (int i = 0; i < 10; i++) {
        *(vetor+i) = rand();
        printf("\nPosição %d: %p (%u)", i, (void*) (vetor+i), (unsigned int) (vetor+i));
        printf("\nValor: %d", *(vetor+i));
    }

    free(vetor);

    return 0;
}

int exercicio3() {

    srand(time(NULL));

    int *vetor1 = (int*) calloc(10, sizeof(int));
    int *vetor2 = (int*) calloc(10, sizeof(int));

    printf("\nvetor1: %p (%u)\n", (void*) vetor1, (unsigned int) vetor1);
    for (int i = 0; i < 10; i++) {
        *(vetor1+i) = rand();
        printf("%d ", *(vetor1+i));
    }
    vetor2 = vetor1;

    vetor1 = realloc(vetor1, 15 * sizeof(int));

    printf("\n\nAmpliando...\n");
    printf("\nvetor1: %p (%u)\n", (void*) vetor1, (unsigned int) vetor1);
    for (int i = 10; i < 15; i++) {
        *(vetor1+i) = rand();
    }

    for (int i = 0; i < 15; i++) {
        printf("%d ", *(vetor1+i));
    }

    printf("\n\nvetor2: %p (%u)\n", (void*) vetor2, (unsigned int) vetor2);
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(vetor2+i));
    }

    free(vetor1);
    free(vetor2);

    return 0;
}
