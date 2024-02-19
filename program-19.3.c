#include <stdio.h>


void fibonacci(int ans){
	
	int n1 = 0, n2 = 1, num3 = 0, i;
	
	for(i=1; i<=ans; i++)
    {
        printf("%d ", num3);
        n1 = n2;    
        n2 = num3;     
        num3 = n1 + n2; 
    }
}


void main()
{
    
	int a;
    printf("Enter any number :- ");
    scanf("%d", &a);
    
    fibonacci(a);

    
}
