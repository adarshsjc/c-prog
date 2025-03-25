#include <stdio.h>
#define pi 3.14
#define Area_of_circle(r) (pi*r*r)
#define Surface_area_circle(r,h) (2*pi*r*(r+h))
int main()
{ 
  float   r,h,area,surface_area;
  printf("Enter radius of circle and cylinder:");
  scanf("%f",& r);
  printf("Enter the height of the cylinder:");
  scanf("%f",& h);
  area=Area_of_circle(r);
  surface_area=Surface_area_circle(r,h);
printf("The area of the circle:%f\n",area);
printf("the surface area of the circle:%f\n",surface_area);
return 0;
}



