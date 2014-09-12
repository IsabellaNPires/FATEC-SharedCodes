#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Iniciando as variaveis
    //Uma varaiavel int para ser armazenada a escolha do usuario
    int operacao;

    //Tr�s variaveis float, para armazenar os numeros colocados pelo usuario e o resultado
    float numero1, numero2, resultado;


    //Apresenta��o visual para o usuario
    printf("============================\n");
    printf("========Bem-Vindos a========\n");
    printf("==a Calculadora 4 Funcoes!==\n");
    printf("============================\n");
    printf("\n\n\n");


    //Recebendo a operacao do Usuario
    printf("Digite a opera��o desejada, sendo;\n");
    printf("1 - para Soma, 2 - para Subtra��o,\n");
    printf("3 - para Multiplica��o, 4 - para Divis�o:\n");
    operacao =  getchar(); //Essa fun��o pega apenas um digito do usuario
    printf("\n\n");


    //Recebendo os valores para a opera��o
    printf("Digite o primeiro valor:\n");
    scanf("%f",&numero1);

    printf("Digite o segundo valor:\n");
    scanf("%f",&numero2);
    printf("\n\n");


    //Iniciando o switch para gerar a opera��o correta
    switch (operacao){
        case '1':
            resultado = numero1 + numero2;
            printf("%.2f + %.2f = %.2f",numero1,numero2,resultado);
            break;
        case '2':
            resultado = numero1 - numero2;
            printf("%.2f - %.2f = %.2f",numero1,numero2,resultado);
            break;
        case '3':
            resultado = numero1 * numero2;
            printf("%.2f x %.2f = %.2f",numero1,numero2,resultado);
            break;
        case '4':
            resultado = numero1 / numero2;
            printf("%.2f / %.2f = %.2f",numero1,numero2,resultado);
            break;
    }

    printf("\n\n");
}
