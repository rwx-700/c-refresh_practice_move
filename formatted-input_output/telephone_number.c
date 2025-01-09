#include <stdio.h>

/*
 * Prompts the user to enter a telephone number
 */
int main(void)
{
    int first_num;
    int second_num;
    int third_num;

    printf("Enter phone number [(xxx) xxx-xxx]: ");
    scanf("(%d)%d-%d", &first_num, &second_num, &third_num);

    printf("You entered %d.%d.%d\n", first_num, second_num, third_num);

    return 0;
}
