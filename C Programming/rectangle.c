#include <stdio.h>

void main() {
  /* Variable Declaration. */
  float lnth, wdth, perimeter, area;

  /* Taking input of the length of the rectangle from the user */
  printf("Enter the length of the Rectangle:\n");
  scanf("%f", & lnth);

  /* Taking input of the width of the rectangle from the user */
  printf("Enter the width of the Rectangle:\n");
  scanf("%f", & wdth);

  /* Calculate perimeter of the rectangle */
  perimeter = 2 * (lnth + wdth);
  printf("Perimeter of the Rectangle: %0.4f\n", perimeter);

  /* Calculate area of the rectangle */
  area = lnth * wdth;
  printf("Area of the Rectangle: %0.4f\n", area);
}

