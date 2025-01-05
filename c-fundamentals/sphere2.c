#include <stdio.h>

/*
 * Computes the value of the sphere
 */
int main(void)
{
    const float pi = 3.14159f;
    const float four_thirds = 4.0f / 3.0f;
    float radius;
    float volume;


    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    volume = four_thirds * pi * radius * radius * radius;

    printf("The volume of the sphere (cubic meters): %.2f\n", volume);

    return 0;
}
