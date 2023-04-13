#include <stdio.h>
int main()
{
    int a=10;
    int *p;
    int pp;
    int a[3];
    int *x[3];
    int i;
    p=&a;
    pp=p+1;
    printf("%d",*p);
    printf("\n");
    printf("%d",p);
    printf("\n");
    
    printf("\n");
printf("%d",pp);
printf("enter the number");
for(i=0;i<3;i++)
{
    scanf("%d",&a[i]);
    

}
printf("the values are");
for(i=0;i<3;i++)
{
    printf("%d",*x[i]);

}
printf("the addresses are ");
for(i=0;i<3;i++)
{
    printf("%d",x[i]);
}
   
    return(0);
}