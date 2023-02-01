#include <stdio.h>
#include<math.h>

int main() {
    int p,q,i,r,c=0;
    
    printf("enter values of two numbers: ");
    scanf("%d%d",&p,&q);
    printf("enter R :");
    scanf("%d",&r);
   	
    for(i=p;i<=q;i++)
      {
          if(c==r)
           {
               c++;
               continue;
            }
           else    
             {
             printf("%d\n",i);
             c++;
             }
      }
  
    return 0;
}
