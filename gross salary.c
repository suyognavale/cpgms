
#include<stdio.h>

void main()
{
int a,HA,DA,Q,W;
printf ("ENTER YOUR SALARY per annum\n");
scanf ("%d" ,&a);
HA=0.02*a;
DA=0.04*a;
Q=HA+DA+a;
W=Q/12;
printf ("Your gross salary is %d\n",Q);
printf ("Your salary per month is %d\n",W);

}


 