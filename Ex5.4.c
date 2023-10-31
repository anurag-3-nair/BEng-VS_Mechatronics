#include <stdio.h>
#include <math.h>

int main()
{
    //Defining the radius for calculation
    int r = 1;

    //Listing the equations for volume and surface area
    double volume = 4*M_PI*r*r*r/3;
    double area = 4*M_PI*r*r;
    printf("The volume of the sphere is %0.2lf meter cubed and the surface area is %0.2lf meter squared",volume, area);

    //Exiting the main program
    return 0;
}