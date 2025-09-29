
 //wap to calculate simple interest
 
#include <stdio.h>
int main(){

float p,r,t;
   
   printf("enter the valie of p:"); // p=principal 
   scanf("%f",&p);
   printf("enter the valie of r:"); //r= rate of interest
   scanf("%f",&r);
   printf("enter the valie of t:"); //t=time
   scanf("%f",&t);

  float I=(p*r*t)/100; //_I=simple interest
  
  printf("the value of simple interest is:%f",I);
  
return 0;
}
 
