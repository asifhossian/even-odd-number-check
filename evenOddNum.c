/*This C code check whether
the given number is EVEN or ODD*/

#include <stdio.h>


int main()
{
    int num;

    printf("Enter a Number :\n");

    scanf("%d",&num);

    //This logic check given input is even number
    if(num%2==0)
    {
        printf("Given number is Even\n");
    }
    //This logic check given input is odd number
    else if(num%2!=0)
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
