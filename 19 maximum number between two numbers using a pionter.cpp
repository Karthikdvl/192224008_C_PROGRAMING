#include<stdio.h>
int main(){
	int a,b;
	int *p1,*p2;
	int big;
	printf("Enter Two Numbers:");
	scanf("%d %d",&a,&b);
	p1=&a;
	p2=&b;
	if (*p1>*p2)
	big=*p1;
	else
	big=*p2;
	printf("Big is %d", big);
	return 0;
}
