#include<stdio.h>
main()
{
	int ch;
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("Food item - Pasta\nPrice - Rs.179");
				    break;
		case 2: printf("Food item - Veggy fries\nPrice - Rs.129");
				    break;
		case 3: printf("Food item - Pizza\nPrice - Rs.239");
				    break;
		case 4: printf("Food item - French fries\nPrice - Rs.99");
				     break;
		case 5: printf("Food item - Grilled cheese sandwich\nPrice - Rs.149");
				    break;
		default: printf("Invalid choice");
				     break;
	}
}
