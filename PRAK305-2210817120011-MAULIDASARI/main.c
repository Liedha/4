#include <stdio.h>
int main(){
    int sec,hari,jam,menit,detik;

    printf("Masukkan detik\n");
    scanf("%d", &sec);

    hari = sec % (86400*30) / 86400;
    jam = (sec % 86400) / 3600;
    menit = sec % 3600 / 60;
    detik = sec % 60;


    printf("%d hari %d : %d : %d",hari,jam,menit,detik);

    return 0;
}
