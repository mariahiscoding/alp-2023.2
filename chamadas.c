/*Kemily Eduardo
Maria Paula Ferreira Maia
Modelo de solução: 
Foi utilizado durante a contrução desse programa a função 'qsort', disponível na biblioteca 'stdlib.h', para fazer a ordenação dos nomes. Buscando melhor entendimento do funcionamento da
função buscamos no site "javapoint" e "cplusplus"
Primeiro estabelecemos os parametros da função qsort
Após incluimos a função main
Inicializaremos as variáveis n(numero de alunos), k(posição do aluno escolhido na chamada);
Lemos os valores de n e k e inicializamos uma array bidimensional de caracteres com 'n' linhas e tamanho 21;
após utilizaremos um laço de repetição para podermos ler todas as 'n' linhas dessa array, referentes ao nome de cada aluno;
chamamos a função qsort que ordenará essa matriz;
e por fim imprimimos o nome que ocupa a posição 'k-1' da array(k-1 pois a primeira posição de um array é igual a zero, ou seja ela, sua última posição é n-1).*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ordenar(const void* a, const void* b){
    char* string1 = (char*)a;
    char* string2 = (char*)b;

    return strcmp(string1, string2);
}

int main(){
    int n, k;

    scanf("%d %d", &n, &k);
    char aluno [n][21];

    for (int i = 0; i < n; i++)
        scanf("%s", aluno[i]);

    qsort(aluno, n, sizeof(aluno[0]), ordenar);

    printf("%s\n", aluno[k - 1]);

    return 0;
}
