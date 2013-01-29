/* 
 * File:   main.c
 * Author: Manuel Sousa
 *
 * Created on 28 de Janeiro de 2013, 17:56
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 100

typedef enum {
    A, B, C, D
} CATEG;

typedef enum {
    SIM, NAO
} VALDCART;

typedef struct {
    unsigned short int pref, suf;
} CODIGOPOST;

typedef struct {
    unsigned short int dia, mes, ano;
} DATA;

typedef struct {
    char rua[TAM];
    unsigned short int num;
    char localidade[TAM];

} MORADA;

typedef struct {
    unsigned int ni;
    char nome[TAM];
    MORADA morada;
    unsigned short int telefone;
    DATA dt_nasc;
    CODIGOPOST cd_post;
    CATEG categoria;
    VALDCART validacao_cart;
} ALUNO;

void ler_Aluno(ALUNO *p) {

    printf("Numero de identificacao:\n ");
    scanf("%u", &p->ni);
    printf("Nome do aluno:\n");
    fgets(p->nome, TAM, stdin);
    printf("Rua onde reside:\n ");
    fgets(p->morada.rua, TAM, stdin);
    printf("Numero da porta:\n ");
    scanf("%u", &p->morada.num);
    printf("Localidade:\n");
    fgets(p->morada.localidade, TAM, stdin);


    printf("Data de nascimento tipo dd/mm/aaaa :\n");
    scanf("%u/%u/%u", &p->dt_nasc);
    printf("Escolha a categoria de conducao (A,B,C,D): \n");
    scanf("%u", &p->categoria);
    printf("Revalidacao da carta: \n");
    scanf("%u", &p->validacao_cart);
}

void mostrar_aluno(ALUNO p) {
    printf("Numero identificacao: %u\n", p.ni);
    printf("Nome: %c\n", p.nome);
    printf("Rua onde reside: %c\n", p.morada.rua);
    printf("Numero da porta: %u\n", p.morada.num);
    printf("Localidade: %c\n", p.morada.localidade);

    printf("Data de nascimento: %u/%u/%u\n", p.dt_nasc);
    printf("Categoria de condução: ");
    if (p.categoria == 0) {
        printf("A");
    }
    if (p.categoria == 1) {
        printf("B");
    }
    if (p.categoria == 2) {
        printf("C");
    }
    if (p.categoria == 3) {
        printf("D");
    }
    printf("reavalidacao da carta: ");
    if(p.validacao_cart == 0){
        printf("SIM");
    }
    if(p.validacao_cart == 1){
        printf("NAO");
    }
}

int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}
