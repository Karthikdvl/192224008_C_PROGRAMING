#include <stdio.h>
int main(){
	int age;
	printf("enter your age: ");
	scanf("%d",&age);
	if (age>0){
		
		if(age>=18){
		
		printf("you are eligible to vote \n");
	}
		
		else{
		
		printf("you are not eligible to vote\n");
		printf("you have to wait for %d years\n",18-age);
	}
	}
	else {
		printf("invalid input");
	}
	return 0;
}
