
#include<stdio.h>

void main()
{
int D,W;
float M,Y;
printf ("Enter the number of days\n");
scanf ("%d" ,&D);
Y=D/365;
M=D/30;
W=D/7;

printf ("No. of weeks is %d\n",W);
printf ("No. of months is %f\n",M);
printf ("No. of Years is %f\n",Y);

}


 