#include <stdio.h>
#include <string.h>
void ara(char metin1[],char metin2[]){
    int indis[51];
    int i,j,sayac=0;
    for (i=0; i<strlen(metin1)-strlen(metin2)+1; i++) {
        for (j=0; j<strlen(metin2); j++) {
            if(metin1[i+j]!=metin2[j])
                break;
        }
        if(j==strlen(metin2))  // aradığın metni bulma koşulu
            indis[sayac++]=i;
    }
    indis[sayac]=-1;  //bunu görünce aramanın sonlandığını anlıyoruz.
    printf("Bulunan indisler--->    ");
    sayac=0;
    while(indis[sayac]!=-1){
        printf(" %d ", indis[sayac]);
        sayac++;
    }
}
int main(){
    char metin1[51],metin2[51]; //kullanıcı için verileri kaydetmek için diziler oluşturduk.
    printf("Lütfen ilk metni giriniz...    ");
    gets(metin1);
    printf("Lütfen ikinci metni giriniz...    ");
    gets(metin2);
    ara(metin1,metin2);  // fonksiyonu çağırdık.
}
