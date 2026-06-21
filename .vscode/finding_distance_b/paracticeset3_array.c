#include<stdio.h>
int main(){
    float item_price[3];
    printf("Enter the price of 3 items: ");
scanf("%f %f %f", &item_price[0], &item_price[1], &item_price[2]);
    printf ("the price of item 1 with gst is: %.2f\n", item_price[0]+item_price[0] * 0.18);
    printf ("the price of item 2 with gst is: %.2f\n", item_price[1] +item_price[1] * 0.18);
    printf ("the price of item 3 with gst is: %.2f\n", item_price[2] +item_price[2] * 0.18);
    return 0;
}