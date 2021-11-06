#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>


int main(){
    int array[10000], n;

    srand(time(0));
    printf("ixtiyoriy sonni kiriting  n: ");
    scanf("%d",&n);

    for (int i=0;i<=n;i++){
        array[i]=rand()%50;
        printf("\n array[%d]= %d",i,array[i]);
    }
    printf("\n\n");

    printf("toqlari:\n");
    for (int i=1;i<=n;i+=2){
        printf("\n array[%d]= %d",i,array[i]);
        
    }
    printf("\n\n");

    printf("juftlari:\n");
    for (int j=n;j>=0;j-=2){
        printf("\n array[%d]= %d",j,array[j]);
        
    }
    printf("\n\n");



    return 0;
}