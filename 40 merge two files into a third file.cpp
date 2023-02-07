#include<stdio.h>
#include<conio.h>

int main()
{

   FILE *fp1 = fopen("note1.txt", "r");
   FILE *fp2 = fopen("note2.txt", "r");
  
   FILE *fp3 = fopen("note3.txt", "w");
   char c;
  
   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
         puts("Could not open files");
         
   }
  

   while ((c = fgetc(fp1)) != EOF)
      fputc(c, fp3);
  
   while ((c = fgetc(fp2)) != EOF)
      fputc(c, fp3);
  
   printf("Merged note1.txt and note2.txt into note3.txt");
  
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   return 0;
}
