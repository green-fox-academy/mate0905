#include <stdio.h>

struct Sandwich
{
  char *name;
  float price;
  float weight;
};

float price(struct Sandwich sandwich, int piece);

int main()
{
    struct Sandwich Sandwich;
    Sandwich.price = 2.15;
    printf("Price of your order: %.2f$\n", price(Sandwich, 3));
    return 0;
}

float price(struct Sandwich sandwich, int piece)
{
    float price;
    price = sandwich.price * piece;

    return price;
}

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/