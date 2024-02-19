#include<stdio.h>

void number(int num){
	if(num%3==0&&num%5==0){
		printf("Your number is decimal with 3 or 5.");
	}else{
		printf("Your number is not decimal with 3 or 5.");
	}
}

void main(){
	int a;
	
	printf("Enter your number : ");
	scanf("%d",&a);
	
	number(a);
}
