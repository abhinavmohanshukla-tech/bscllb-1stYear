
#include <stdio.h>
int main()
{
    int a, b, max;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    max = (a > b) ? a : b;
    printf("The maximum number is: %d\n", max);
    return 0;
}
