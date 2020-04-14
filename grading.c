#include<stdio.h>
main()
{
    float m;
    printf("Enter the marks: ");
    scanf("%f",&m);
    if(m>84)
        printf("Grade A");
    else if(m>69 && m<85)
        printf("Grade B");
    else if(m>54 && m<70)
        printf("Grade C");
    else if(m>39 && m<55)
        printf("Grade D");
    else
        printf("Grade F");
}
