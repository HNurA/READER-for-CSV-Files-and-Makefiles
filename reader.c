/**main.c dosyasindan gelen kullanici secimlerine gore dosyayi okumak icin kullanilan fonksiyonlar
 * last update: 02.03.2024
 * author: Hilal Nur Albayrak 22120205056
 */

/*Fonksiyon tasarimlarinda chat.gpt'den yardim alinmistir.*/

#include <stdio.h>
#include <string.h>

/**reads the line given with lineno 
 * into the given buffer and returns its length
 * tr: fname isimli streamden lineno ile verilen satiri buffera okuyarak uzunlugunu return eder
 *
 */

/**main'den gelen dosyayi ve kullanicinin istedigi satir sayisini alarak aranan satiri bulup main'e  
 *buldugu satiri geri gonderen fonksiyon
 */
int read_xline(FILE *stream, int lineno, char buffer[]) {
    char satir[10000];
    int i;

    for (i = 1; i <= lineno; i++) {
        if (fgets(satir, sizeof(satir), stream) == NULL) {
            printf("Belirtilen satir numarasi dosyada bulunamadi.");
            return -1;
        }
    }

    strcpy(buffer, satir);
    int uzunluk = strlen(buffer);

    return uzunluk;
}

/**finds the column with colno index, and copies that into the buffer.
 * returns its length.
 * tr: verilen satir stringinde ","lerle ayrilmis sutunlari bularak 
 * colno indeksli sutunu buffera kopyalar ve uzunlugunu return eder.
 */

/**main'den gelen satiri ve kullanicinin istedigi sutun sayisini alarak aranan indeksi bulup 
 *main'e geri gonderen fonksiyon
 */
int read_xcol(const char *row, int colno, char buffer[]) {
    int i = 0;
    int j = 0;
    int count = 0;
    int inside_quotes = 0;
    int uzunluk;

    while (row[i] != '\0') {
        if (row[i] == '\"') {
            inside_quotes = !inside_quotes;
        }
        if (row[i] == ',' && !inside_quotes) {
            count++;
            if (count == colno) {
                buffer[j] = '\0';
		uzunluk = strlen(buffer);
		return uzunluk;
            }
        } else if (count == colno - 1) {
            if (row[i] != '\"') { 
                buffer[j++] = row[i];
            }
        }
        i++;
    }

    buffer[j] = '\0';
    uzunluk = strlen(buffer);
    return uzunluk;
}
