#include <stdio.h>

/*
 * Formats and prints product information.
 */
int main(void)
{
    int item_num;
    float unit_price;
    int mm;
    int dd;
    int yyyy;

    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter product date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    //printf("Item\t\n\n%d\tUnit\t\nPrice\t\n$%7.2f\tPurchase\t\nDate\t\n%02d/%02d/%04d\n", item_num, unit_price, mm, dd, yyyy);
    //printf("Item\tUnit\n\n%d\tPurchase\n\tPrice\n$%7.2f\tDate\n%02d/%02d/%04d\n", item_num, unit_price, mm, dd, yyyy);
    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%02d/%02d/%04d\n", item_num, unit_price, mm, dd, yyyy);
    return 0;
}
