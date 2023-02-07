#include <stdio.h>
int addtwonum (int * ,int *);
int main()
{
   int first, second;
   int sum;
   printf("Enter two integers to add\n");
   scanf("%d%d", &first, &second);

 sum = addtwonum(&first,&second);
 printf("Sum of two numbers is : %d\n",sum);
 
   return 0;
}
int addtwonum (int *n1,int *n2){
	int sum;
	sum = *n1 + *n2;
	
	return sum;
}

