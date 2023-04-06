#include <stdio.h>

int main()
{
    int amount = 100;
    int price = 0;
    printf("Enter the price of the item: ");
    scanf("%d", &price);

    printf("Please input the amount of money: ");
    scanf("%d", &amount);

    int change = amount - price;
    printf("The change is %d \n", change);
}