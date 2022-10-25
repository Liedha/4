#include <stdlib.h>
int main(){
    int bil;

    printf("Masukkan Angka:");
    scanf ("%d", &bil);

    if (bil>=80){
        printf("Nilai A\n\n");
    }
     else if (bil>=70 && bil<=79){
        printf("Nilai B\n\n");
     }
     else if (bil>=60 && bil<=69){
        printf("Nilai C\n\n");
     }
      else if (bil>=50 && bil<=59){
        printf("Nilai D\n\n");
      }
      else{
            printf("Nilai E\n\n");
        }
     main();
}
