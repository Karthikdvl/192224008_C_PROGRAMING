#include <stdio.h>
#include<string.h>
int calculateLength(char*);
 
int main() 
{
   char str1[25];
   
   int l;

   
   printf(" Input a string : ");
   fgets(str1, sizeof str1, stdin);
   
   l = calculateLength(str1);
   printf(" The length of the given string %s is : %d ", str1, l-1);
   printf("\n\n");
   return 0;

}
 
int calculateLength(char* ch) 
{
   int ctr = 0;
   while (*ch != '\0') 
   {
      ctr++;
      ch++;
   }
   return ctr;
}


