#include<stdio.h>
void main(){
    int m,n,k;
    float t,w;
    printf("\n Enter obtained marks");
    scanf("%d",&m);
    printf("\n Enter total number of classes");
    scanf("%d",&k);
    printf("\n Enter number of classes attended");
    scanf("%d",&n);
    w=n/k;
    t=m*w;
    if(0<=m<=100&&n<=k){
        if(t>=90)
        printf("\n Grade=Ex");
        else if(t>=80)
        printf("\n Grade=A");
        else if(t>=70)
        printf("\n Grade=B");
        else if(t>=60)
        printf("\n Grade=C");
        else if(t>=50)
        printf("\n Grade=D");
        else if(t>=40)
        printf("\n Grade=P");
        else
        printf("\n Grade=F");
        
    }
    else
    printf("\n Error");
}