#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 50


int separa(int v[], int i, int f){//num aleatorio
    int e, d, pivo, aux;
    e = i-1;
    d = i;

    pivo = v[f];

        while (d<f){
        if(v[d]<= pivo){
            aux<v[d];
            v[d]=v[e+1];
            v[e+1]=aux;
            e++;
    }
    d++;
}
aux=v[d];
v[d]=v[e+1];
v[e+1]=aux;
e++;
return e;
}

void QuickSort (int v[], int i, int f){ //i esqu elemento maior q pivo, j direira elemento menor q pivo
    int m;
    if (i<f){
        m=separa(v, i, f);
        QuickSort(v, i, m-1);
        QuickSort(v, m+1, f);


    }
}
int main() {
int v[MAX], aux[MAX], n, c, i, f, m;
n=50;

printf("serao selecionados 50 valores aleatorios \n\n");
for (c=0; c<f; c++)
v[c] = rand()%51;



printf("ordenacao pelo metodo rapido/  quicksort:");
    QuickSort (v, i, n-1);

for (c = 0; c < f; c++)
printf("%d \n", v[c]);
printf("\n");

return 0;
}

