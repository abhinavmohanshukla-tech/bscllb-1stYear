#include <stdio.h>
int main()
{
    float p, r, t, si;
    printf("Enter the value of principle: ");
    scanf("%f", &p);
    printf("Enter the value of rate: ");
    scanf("%f", &r);
    printf("Enter the time: ");
    scanf("%f", &t)
    si = (p * r * t) / 100;
    printf("SI:%.2f",si);
}
