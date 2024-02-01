#include<Stdio.h>
void main(){
    int x1,x2,x3,y1,y2,y3;
    printf("\n Enter points");
    scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
    if(((x2-x1)/(y2-y1))==((x3-x1)/(y3-y1))==((x3-x2)/(y3-y2)))
    printf("\n Lies on a straight line");
    else
    printf("\n Dont lie on a straight line");
}