#include<stdio.h> 
#include<stdlib.h> 
#define INT_SIZE sizeof(int) * 2 /* Total number of bits in integer */
int main()
{ 
int a[10],n,i,zeros=0,ones=0,num,found=0,x; 
printf("Enter the number to convert: "); 
scanf("%d",&n); 
for(i=0;n>0;i++) 
{ 
a[i]=n%2; 
n=n/2; 
} 
printf("\nBinary of Given Number is="); 
for(i=i-1;i>=0;i--) 
{ 
printf("%d",a[i]); 
} 
printf("\nEnter the number for parity check: ");
scanf("%d", &num);
for(i=0; i<INT_SIZE; i++)
{
/* If LSB is set then increment ones otherwise zeros */
if(num&1)
ones++;
else
zeros++;
 /* Right shift bits of num to one position */
num >>= 1;
}
printf("Total zero bit is %d\n",zeros);
printf("Total one bit is %d", ones);
if(ones%2==0)
{
printf("\nEven Parity\n");
found=0;
}
else
{
printf("\nOdd Parity\n");
found=1;
}
printf("Enter the value of x: ");
scanf("%d",&x);
if(found==0&&x==0)
printf("No change..It remains even\n");
else if(found==0&&x==1)
printf("It changes to odd\n");
else if(found==1&&x==0)
printf("No change..It remains odd\n"); 
else 
printf("It changes to even\n"); 
return 0;
}