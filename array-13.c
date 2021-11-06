#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int main(){
    int massiv[100], n;

    srand(time(0));
    printf("ixtiyoriy sonni kiriting n: ");
    scanf("%d",&n);

    for (int i=0;i<=n;i++){
        massiv[i]=rand()%50;
    }
    printf("\n");

    for (int i=n-1;i>=1;(i-=2)){
        printf("\n massiv[%d]= %d",i,massiv[i]);
    }
    printf("\n\n");

    return 0;
}