// Matriz - definir primeiro linha 2 e colunas 4
//sintxe tipo de dado, nome da matriz, num de linhas e num de colunas
int nota[2][4]

//exemplo 1 - devemos colocar cada linha entre {} e separar por virgula
int numeros[2][4] = {{11,22,35,54}, {05,09,16,08}};
// resultado
/*
11|22|35|54 - linha 1
05|09|16|08 - linha 2
4 colunas
*/

// exemplo 2
// inicio o algoritmo
int main()
{
    // crio a matriz e atribuo os valores
    int tabela[3][2] = {{1,8}{3,9},{6,78955}};

    //crio as variaveis para fazer a contagem
    int linha, coluna;

    // imprimo na tela do usuario
    printf("Imprimindo a matriz tabela: \n\n");

    //faço um for aninhado para percorrer linha e depois coluna
    for(linha= 0; linha < 3 ; linha++);
    {
        for(coluna= 0; coluna < 2 ; coluna++);
    }
    
    // printo todos os dados das linhas e tabelas
    printf("tabela[%d][%d] = %d", linha, coluna, tabela[linha][coluna]);
    
    //pulo linha e coloco uma linha de *
    printf("\n");
    printf("****************************************");

    // imprimi uma posição especifica
    printf("O conteudo da tabela[2][1] e: %d\n\n", tabela[2][1]);

    // finalizo
    system("pause");
    return 0;
}

//CADEIA DE CARACTERES

// terminar com \0 na última posição do array
char nome[8] = {"U","n","i","n","t","e","r","\0"};

// EXEMPLO
// bibliotecas
#include<stdio.h>
#include<conio.h>
#include <locale.h> // para imprimir caracteres especiais na tela do user

// iniciando o algoritmo
int main()
{

// declarando as variaveis e atribuindo valor
char nome1[ ]= "Centro Universitário";
char nome2[ ]= "Internacional";
char nome3[ ]= "UNINTER";
char asteriscos[]= "\n********************************************\n";

// imprimindo a sequencia para usuario
printf("%s",asteriscos);
// setlocale para imprir caracteres especiais na tela do user
printf(" %s %s %s", nome1,nome2,nome3, setlocale(LC_ALL,""));
printf("%s",asteriscos);

// finalizando o programa
system("pause");
return 0;
}
