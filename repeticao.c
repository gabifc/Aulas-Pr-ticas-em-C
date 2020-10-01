// while: testa primeiro e executa se a condição for verdadeira
// sintaxe
while (/* condition */)
{
    /* comandos */
}

// Algoritmo que imprimi o número de vezes que foi executado o loop 
...
int main() {

    int cont = 0; // declarando e inicializando a variável de controle

    while (cont < 10) // testando a condição
    {
        printf("Total de loops é: %d", cont); // instruções do laço

        cont++; // atualizando a variavel de controle
    }
}

// do while: executa primeiro e verifica depois. Tenho garantido pelo menos 1x a execução.
// sintaxe
do
{
    /* comandos */
} while (/* condition */);

// Algoritimo que recebe 2 números inteiros e compara se o primeiro número é diferente do segundo e imprimir o resultado dessa comparação.
...
int a = 10;
do
{
    printf("O valor de a: %d\n", a);

} while (a <= 40);
...

// FOR - reune no cabeçalho todas as instruções. O laço irá repetir se a condição for verdadeira.
// sintaxe
// for(inicialização; teste; interação)
for (size_t i = 0; i < count; i++)
{
    /* instruções */
}

// Algoritmo que faz a contagem descrescente de 1 até 330 e imprimi na tela o resultado.
...
int cont;
for (cont=30; cont >= 1; cont--)
{
    printf("%d\n", cont);
}
system("pause");
return 0;
}



