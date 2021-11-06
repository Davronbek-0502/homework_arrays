#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int main(){
    int massiv[100], n,i=1;

    srand(time(0));
    printf("ixtiyoriy sonni kiriting n: ");
    scanf("%d",&n);

    for (int i=0;i<=n;i++){
        massiv[i]=rand()%100;
        printf("\n massiv[%d]= %d",i,massiv[i]);
    }
    printf("\n\n");
    printf("\n massiv[0]= %d",massiv[0]);   

    for (i<n;n-i;i++){
        printf("\n massiv[%d]= %d",n-i,massiv[n-i]);        
        printf("\n massiv[%d]= %d",i,massiv[i]);
    }  
    printf("\n massiv[%d]= %d",i,massiv[i]);   
    printf("\n\n");

    return 0;
} 