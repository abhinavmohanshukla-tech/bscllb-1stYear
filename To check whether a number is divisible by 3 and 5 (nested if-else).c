#include <stdio.h>
int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n % 3 == 0) 
{
        if(n % 5 == 0)
            printf("Divisible by both 3 and 5");
        else
            printf("Divisible by 3 only");
}
    else 
{
        if(n % 5 == 0)
            printf("Divisible by 5 only");
        else
            printf("Not divisible by 3 or 5");
}
    return 0;
}
