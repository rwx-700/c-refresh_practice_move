#include <stdio.h>

/*
 * Breaks down an ISBN entered by a user
 */
int main(void)
{
    int gs1_prefix;
    int group_identifier;
    int publisher_code;
    int item_num;
    int check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_identifier, &publisher_code, &item_num, &check_digit); 

    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\n", gs1_prefix, group_identifier, publisher_code);
    printf("Item number: %d\nCheck digit: %d\n", item_num, check_digit);

    return 0;
}
