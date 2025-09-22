#include <stdio.h>

int main() {
    char name[50];
    int quantity;
    float price;


    printf("enter name:\n");
    scanf("%s",&name);
    printf("enter quantity:\n");
    scanf("%d",&quantity);
    printf("enter price:\n");
    scanf("%f",&price);



    printf("%s \n",name);
    printf("%d \n",quantity);
    printf("%f \n",price);
    if(quantity<0 || price < 0){
        printf("le price ou la quantity et negatif");
    }
}
