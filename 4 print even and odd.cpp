#include <stdio.h>
 
int  main(){
	int i,p,q;
	printf("Enter p value :");
	scanf("%d",&p);
	printf("Enter q value :");
	scanf("%d",&q);


 printf("\nEven Number List :\n ");

 i = p;
 while(i <= q)
 {
  printf(" %d",i);
  i = i + 2;
 }

 

 printf("\nOdd Number List :\n ");

i = p + 1;
 while(i <= q)
 {
  printf(" %d",i);
  i = i + 2;
 }

return 0;
}
