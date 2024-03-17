Tugas Pemrograma 1 : program komputer yang dapat melakukan konversi bilangan

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
Program ini berfungsi untuk mengkonversi bilangan antara sistem bilangan Desimal, Biner, dan Octal. Pengguna diharapkan untuk memilih jenis konversi yang ingin dilakukan dengan memasukkan huruf a, b, c, atau d.

a.desimal - biner
b.biner - desimal
c.desimal - octal
d.octal - desimal

jika user memilih angka a, maka akan masuk ke perhitungan desimal - biner dengan kode program

            case 'a':
                    printf("Masukkan bilangan desimal: ");
                    scanf("%d", &bilangan);
                while(bilangan > 0){
                    printf("%d", bilangan % 2);
                        bilangan /= 2;
            }
                break;

Desimal ke Biner: Pengguna diminta untuk memasukkan bilangan desimal. Program akan mengkonversi bilangan tersebut ke biner dan menampilkannya.
setelah memasukkan angka desimal, angka tersebut di masukkan ke dalam loop while. Angka atau bilangan yang sudah masuk ke while, angka tersebut akan dilihat apakah lebih dari 0, Jika lebih dari 0 maka kode tersebut akan dijalankan lagi. selanjutnya angka tersebut di modulo kan 2 dan mendapatkan hasil, setelah itu angka pertama di masukkan akan di bagi 2 lalu akan masuk ke while kembali. Kode tersebut akan berulang hingga angka yang kita masukkan habis.

jika user memilih angka b, maka akan masuk ke perhitungan biner - desimal dengan kode program

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
Biner ke Desimal: Pengguna diminta untuk memasukkan bilangan biner. Program akan mengkonversi bilangan tersebut ke desimal dan menampilkannya.
setelah memasukkan angka biner, angka biner akan masuk ke loop while dan dilihat apakah angka tersebut lebih dari 0. Apabila angka tersebut lebih dari 0 maka kode akan di lanjutkan. Mula-mula kode akan mencari desimal dengan angka di modulo kan 10 lalu di kali dengan hasil dari 1 << pangkat yang di mana maksudnya adalah bergeser 1 bit. Angka diawal akan di di bagi 10, dan proses ini akan berulang yang dimana pangkat akan bertambah ketika proses diulang. Jika angka sudah habis maka semua angka desimal yang di dapat akan di tambahkan dan mendapat hasilnya.

jika user memilih angka c, maka akan masuk ke perhitungan desimal - octal dengan kode program

            case 'c':
                    printf("masukkan bilangan desimal = ");
                    scanf("%d", &bilangan);
                while (bilangan > 0) {
                    printf("%d", bilangan % 8);
                        bilangan /= 8;
            }
                break;
Desimal ke Octal: Pengguna diminta untuk memasukkan bilangan desimal. Program akan mengkonversi bilangan tersebut ke octal dan menampilkannya.
Setelah memasukkan angka desimal,angka tersebut akan masuk kedalam loop while dan dilihat apakah kode tersebut lebih dari 0. Jika angka lebih dari 0 maka kode akan dijalankan. selanjutnya angka tersebut di modulo kan 8 dan mendapatkan hasil, setelah itu angka pertama akan di bagi 8 lalu akan masuk ke while kembali. Kode tersebut akan berulang hingga angka yang kita masukkan habis.

Jika user memilih angka d, maka akan masuk ke perhitungan octal - desimal yaitu case 3 dengan kode program

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

Octal ke Desimal: Pengguna diminta untuk memasukkan bilangan octal. Program akan mengkonversi bilangan tersebut ke desimal dan menampilkannya.
user diminta untuk memasukkan angka octal yang terdiri dari 0, 1, 2, 3, 4, 5, 6, dan 7. setelah memasukkan angka octal,angka tersebut akan masuk kedalam loop while yang dimana bilangan apakah lebih dari 0. lalu kode akan mencari angka desimal yang dimana angka tersebut akan di modulokan 10 lalu di kali dengan kita melakukan operasi bit shift ke kiri pada bilangan biner 1 sebanyak 3 kali power. Ini berarti kita menggeser bit 1 ke kiri sebanyak 3 kali power. Hasilnya adalah 1 yang digeser ke kiri sebanyak 3 kali power posisi, yang pada dasarnya merupakan representasi dari 2 pangkat tiga (2^3), yang sesuai dengan perhitungan konversi oktal ke desimal. setelah itu angka awal akan di bagikan 10 lalu akan melakukan proses berulang hingga angka habis. Setelah angka habis yang telah dirubah ke decimal maka semua decimal akan di tambahakan dan mendapatkan hasilnya.

Tugas Pemrograman 2 : program komputer yang dapat mengecek apakah tahun yang diinput oleh 
user berupa tahun kabisat atau bukan.

    #include <stdio.h>
      int main() {
      int tahun;

    printf("Masukkan tahun = ");
    scanf("%d", &tahun);

    while (getchar() != '\n');
    while (tahun > 9999 || tahun < 1000) {
      printf("Masukkan kembali tahun = ");
      scanf("%d", &tahun);
    while (getchar() != '\n') {}
  }
    if (tahun % 4 == 0 && (tahun % 100 != 0 || tahun % 400 == 0)) {
      printf("ini tahun kabisat\n");
  } else {
      printf("ini Bukanlah tahun kabisat\n");
  }
    return 0;
  }

Program ini berfungsi untuk mengecek apakah tahun yang diinputkan oleh pengguna merupakan tahun kabisat atau bukan dengan memperhatikan syarat yaitu :

a. Jika inputan user hanya terdiri dari 3 angka, maka program akan meminta user untuk menginput kembali tahunnya.

b. Jika inputan user lebih dari 4 angka, maka program juga akan meminta user untuk menginput kembali tahunnya.

c. Jika inputan user bukan bilangan, maka program akan meminta user untuk menginput kembali tahunnya. (Manfaatkan standard-library function)

d. Jadi, hanya 4 angka saja yang boleh menjadi inputan.

  printf("masukkan tahun = ");
  scanf("%d", &tahun);
  
  while(getchar() != '\n');
  while(tahun > 9999 || tahun  < 1000){
      printf("masukkan ulang tahun = ");
      scanf("%d", &tahun);
      while (getchar() != '\n') {} 
  }
ketika user measukkan tahun kurang dari 4 angka maka akan masuk ke kondisi while yang di mana while(tahun > 9999 || tahun < 1000). Dalam artian, keika angka kurang dari 1000 maka akan menyuruh user untuk memasukkan kembali tahun.

ketika user measukkan tahun lebih dari 4 angka maka akan masuk ke kondisi while yang di mana while(tahun > 9999 || tahun < 1000). Dalam artian, keika angka lebih dari 9999 maka akan menyuruh user untuk memasukkan kembali tahun.

ketika user memasukkan huruf dan tidak terdapat angka maka program menggunakan perulangan while(getchar() != '\n'); untuk membersihkan buffer input, sehingga menghapus karakter tambahan (termasuk karakter baru \n) yang mungkin tersisa di dalam buffer setelah proses pembacaan input tahun.

jika user memasukkan 4 angka, maka akan masuk ke kondisi untuk memastikan apakah 4 angka tersebut termasuk tahun kabisat.

     if(tahun %4 == 0 && tahun %100 !=0 || tahun %400 == 0){
            printf("ini tahun kabisat\n");
    }else{
            printf("bukan tahun kabisat\n");
    }
jika angka tersebut habis di bagi 4 maka itu adalah tahun kabisat. (tahun %4 == 0)

jika angka tersebut tidak habis di bagi 100 maka angka tersebut bukan tahun kabisat (tahun %100 != 0)

jika angka tersebut habis di bagi 400 maka angka tersebut adalah tahun kabisat. (tahun %400 == 0).
