#include <stdio.h>

int main(){
        char pilihan;
        int bilangan;
        printf("pilih bilangan\n a : Desimal - Biner\n b : Biner-Desimal\n c : Desimal-Octal\n d : Octal - Desimal\n   = ");
        scanf(" %c", &pilihan);
            switch(pilihan){
                case 'a':
                    printf("Masukkan bilangan desimal: ");
                    scanf("%d", &bilangan);
                while(bilangan > 0){
                    printf("%d", bilangan % 2);
                        bilangan /= 2;
            }
                break;
                case 'b':
                    printf("masukkan bilangan biner = ");
                    scanf("%d", &bilangan);
                        int desimal = 0, pangkat = 0;
                while (bilangan > 0) {
                        desimal += (bilangan % 10) * (1 << pangkat);
                        bilangan /= 10;
                        pangkat++;
            }
                    printf("%d", desimal);
                break;
                case 'c':
                    printf("masukkan bilangan desimal = ");
                    scanf("%d", &bilangan);
                while (bilangan > 0) {
                    printf("%d", bilangan % 8);
                        bilangan /= 8;
            }
                break;
                case 'd':
                    printf("masukkan bilangan octal = ");
                    scanf("%d", &bilangan);
                        int decimal = 0, power = 0;
                 while (bilangan > 0) {
                        decimal += (bilangan % 10) * (1 << (3 * power));
                        bilangan /= 10;
                        power++;
            }
                    printf("%d", decimal);
                break;
                default:
                    printf("Pilihan tidak valid.\n");
                break;
            }

        return 0;
         }
        