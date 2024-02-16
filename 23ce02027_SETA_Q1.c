#include<stdio.h>
int main()
{
    float a,v,r;
    float pi=3.14;
    printf("Enter the radius r of the sphere:");
    scanf("%f",&r);
    a=(2*pi*r*r);
    v=(pi*r*r*r);
    printf("\nSurface area of sphere=%.2f",a);
    printf("\nVolume of sphere=%.2f",v);
    return 0;
}