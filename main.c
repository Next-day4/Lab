#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
 double x,y;
  printf("Enter x:");
  scanf("%lf", &x);

 if( x>= -10,5 && x < 8,125)

  y =sqrt(abs(x+2+cos(x))/2);

 else if ( x >= 10 && x < 15 )

  y =4;

 else if ( x >= 50 && x < 150 )

  y =4-4*x;

 else

  y =-1,5;

  system("cls");

  printf("x = %lf", x);

  printf("\ny = %lf", y);

 return 0;
}
