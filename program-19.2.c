#include<stdio.h>


void number(int num){
	if(num%2 == 0){
		printf("Your number is Evan...");
	}else{
		printf("Your number is Odd... ");
	}
}
void main(){
	int a;
	
	printf("Enter your number : ");
	scanf("%d",&a);
	
	number(a);
}
