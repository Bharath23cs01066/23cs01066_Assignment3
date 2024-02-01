#include<stdio.h>
void main(){
    int a,b,c;
    printf("\n Enter numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("\n largest is %d",a);
    else if(b>c)
    printf("\n Largest is %d",b);
    else
    printf("\n Largest is %d",c);
}