#include <stdio.h>

/*
 * Computes the dimensional weight of a
 * 12" x 10" x 8" box.
 *
 * 166: Allowable number of cubic inches
 * per pounds for international shipments.
 */
int main(void)
{
    int height;
    int length;
    int width;
    int volume;
    int weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
