//IF-Else, WHILE e FOR

//Considere um algoritmo que vai receber dois dados numericos reais(float): as duas notas que o aluno precisara para passar. Faça a média dos dois números e, se for maior ou igual a 7 o algoritmo vai imprimir uma mensagem de aprovado, caso contrario, a mensagem sera reprovado

// bibliotecas
#include<stdio.h>
#include<stdlib.h>

int main()
{
    // variaveis
    float nota1, nota2, media;

    // usuario digita as notas

    printf("digite a primeira nota: ");
    // armazeno na variavel - %f utiliza para dado tipo float
    scanf_s("%f", &nota1);

    printf("digite a segunda nota: ");
    scanf_s("%f", &nota2);

    // calculo da média
    media = (nota1 + nota2) / 2;

    if (media >= 7) {
        printf("Parabens voce foi aprovadx\n");
    }
    else
    {
        printf("Reprovadx\n");
    }

    //imprimo a media
    // %.2f - .2 para limitar a 2 casas decimais
    printf("Media = %.2f\n", media);
    
    // finalizo o programa
    system("pause");
    return 0;
}

// Considere um algoritmo em que o usuário vai digitar a quantidade de retições e imprimir o numero de vezes em que foi executado o loop em dois algoritmos.

// com WHILE
#include<stdio.h>
#include<stdlib.h>

int main()
{
    // variaveis
    int num, cont = 1;

    // entrada dos dados pelo user
    printf("Digite a quantidade de loops desejada: ");
    scanf("%d", &num);

    //laço
    while (cont<= num)
    {
        printf("Repetiu %d vez(es)\n", cont);
        cont++;
    }

    // fim
    system("pause");
    return 0;
}

// com FOR

#include<stdio.h>
#include<stdlib.h>

int main()
{
    // variaveis
    int num, cont;

    // entrada dos dados pelo user
    printf("Digite a quantidade de loops desejada: ");
    scanf_s("%d", &num);

    //laço
    for (cont = 1; cont <= num; cont++);
    {
        printf("Repetiu %d vez(es)\n", cont);
    }
    
    // fim
    system("pause");
    return 0;
}

// Considere um algoritmo que vai receber 2 numeros inteiros e no final ele vai mostrar a soma, a subtração, a multiplicação e a divisão destes números

#include<stdio.h>
#include<stdlib.h>

int main()
{
   
    int num1, num2, resultSoma, resultSubt, resultMult, resultDiv;

    
    printf("Digite o primeiro numero: ");
    scanf_s("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf_s("%d", &num2);

    
    resultSoma = num1 + num2;
    printf("Resultado da soma: %d\n", resultSoma);

    resultSubt = num1 - num2;
    printf("Resultado da subtracao: %d\n", resultSubt);

    resultMult = num1 * num2;
    printf("Resultado da multiplicacao: %d\n", resultMult);

    resultDiv = num1 / num2;
    printf("Resultado da divisao: %d\n", resultDiv);

   
    system("pause");
    return 0;
}

// Algoritmo que conta de 3 em 3 de 1 até 30

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, cont;

	for (cont = 1; cont <= 30; cont += 3) {
		
		printf("Repetiu %d\n", cont);

	}

		system("pause");
	return 0;
}

// Contagem decrescente de 1 até 30

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, cont;

	for (cont = 30; cont >= 1; cont--) {
		
		printf("Repetiu %d\n", cont);

	}

		system("pause");
	return 0;
}