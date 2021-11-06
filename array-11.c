#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main (){

    int K=2, massiv[] = {2,3,4,5,6,7,8,9,7,7,8,6,7,};

    for (int i=K;i<13;i+=K){
        printf("massiv[%d] = ",i);
        printf("%d\n",massiv[i]);
    }


    return 0;
}