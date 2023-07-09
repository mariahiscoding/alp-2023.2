
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[20];
    int habilidade;
}pessoa;

int ordemalfabetica(const void* a, const void* b);

int descres_habilidade (const void *a, const void *b);

int main () {
    short i, n, t, aluno1 = 0, jogador, habilidade_aluno[n];
    scanf("%hi %hi", &n, &t);
    char nome[n][20];
    pessoa aluno[n];


    for (i = 0; i < n; i++) {
        scanf("%s %hi", nome[i], &habilidade_aluno[i]);
        strcpy(aluno[i].nome, nome[i]);
        aluno[i].habilidade = habilidade_aluno[i];
    }

    qsort(aluno, n, sizeof(pessoa), descres_habilidade);
    for (int time = 0; time < t; time++){
        printf("Time %hi\n", time+1);
        int qtd_equipe  = 0;
        for (int j = aluno1; j < n; j += t){
            qtd_equipe ++;
        }
        char equipe [qtd_equipe][20];
        jogador = 0;
        for (int j = aluno1; j < n; j += t){
            strcpy(equipe[jogador], aluno[j].nome);
            jogador++;
        }
        qsort(equipe, qtd_equipe   , sizeof(equipe[0]), ordemalfabetica);
        for (int k = 0; k < qtd_equipe ; k++){
            printf("%s\n", equipe[k]);
        }
        aluno1++;
        printf("\n");
        
    }
    return 0;
}
int ordemalfabetica(const void* a, const void* b){
    const char* string1 = (const char*)a;
    const char* string2 = (const char*)b;

    return strcmp(string1, string2);
}
int descres_habilidade (const void *a, const void *b) {
    int pri = ((pessoa *)a)->habilidade;
    int seg = ((pessoa *)b)->habilidade; 
    return (seg - pri);
}