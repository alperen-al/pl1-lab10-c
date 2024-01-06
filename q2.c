#include <stdio.h>
/*Klavyeden -1 girilene kadar girilen sayıları diziye aktaran, ardından her elemanın karesini 
ekrana basan programı yazınız. (Dizi eleman sayısı max 10 olacaktır.)*/
/*int main(){
    int a[10];
    int i ;
    int pow;
    i=0;
    while (i!=10){
        printf("lütfen bir değer giriniz");
        scanf("%d",&a[i]);
        if (a[i]==-1){
            break;
        }
        else {
            printf("sayınız  %d\n",a[i]);
            pow=a[i]*a[i];
            printf("karesi %d\n",pow);
            i++;
        }
    }
    return 0 ;
}*/
int main(){
    int i, a[10];
    float x;
    i=0;
    while (i<10){
        printf("lütfen değerinizi giriniz  : \n");
        scanf("%d",&a[i]);
        if (a[i]==-1){
            break;
        }
        else {
            x=a[i]*a[i];
            printf("sayınızın karesi =  %f",x);
            i++;
        }
    }
    return 0;
}