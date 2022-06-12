#include <stdio.h>
#include <stdlib.h>
// bu kodumuz da 1 den n e kadar olan sayýlarýn toplamýný yazacaðýz...
int main()
{
    int sayi1,sayi2,toplam;
    printf("HOSGELDINIZ....\n");
    printf("kacla kac arasinda ki sayilarin toplamini ogrenmek istiyorsunuz?\n lutfen iki adet sayi giriniz....\a\n");
    scanf("%d %d",&sayi1,&sayi2);
    int terimSayisi=abs(sayi1-sayi2)+1;
    int buyuk,kucuk;
    if (sayi2>sayi1){

    kucuk=sayi1;
    buyuk=sayi2;
    while (terimSayisi>0){
    printf("%d\n",sayi1);
    toplam=sayi1+toplam;
    sayi1++;
    terimSayisi--;
    }
}
else if (sayi1>=sayi2){
    kucuk=sayi2;
    buyuk=sayi1;
    while (terimSayisi>0){
    printf("%d\n",sayi2);
    toplam=sayi2+toplam;
    sayi2++;
    terimSayisi--;
    }
}
printf("ISLEMINIZ BASARILI BIR BICIMDE GERCEKLESTIRILMISTIR\n sonucunuz:::%d",toplam );










return 0;

}





