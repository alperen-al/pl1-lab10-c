#include <stdio.h>
/*Maksimum 5 basamaklı sayının basamaklarındaki rakamları diziye atan ve ekrana basan 
programı yazınız.*/
int main(){
    float a[5];
    int x, b , i ;
    i=0;
    printf("lütfen ekrana bir değer giriniz \n");
    scanf("%d",&b);
    while(i!=5){
       
        a[i]=b%10;
        b=b/10;
        printf("%f\n",a[i]);
        i++;


    }
    return 0 ;

}