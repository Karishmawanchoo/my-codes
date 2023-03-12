 
 #include<stdio.h>
 int main()
 {double radius = 6371.0;  // Earth's radius in kilometers
    double pi = 3.14159265359;
    double area;

    area = 4 * pi * radius * radius; // Calculate the surface area of the Earth

    printf("The surface area of the Earth is %lf square kilometers.\n", area);

    return 0;
}