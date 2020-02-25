#include <stdio.h>
void main()
{ 
int m1,m2,m3,m4,m5,sum;
float avg;
char name[20];
printf("ENTER YOUR NAME \n");
scanf("%s", name);
printf ("enter your m1 \n");
scanf ("%d",&m1);
printf ("enter your m2 \n");
scanf ("%d",&m2);
printf ("enter your m3 \n");
scanf ("%d",&m3);
printf ("enter your m4 \n");
scanf ("%d",&m4);
printf ("enter your m5 \n");
scanf ("%d",&m5);
sum= m1+m2+m3+m4+m5;
avg=(sum/5.0);
printf ("Your name is: %s \n",name);
printf("Your total marks scored is %d \n",sum);
printf ("Your average : ");
printf ("%f",avg);

}
