#include <stdio.h>
int main()
{
    float length, width, area, perimeter;
    printf("Enter the length of rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of rectangle: ");
    scanf("%f", &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Area of rectangle = %.2f\n", area);
    printf("Perimeter of rectangle = %.2f\n", perimeter);
    return 0;
}
