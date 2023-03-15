


   #include<stdio.h>


   #define PI 3.14f /* define the value of pie */

   void main() {
          /*variable declaration. */
          float radius, perimeter;

          /*taking input of the radius of the circle from the user*/
          printf("Enter the radius of the circle:\n");
          scanf("%f", & radius);

          /*Calculating the perimeter of the circle*/
          perimeter = 2 *PI* radius;
          printf("Perimeter of the circle: %0.4f\n", perimeter);
}
