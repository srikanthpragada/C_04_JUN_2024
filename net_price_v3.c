// Write a program to calculate net price

#include <stdio.h>

void main()
{
  float price, discount, tax, discounted_price, net_price;

    // input
    printf("Enter price :");
    scanf("%f", &price);

    // process
    discount = price * 15 / 100;
    discounted_price = price - discount;
    tax = discounted_price * 12 / 100;
    net_price = discounted_price + tax;

    // output
    printf("Price            : %10.2f\n", price);
    printf("- Discount       : %10.2f\n", discount);
    printf("Discounted Price : %10.2f\n", discounted_price);
    printf("+ Tax            : %10.2f\n", tax);
    printf("Net Price        : %10.2f\n", net_price);

}
