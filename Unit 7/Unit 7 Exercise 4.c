#include <stdio.h>

struct Conjunto {
    int num_elems; // Número de elementos del conjunto
    int elem[100]; // Cada una de los elementos anteriores (máximo 100)
};

void leer (struct Conjunto *x) {
    for (int i=0; i<(x->num_elems); i++) {
        printf("Numero %d: ",i);
        scanf("%d",&x->elem[i]);
    }
}

void fusion (int n1, int v1[n1], int n2, int v2[n2], int v3[n1+n2]) {
    int cont1, cont2, cont3;
    cont1 = cont2 = cont3 = 0;
    while (cont1<n1 && cont2<n2) { // Que se agote uno no depende de su longitud sino del tamanio de los numeros
        if (v1[cont1] < v2[cont2]) {
            v3[cont3] = v1[cont1];
            cont3++;
            cont1++;
        } else if (v1[cont1] == v2[cont2]) {
            v3[cont3] = v1[cont1];
            cont3++;
            cont2++;
            cont1++;
        } else if (v1[cont1] > v2[cont2]) {
            v3[cont3] = v2[cont2];
            cont3++;
            cont2++;
        }
    } 
    // Lo convertimos en caso d que se agote antes el segundo
    if (cont1<n1) {
        while (cont1 <n1) {
            v3[cont3] = v1[cont1];
            cont3++;
            cont1++;
        }
    } else {
        while (cont2 <n2) {
            v3[cont3] = v2[cont2];
            cont3++;
            cont2++;
        } 
    }
    while (cont3 <(n1+n2)) { //relleno con ceros
        v3[cont3] = 0;
        cont3++;
    }
}
void main () {
    struct Conjunto x,y,z;
    printf("Longitud primero: ");
    scanf("%d",&x.num_elems);
    printf("Longitud segundo: ");
    scanf("%d",&y.num_elems);
    leer(&x);
    leer(&y);
    fusion(x.num_elems,x.elem,y.num_elems,y.elem,z.elem);
    for (int i=0; i<(x.num_elems + y.num_elems); i++){
        printf("%d ",z.elem[i]);
    }
}