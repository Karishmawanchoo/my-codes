//Header File
#include<stdio.h>
#include<math.h>
int main() {
    //variable declarations
    float distance;
     //Earth's radius in kilometers
    float earthRadius = 6328.0;
     //Moon's radius in kilometers
    float moonRadius = 1456.0;
     //Input Output statements
   printf("Enter the distance between the centers of earth and moon in kilometers");
   scanf("%lf", & distance);
     //Calculate the distance between the surfaces of the earth and moon
   float surfacedistance = distance - earthRadius - moonRadius;

   printf("The distance between the surfaces of the earth and moon  is: %.2lf\n ", surfacedistance);

   return 0;


    
}