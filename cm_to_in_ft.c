// Write a program to convert CM to INCHES and FEET

#include <stdio.h>

void main()
{
  float cm, inches, feet;

    // input
    printf("Enter centimeters :");
    scanf("%f",&cm);

    // process
    inches = cm / 2.54;
    feet = cm / 30;

    // output
    printf("%.2f CM = %.2f Inches\n", cm,inches);
    printf("%.2f CM = %.2f Feet\n", cm,feet);
}
