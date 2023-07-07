#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa {
    char nome[20];
    int habilidade;
};

int compararHabilidade (const void *a, const void *b) {
    int pri = ((struct pessoa *)a)->habilidade;
    int seg = ((struct pessoa *)b)->habilidade; 
    return (seg - pri); //Explicação vista no site galirows
}

int main () {
    int i, n, t, h  = 0;
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


  for(int ti = 1; ti < n; ti++){
    printf("Time %d\n", ti);
    for (int j = h; j < n; j = j+t ) {
        printf("%s\n", item[j].nome);
    }
    h++;
    printf("\n\n");
  }

    return 0;
}