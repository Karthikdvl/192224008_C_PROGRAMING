#include <stdio.h>
#include <math.h>
int main(){
	int add (int,int);
	int sub (int,int);
	int mult (int,int);
	int div (int,int);
	int powr (int,int);
	int a,b,ch;
	printf("Enter values of a, b:");
	scanf("%d %d",&a,&b);
	printf("enter choice + - * / ^");
	scanf("%d",&ch);
	switch (ch){
		case 1:
			printf("add(a,b)=%d",add(a,b));
			break;
		case 2:
			printf("sub(a,b)=%d",sub(a,b));
			break;
		case 3:
			printf("mult(a,b)=%d",mult(a,b));
			break;
		case 4:
			printf("div(a,b)=%d",div(a,b));
			break;
		case 5:
			printf("power(a,b)=%d",powr(a,b));
			break;	

	} 
	return 0;
}
int add (int a,int b){
	return (a+b);
}
int sub (int a,int b){
	return (a-b);
}
int mult (int a,int b){
	return (a*b);
}
int div (int a,int b){
	return (a/b);
}
int powr (int a,int b){
	return (pow(a,b));
}



