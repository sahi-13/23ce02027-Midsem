#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e;
    float x1,x2;
    printf("Enter the values of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    e=sqrt(d);
    if(d>0){
        x1=((-b)+e)/(2*a);
        x2=((-b)-e)/(2*a);
        printf("Roots of the equation are %.2f and %.2f",x1,x2);

    }
    else if(d==0)
    {
        x1=(-b)/(2*a);
        printf("Equation has equal roots %.2f",x1);
    }
    else
    { 
    printf("Equation has imaginary roots");
    }
    return 0;
}