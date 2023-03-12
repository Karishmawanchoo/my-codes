#include <stdio.h>
#include <math.h>

#define PI 3.14

void main()
{   int a,b;
    double distance, earthradius, moonradius, angle , area;
    
    earthradius = 6378; // in kilometers
    moonradius = 1737; // in kilometers
    angle = 0.00256; // in radians, the angle subtended by the Moon's radius as seen from Earth

    distance = sqrt(pow(earthradius, 2) + pow(moonradius, 2) - 2 * earthradius * moonradius * cos(angle));

    printf("The distance between the Moon and the Earth is %lf kilometers.\n", distance);
    
  


    
}