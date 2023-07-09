
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct indigena {
    int tora_inicial, sentido;
};



int main () {
    int n, e, v, d, batidas_tambor = 0;

    scanf("%d %d", &n, &e);
    struct indigena dancando[e];    
    for (int i = 0; i < e; i++){
        scanf("%d %d", &v, &d);
        dancando[i].tora_inicial = v;
        dancando[i].sentido = d;
    }
    for (int j = 0; j < e; j++){  
        do{
            dancando[j].tora_inicial += dancando[j].sentido;
            batidas_tambor++;
        }while(dancando->tora_inicial != dancando->tora_inicial);
    
    }
    
    return 0;
}