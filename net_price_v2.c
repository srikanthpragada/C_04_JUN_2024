// Write a program to calculate net price

#include <stdio.h>

void main()
{
  float price, discount, net_price;

    // input
    printf("Enter price :");
    scanf("%f", &price);

    // process
    discount = price * 15 / 100;
    net_price = price - discount;

    // output
    printf("Price       : %10.2f\n", price);
    printf("- Discount  : %10.2f\n", discount);
    printf("Net Price   : %10.2f\n", net_price);

}
