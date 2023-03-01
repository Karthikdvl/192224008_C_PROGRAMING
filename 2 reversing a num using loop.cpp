// 2 reversing a number using while loop
#include <stdio.h>

int main(){
	int num,rev,remainder = 0;
	printf("Enter an integer: ");
	scanf("%d",&num);
	if (num ==0 ){
		printf("Invalid input");
	}
	else{
	
	while(num!=0){
		remainder = num %10 ;
		rev = rev*10 + remainder;
		num = num/10;
	}
	printf("reverse of given number is\n %d",rev);
}
	return 0;
}
