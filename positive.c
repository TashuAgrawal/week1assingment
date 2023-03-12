#include <stdio.h>
int main()
{
    int i;

    printf("enter a number :");
    scanf("%d", &i);
    if (i<0)
    {
        printf("negative");
    }
     else if  (i == 0)
     {
        printf("zero");
    }
    else 
    {
        printf("positive");
    }
    return 0;
}