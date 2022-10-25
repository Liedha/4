#include <stdio.h>
int main() {
    int a,b,c,pertama,kedua,ketiga;

    printf("Masukkan Angka\n");
    scanf("%i", &a);
    printf("Masukkan Angka\n");
    scanf("%i", &b);
    printf("Masukkan Angka\n");
    scanf("%i", &c);

    if(a<b) {
        if(b<c) {

            pertama=a;
            kedua=b;
            ketiga=c;
        }else{

            if(a<c) {
               pertama=a;
               kedua=c;
               ketiga=b;
            }else{
                pertama=c;
                kedua=a;
                ketiga=b;
            }
        }
    }else{
        if(b<c) {
            if(a<b) {
                pertama=b;
                kedua=a;
                ketiga=c;
            }else{
                pertama=b;
                kedua=c;
                ketiga=a;
            }
        }else{
            if(c<a) {
                if(a<b) {
                    pertama=c;
                    kedua=a;
                    ketiga=b;
                }else{
                    pertama=c;
                    kedua=b;
                    ketiga=a;
                }
            }
        }
    }
    printf("\n%i,%i,%i\n",pertama,kedua,ketiga);
}
