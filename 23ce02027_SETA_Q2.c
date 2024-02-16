#include<stdio.h>
int main(){
    int z,num,temp,i,j,count;
    int arr[10],fact[10],sum;
    printf("Enter the number:");
    scanf("%d",&num);
    z=num;
    while(z>0)
  {
    z=z/10;
    count++;
  }
    temp=num;
    for(i=0;i<count;i++){
        arr[i]=temp%10;
        temp=temp/10;
    
   for(j=1;j<arr[i];j++)
   {
    fact[i]=j*arr[i];
    continue;};
   
    sum=sum+fact[i];
    }
    return 0;

}
