/**
 *
 * File: Converstion.c
 * Author: Teresa Gramer and Andres Ruiz
 * Date: 2019/01/23
 * Lab02
 *
 */
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv) {

  double usDollars;
  double britishPounds;
  double japanJpy;

  printf("Please input the total amount of US Dollars: ");
  scanf("%lf", &usDollars);

  usDollars = usDollars * 0.9;
  britishPounds = usDollars * 0.5 * 0.6;
  japanJpy = usDollars * 0.5 * 76.8;

  printf("You get %lf British Pounds and %lf Japanese JPY.", britishPounds, japanJpy);

  return 0;
}
