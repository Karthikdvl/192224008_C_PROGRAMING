#include<stdio.h>

int main()
{
 float a[100], sum=0, avg;
 int i, n;
 
 printf("Plesae Enter Size of An Array : ");
 scanf("%d", &n);
 

 printf("Enter array elements or numbers:\n");
 for(i=0; i< n; i++)
 {
  printf("Enter element a[%d] = ", i);
  scanf("%f", &a[i]);
 }
 

 for(i=0; i< n; i++)
 {
  sum = sum + a[i];
 }
 

 avg = sum/n;
 

 printf("Sum is %f\n", sum);
 printf("Average is %f", avg);
 
 return 0;
}
