#include<stdio.h>
void main()
{
float a,i,Q,W,E;
int t;
printf ("Enter the loan amount\n");
scanf ("%f",&a);
printf ("Enter the interest rate\n");
scanf("%f",&i);
printf ("Enter the tenure(in months)\n");
scanf ("%d",&t);
Q=i/100;
W=a+(a*Q);
E=W/t;
printf ("The loan amount is %f\n",a);
printf ("The interest rate is %f\n",i);
printf("The tenure(in months) is %d\n",t);
printf ("The total amount to be paid after interest been added is %f\n",W);
printf ("The E.M.I for %d months is %f\n",t,E);
}
