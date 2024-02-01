#include<stdio.h>
void main(){
    int n;
    printf("\n Enter number of days passed for late submission");
    scanf("%d",&n);
    if(n<=5)
    printf("\n 1 rupee fine");
    else if(n<=10)
    printf("\n 2 rupee fine");
    else if(n<=30)
    printf("\n 5 ruppes fine");
    else
    printf("\n Your membership had been cancelled");
}