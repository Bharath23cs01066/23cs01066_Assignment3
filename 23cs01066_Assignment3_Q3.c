#include<stdio.h>
#include<stdlib.h>
void main(){
    int a,b,c;
    printf("\n Enter sides:");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&c+a>b&&abs(a-b)<c&&abs(b-c)<a&&abs(c-a)<b)
    printf("\n Valid triangle");
    else
    printf("\n Invalid sides");
}