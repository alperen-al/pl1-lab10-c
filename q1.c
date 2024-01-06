#include <stdio.h>
//8 elemanlı float diziye klavyeden değer girin. Girilen değerlerin ortalamasını hesaplayıp ekrana yazdırın
int main (){
    float a[8];
    int i ;
    float sum=0;
    i=0;
    while (i!=8){
        printf("lütfen değeri ekrana giriniz");
        scanf("%f",&a[i]);
        sum=sum+a[i];
        i++;

    }
    printf("normal değer  %f\n",sum);
    sum=sum/8;
    printf("ortalama %f",sum);
    return 0;


}