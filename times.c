
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa {
    char nome[20];
    int habilidade;
};

int ordenarNome(const void* a, const void* b){
    char* string1 = (char*)a;
    char* string2 = (char*)b;

    return strcmp(string1, string2);
}

int compararHabilidade (const void *a, const void *b) {
    int pri = ((struct pessoa *)a)->habilidade;
    int seg = ((struct pessoa *)b)->habilidade; 
    return (seg - pri); //Explicação vista no site galirows
}

int main () {
    int i, n, t, pessoa1 = 0;
    scanf("%d %d", &n, &t);
    int n_habilidade[n];
    char nomes[n][20];
    struct pessoa item[n];


    for (i = 0; i < n; i++) {
        scanf("%s %d", nomes[i], &n_habilidade[i]);
        strcpy(item[i].nome, nomes[i]);
        item[i].habilidade = n_habilidade[i];
    }

    qsort(item, n, sizeof(struct pessoa), compararHabilidade);
    for (int time = 0; time < t; time++){
        printf("Time %d\n", time+1);
        int m = 0;
        for (int j = pessoa1; j < n; j += t){
            m++;
        }
        char equipe [m][20];
        int posi = 0;
        for (int j = pessoa1; j < n; j += t){
            strcpy(equipe[posi], item[j].nome);
            posi++;
        }
        qsort(equipe, m, sizeof(equipe[0]), ordenarNome);
        for (int k = 0; k < m; k++){
            printf("%s\n", equipe[k]);
        }
        pessoa1++;
        printf("\n");
        
    }
    return 0;
}