 
  //wap to find area of circle in both floating and exponential notation 

#include<stdio.h>
#include<math.h>

int main(){

float r,Area;

printf("enter tha value of radius:");
scanf("%f",&r);
Area = 3.1428*r*r;
printf("Area of circle in floating notation is:%f\n",Area);
 
printf("Area of circle in exponential notation is:%e\n",Area); 

return 0;
}


