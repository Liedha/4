#include <stdio.h>
int main() {
    int bil;

    printf("Masukkan bilangan\n");
    scanf("%i", &bil);

    if(bil>0){
        printf("\npositif\n",bil);
    }

    if(bil<0) {
        printf("\nnegatif\n",bil);
    }

    if(bil==0) {
        printf("\nnol\n",bil);
    }
}
