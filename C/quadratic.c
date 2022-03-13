//Ara Beigi
//Assignment 5
//This program takes 3 user-input numbers and, using a separate user-defined function, calculates the roots of the function ax^2 + bx + c = 0.

#include <stdio.h>
#include <math.h>

float quadratic(float, float, float, int);

int main()
{
  float a,b,c;
  int flag=0;

  printf("Enter your 3 values for a, b, and c\n");
  scanf("%f %f %f", &a, &b, &c);

  /*  printf("a: %f b: %f c: %f\n", a, b, c); */

  printf("%f\n", quadratic(a, b, c, flag));

  flag=1;
  printf("%f\n", quadratic(a, b, c, flag));
}

float quadratic(float a, float b, float c, int flag)
{
  float x;
  
  /*  printf("Discriminant: %f\n", b*b - 4*a*c); */

  if ((b*b - 4*a*c)<0)
  {
    printf("Solution is not a real number\n");
    return x = 0;
  }
  else if (flag==0)
    return x = (-b+sqrt(b*b - 4*a*c))/2*a;
  else if (flag==1)
    return x = (-b-sqrt(b*b - 4*a*c))/2*a;
}

