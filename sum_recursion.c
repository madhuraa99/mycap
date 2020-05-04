#include <stdio.h>  
int sum(int n) 
{ 
    if (n==0) 
       return 0; 
    int rem=n%10;
	return (rem+ sum(n/10)); 
} 
   
int main() 
{ 
    int num;
    printf("Enter the number:");
	scanf("%d",&num); 
    int result=sum(num); 
    printf("Sum of digits is %d", result); 
    return 0;
}
