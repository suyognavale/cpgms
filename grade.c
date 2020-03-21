#include <stdio.h>
void main()
{ 
int m1,m2,m3,sum,avg;
printf ("Enter your m1/50 \n");
scanf ("%d",&m1);
printf ("Enter your m2/50 \n");
scanf ("%d",&m2);
printf ("Enter your m3/50 \n");
scanf ("%d",&m3);
sum= m1+m2+m3;
avg= sum/3.0;
if (avg>=40)
{
printf ("GRADE is A");
}
else if (avg>=30)
{
printf ("GRADE IS B");
}
else if (avg>=20)
{
printf ("GRADE IS c");
}
else 
{
printf ("FAILED");
}
}



