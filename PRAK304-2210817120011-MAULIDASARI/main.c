#include <stdio.h>
int main(){
    int a;
    printf("Masukkan angka = ");
    scanf("%d", &a);
    if(a<10 && a>0){
        printf("\nSatuan\n\n");
    }
    if(a>10 && a<20){
        printf("\nBelasan\n\n");
    }
    if(a>=20 && a<100){
        printf("\nPuluhan\n\n");
    }
    if(a==0){
        printf("\nNol\n\n");
    }
    if(a>=100){
        printf("\nAnda Menginput Melebihi Limit Bilangan\n\n");
    }
     main();
}
