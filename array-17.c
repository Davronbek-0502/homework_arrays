#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int main(){
    int massiv[100], n, j=0;

    srand(time(0));
    printf("ixtiyoriy sonni kiriting n: ");
    scanf("%d",&n);

    for (int i=0;i<=n;i++){
        massiv[i]=rand()%50;
    }

    for (j=0;j<n;j+=2){
        printf("\n massiv[%d]= %d",j,massiv[j]); 
        
        printf("\n massiv[%d]= %d",j+1,massiv[j+1]); 
        
        printf("\n massiv[%d]= %d",n-(j+1),massiv[n-(j+1)]);
    
        printf("\n massiv[%d]= %d",n-(j+2),massiv[n-(j+2)]);   
        
    } 
    printf("\n\n");

    return 0;
}