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



    printf("%s",name);
    printf("%d",quantity);
    printf("%f",price);
}
