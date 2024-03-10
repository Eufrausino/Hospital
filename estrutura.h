#ifndef ESTRUTURA_H
#define ESTRUTURA_H

typedef struct quarto
{
    int numero_camas;
    int permissao_entrada; //sim ou não
    char codigo_quarto[4];//andar + numero; exemplo: 301(3º Andar, quarto 1)
}
quarto;

typedef struct epi
{
    int mascara;
    int luva;
    int oculos_protecao;
    int avental;
    int sapatos;
    int touca;
    int protetor_facial;
}
EPI;

typedef struct estoque
{
    int sedativos;
    int alimentos;
    int remedios;
    int higiene;
    EPI epi;
}
estoque;

typedef struct equipamento
{
    int defeituoso;//0 ou 1
}
equipamento;

#endif