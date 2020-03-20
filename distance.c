#include<stdio.h>
#include<math.h>
void main()
{
float x1,x2,y1,y2,Q,W,E,D;
printf ("Enter X1\n");
scanf ("%f",&x1);
printf ("Enter X2\n");
scanf ("%f",&x2);
printf ("Enter Y1\n");
scanf ("%f",&y1);
printf ("Enter Y2\n");
scanf ("%f",&y2);
Q=(x1-x2)*(x1-x2); 
W=(y1-y2)*(y1-y2);
E=Q+W;
D=sqrt(E);
printf ("THE DISTANCE BETWEEN TWO POINTS IS %f",D);
}
