//IF-Else e SWITCH

// bibliotecas
#include<stdio.h>
#include<stdlib.h>

// Estrutura do código em C
int main()
{ 
    /*
    declarações: todas as variáveis utilizadas precisam ser declaradas
    */
   int idade;

   /* programa */
    printf("Digite a sua idade.\n"); // printf é para solicitar o dado do user
    scanf_s("%d", &idade); // scanf captura o valor digitado e coloca dentro da var idade. 
    // %d variável de tipo inteiro.
    // &idade - o & faz referencia a variável,guarda o endereço da variavel

    printf("%d? Legal, voce parece ter %d anos!\n", idade, idade * 2);

    /*fim do programa*/
    system("pause");
    return 0;
}

// receber 2 números
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf_s("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf_s("%d", &n2);

    printf("os numeros digitados sao: %d e %d\n", n1, n2);
    
    system("pause");
    return 0;
}

// Algoritmo que recebe 2 valores inteiros, fornecidos pelo user, e acrescenta duas unidades no primeiro número (soma + 2), três unidades (soma + 3) no segundo e retorna os valores no monitor.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf_s("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf_s("%d", &n2);

    n1 = n1 + 2;
    n2 = n2 + 3;

    printf("os numeros sao: %d e %d\n", n1, n2);
    
    system("pause");
    return 0;
}

// algoritmo que recebe 2 num inteiros, compara se o primeiro é maior que o segundo e imprimi na tela uma msg, informando o resultado da comparação
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf_s("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf_s("%d", &n2);

    if (n1 > n2) {

        printf("\n O numero da variavel n1 é maior que da variavel n2\n\n");
    }
    else{
    
        printf("\n O numero da variavel n2 e maior que da variavel n1\n\n");
    }
    
    printf("os numeros digitados sao: %d e %d\n", n1, n2);
    
    system("pause");
    return 0;
}

// Algoritmo que pega um número e retorna o dia da semana equivalente ao número
// SWITCH CASE
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int opcao;
    printf("Digite um numero entre 1 e 7: ");
    scanf_s("%d", &opcao);

    switch (opcao)
    {
        case 1:
        printf("O dia escolhido foi domingo\n");
        break;

        case 2:
        printf("O dia escolhido foi segunda\n");
        break;

        case 3:
        printf("O dia escolhido foi terça\n");
        break;

        case 4:
        printf("O dia escolhido foi quarta\n");
        break;

        case 5:
        printf("O dia escolhido foi quinta\n");
        break;

        case 6:
        printf("O dia escolhido foi sexta\n");
        break;

        case 7:
        printf("O dia escolhido foi sabado\n");
        break;
    
        default:
        printf("Número invalido");
            break;
    }

    system("pause");
    return 0;
}



