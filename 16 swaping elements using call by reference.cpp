#include <stdio.h>
void swapNumbers(int *x,int *y,int *z);
int main()
{
    int p1,p2,p3;
	printf("\n\n Pointer : Swap elements using call by reference :\n"); 
	
    printf(" Input the value of 1st element : ");
    scanf("%d",&p1);
	printf(" Input the value of 2nd element : ");
    scanf("%d",&p2);
	printf(" Input the value of 3rd element : ");
    scanf("%d",&p3);
	
	
    printf("\n The value before swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n",p1,p2,p3);
    
    swapNumbers(&p1,&p2,&p3);
    
    printf("\n The value after swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n\n",p1,p2,p3);
    return 0;
}
void swapNumbers(int *x,int *y,int *z)
{
    int tmp;
    tmp=*y;
    *y=*x;
    *x=*z;
    *z=tmp;
}

