#include<stdio.h>


void cal(){
	
	int a,b;
	printf("Enter the number: ");
	scanf("%d",&a);
	printf("Enter the number: ");
	scanf("%d",&b);
	
	printf("%d + %d = %d\n",a,b, a+b);
  	printf("%d - %d = %d\n",a,b, a-b);
 	printf("%d * %d = %d\n",a,b, a*b);
  	printf("%d / %d = %d\n",a,b, a/b);
	printf("%d %% %d = %d",a,b, a%b);
	
}


void main(){
	
	cal();
	
}
