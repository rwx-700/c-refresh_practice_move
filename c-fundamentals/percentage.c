#include <stdio.h>

/*
 * Prints a dollar and cents amount with added tax
 */
int main(void)
{
    float dollar_cents;
    float amount_tax_added;

    printf("Enter a dollar and cents amount: ");
    scanf("%f", &dollar_cents);

    amount_tax_added = dollar_cents * (1.00f + 5.00f / 100.00f);

    printf("The amount with added tax: $%.2f\n", amount_tax_added);

    return 0;
}
