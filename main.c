#include <stdio.h>
#include <stdlib.h>

int main(){

    int niz1[23];
    int br;
    int niz[10] = { 3, 6, 1, 9, 4, 12, 5, 9, 23, 10};

    for(int i = 0; i<=23; i++){
        niz1[i] = 0;
    }

    for(int i = 0; i<10; i++){
        br = niz[i];
        niz1[br] += 1;
    }

    for(int i=0; i<=23; i++){
        if (niz1[i] >= 1){
            printf(" %d ", i);
            niz1[i]--;
            i--;
        }
    }
    return 0;
}
