
//wap to calculate roots of quadratic equation 

#include <stdio.h>
#include <math.h>
int main()
{ 
    int a,b,c;
     float discriminant,root1,root2;
   printf("enter the valie of a:");
   scanf("%d",&a);
   printf("enter the valie of b:");
   scanf("%d",&b);
   printf("enter the valie of c:");
   scanf("%d",&c);
     discriminant=b*b-4*a*c;
     if (discriminant>0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
        printf("The roots are real and distinct.\n");
    } 
    else {
        printf("complex roots");
    }
    return 0;
    }
    
