#include<stdio.h>
#include<stdlib.h>
int main()
{

     int i, N ,M;
    printf("veuillez entrer le nombre de N ");
    scanf("%d",&N);
    for(i=0; i<=10;i++){
    M = N * i ;
    printf("%d * %d =%d \n",N, i,M);
    }
       return 0;
}