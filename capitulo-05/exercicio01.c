/*
    Autor: Francisco Jonathan Rodrigues Fenandes
    Semestre: 2 semestre
    Email: fernandes.francisco07@aluno.ifce.edu.br

    Descricao: 
        Exercicio 01 do Capitulo 5

        Enunciado: Faca um algoritmo que receba o tamanho dos tres lados de um triangulo e faca as seguintes atividades: retorne 
        se os tres lados realmente formam um triangulo e que tipo de triangulo eh esse. Cada uma destas atividades deve ser um modulo.
        
*/
#include <stdio.h>

void existenciaTriangulo(float segmento_AB, float segmento_CD, float segmento_EF);
void tipoTiangulo(float segmento_AB, float segmento_CD, float segmento_EF);

int main() {

/*
    Segundo a condicao de existencia de um triangulo: tres segmentos de reta so formarao um triangulo, se a soma de dois de
    dois de seus lados for maior que o terceiro lado.
    Ex. seguimentos AB = 16, CD = 20, EF = 30
    AB + CD = 36 > EF
    CD + EF = 50 > AB
    AB + EF = 46 > CD
*/
    float segmento_AB, segmento_CD, segmento_EF;
    
    printf("Informe o valor do primeiro lado do triangulo:");
    scanf("%f", &segmento_AB);
    printf("Informe o valor do segundo lado do triangulo:");
    scanf("%f", &segmento_CD);
    printf("Informe o valor do terceiro lado do triangulo:");
    scanf("%f", &segmento_EF);
    
    existenciaTriangulo(segmento_AB, segmento_CD, segmento_EF);
    tipoTiangulo(segmento_AB, segmento_CD, segmento_EF);

    return 0;
}

void existenciaTriangulo(float segmento_AB, float segmento_CD, float segmento_EF){
    if(segmento_AB + seguimento_CD > seguimento_EF && seguimento_CD + seguimento_EF > seguimento_AB && seguimento_AB + seguimento_EF > CD){
        printf("O triangulo possui a condicao de existencia!");
    }else{
        printf("O triangulo nao possui a condicao de existencia!");
    }
}

void tipoTiangulo(float segmento_AB, float segmento_CD, float segmento_EF){
    if(segmento_AB + seguimento_CD > seguimento_EF && seguimento_CD + seguimento_EF > seguimento_AB && seguimento_AB + seguimento_EF > CD){
        if(segmento_AB == seguimento_CD && seguimento_AB == seguimento_EF)
            printf("Triangulo equilatero.");
        if(segmento_AB == seguimento_CD && seguimento_AB != seguimento_EF)
            printf("Triangulo isosceles.");
        if(segmento_AB != seguimento_CD && seguimento_AB != seguimento_EF)
            printf("Triangulo escaleno.");
    }
}
        
        
