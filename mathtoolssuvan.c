#include<stdio.h>
void main()
{
    int a,b,m,add,sub,div;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    m=a*b;
    div=a/b;
    printf("%d/n%d/n%d/n%d/n",add,sub,div,m);
}