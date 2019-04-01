#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define APARTAMENTOS 2

/*
    structs
*/

typedef struct apt {
    char responsavel[50];
    short numero, filhos;
    float renda;
} apartamento;

int exemplo1();
int exemplo2();
apartamento criarApt();
int exemplo3();
int exemplo4();
int lerApt(apartamento *apt);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //exemplo1();
    //exemplo2();
    //exemplo3();
    exemplo4();

    return 0;
}

int exemplo1() {

    apartamento apt;

    apt.numero = 123;
    strcpy(apt.responsavel, "Fulano de Tal");
    apt.filhos = 3;
    apt.renda = 1234.45;

    printf("\nDados do apt %hd:\n", apt.numero);
    printf("Responsável: %s\n", apt.responsavel);
    printf("Filhos: %hd\n", apt.filhos);
    printf("Renda: %.2f\n", apt.renda);

    return 0;
}

int exemplo2() {

    apartamento apt[APARTAMENTOS];

    srand(time(NULL));

    for (short i = 0; i < APARTAMENTOS; i++) {
        apt[i] = criarApt();
        printf("\nDados do apt %hd:\n", apt[i].numero);
        printf("Responsável: %s\n", apt[i].responsavel);
        printf("Filhos: %hd\n", apt[i].filhos);
        printf("Renda: %.2f\n", apt[i].renda);
    }

    return 0;
}

apartamento criarApt() {

    static short numero = 0;
    apartamento apt;
    char nomes[][50] = {
        "Armando",
        "Beatriz",
        "Carlos",
        "Danilo",
        "Elaine",
        "Fabiana",
        "Gabriela",
        "Hélio",
        "Igor",
        "Jayme",
        "Keyla",
        "Lia"
    };
    numero++;
    short tamanho = sizeof(nomes)/sizeof(nomes[0]);

    apt.numero = numero;
    strcpy(apt.responsavel, nomes[rand() % tamanho]);
    apt.filhos = rand() % 33;
    apt.renda = rand();

    return apt;

}

int exemplo3() {

    apartamento apt[APARTAMENTOS];

    srand(time(NULL));

    for (short i = 0; i < APARTAMENTOS; i++) {
        apt[i].numero = i + 1;
        printf("\nDados do apt %hd:\n", apt[i].numero);
        printf("\nResponsável: ");
        // while(getchar() != '\n');
        scanf(" %[^\n]", apt[i].responsavel);
        printf("\nFilhos: ");
        scanf("%hd", &apt[i].filhos);
        printf("\nRenda: ");
        scanf("%f", &apt[i].renda);
    }

    for (short i = 0; i < APARTAMENTOS; i++) {
        printf("\nDados do apt %hd:\n", apt[i].numero);
        printf("Responsável: %s\n", apt[i].responsavel);
        printf("Filhos: %hd\n", apt[i].filhos);
        printf("Renda: %.2f\n", apt[i].renda);
    }

    return 0;
}

int exemplo4() {

    apartamento apt[APARTAMENTOS];

    srand(time(NULL));

    for (short i = 0; i < APARTAMENTOS; i++) {
        apt[i].numero = i + 1;
        lerApt(apt+i);
    }

    for (short i = 0; i < APARTAMENTOS; i++) {
        printf("\nDados do apt %hd:\n", apt[i].numero);
        printf("Responsável: %s\n", apt[i].responsavel);
        printf("Filhos: %hd\n", apt[i].filhos);
        printf("Renda: %.2f\n", apt[i].renda);
    }

    return 0;
}

int lerApt(apartamento *apt) {

        printf("\nDados do apt %hd:\n", (*apt).numero);
        printf("\nResponsável: ");
        // while(getchar() != '\n');
        scanf(" %[^\n]", &(*apt).responsavel);
        printf("\nFilhos: ");
        scanf("%hd", &(*apt).filhos);
        printf("\nRenda: ");
        scanf("%f", &(*apt).renda);

    return 0;
}
