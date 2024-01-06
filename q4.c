#include <stdio.h>
/*10 elemanlı diziyi klavyeden alan ve tersten ekrana yazan programı yazınız. 
(1,5,2,4,5,6,78,12,1,3 => 3,1,12,78,6,5,4,2,5,1)*/
int main (){
    int i , a[10];
    i=0;
    while ( i!=10){
        printf("lütfen 10 adet değer giriniz  \n");
        scanf("%d",&a[i]);
        i++;
    }
    i=9;
    while (i!=-1){
        printf ("değeriniz %d\n",a[i]);
        i--;
    }
    return 0;
}