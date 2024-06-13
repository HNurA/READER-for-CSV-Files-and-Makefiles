/**Kullanicidan alinan satir ve sutun numarasina gore belgedeki veriyi alma programı
 * last update: 02.03.2024
 * author: Hilal Nur Albayrak 22120205056
 */

#include <stdio.h>

int read_xline(FILE *stream, int lineno, char buffer[]);
int read_xcol(const char *row, int colno, char buffer[]);

const char *fname = "Food_contents_2019.csv";

/** Kullaniciden satir ve sutun degerleri icin sayi alip, dosyayi acarak aldigi
 *degerleri ve actigi dosyayi gerekli fonksiyonlara gonderen main fonksiyonu
 */
int main() {
    FILE *dosya;
    char satir[10000];
    int line_no, col_no;
    char aranan[300];

    dosya = fopen(fname, "r");
    if (dosya == NULL) {
        printf("Dosya açma hatasi!");
        return 1;
    }

    printf("Programa hos geldiniz!\n");
    scanf("%d %d", &line_no, &col_no);

    if ((line_no <= 950 && line_no > 0) && (col_no <= 111 && col_no >0)){
         if (read_xline(dosya, line_no, satir) == -1) {
            printf("Belirtilen satir numarasi dosyada bulunamadi veya bir hata olustu.");
            return 1;
        }
        read_xcol(satir, col_no, aranan);
        printf("%s\n", aranan);

    } else {
        printf("Gecerli satir/sutun degeri girilmedi!");
    }

    fclose(dosya);

    return 0;
}
