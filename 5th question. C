//wap to convert temp

#include <stdio.h>

int main() {
    int choice;
    float temperature, convert_temp;

    printf("1.convert fahrenheit to centigrade\n");
    printf("2.convert centigrade to fahrenheit \n");
    printf("Enter your choice (1 or 2):");
    scanf("%d",& choice);

    if(choice==1){
        printf("enter temp in fahrenheit:");
        scanf("%f",&temperature);

        convert_temp=(temperature - 32)*5/9;
        printf("temprature in centigrade %.2f°C\n", convert_temp);
    }
    else if(choice==2){
        printf("enter temp in centigrade:");
        scanf("%f",&temperature);

        convert_temp=(temperature *9/5)+32;
        printf("temprature in fahrenheit %.2f°F\n", convert_temp);
    }
    else{
        printf("invalid Choice! please enter 1 or 2 ");
    }
    return 0;
}
