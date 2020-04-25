#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer number: \n");

    scanf("%d",&number);

    // True if number is perfectly divisible by 2
    if(number%2==0)
    {
        printf("Given number is Even\n");
    }
    else if(number%2!=0)
    {
        printf("Given number is odd\n");
    }

    //When unknown exception Occurred
    else
    {
        printf("ERROR \n");
    }

    return 0;
}
