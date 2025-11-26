//write a C program to find the area of square
#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, side, length, breadth, base, height;

    // Circle
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    printf("Area of Circle = %.2f\n", PI * radius * radius);

    // Square
    printf("Enter side of square: ");
    scanf("%f", &side);
    printf("Area of Square = %.2f\n", side * side);

    // Rectangle
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    printf("Area of Rectangle = %.2f\n", length * breadth);

    // Triangle
    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);
    printf("Area of Triangle = %.2f\n", 0.5 * base * height);

    return 0;
}
