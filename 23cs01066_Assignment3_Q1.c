#include<stdio.h>
void main(){
    int n;
    printf("\n Enter number:");
    scanf("%d",&n);
    if(n>0)
    printf("\n Positive integer");
    else
    if(n<0)
    printf("\n Negative integer");
    else
    printf("\n Zero");
}