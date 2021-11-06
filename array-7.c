#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>


int main(){
    int son[10000], n;
    printf("ixtiyoriy sonni kiriting n : ");
    scanf("%d",&n);

    int j=n;
    for (int i=0;i<=n;i++){
        printf("\n son[%d]= %d",i,son[i]=j);
        j--;
    }
    
    return 0;
}