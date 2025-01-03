#include <stdio.h>

/*
 * Computes the volume of a sphere
 */
int main(void)
{
    const float radius = 10.0f;
    const float pi = 3.14f;
    const float four_thirds = 4.0f / 3.0f;

    float volume = four_thirds * pi * radius * radius * radius;

    printf("Volume of sphere (cubic meters): %.2f\n", volume);

    return 0;
}
