#include <stdio.h>
void main()
{ 
int m1,m2,m3,sum;
float avg;
char name[20];
printf("ENTER YOUR NAME: \n");
scanf("%s", name);
printf ("enter your m1 m2 m3 marks \n");
scanf ("%d %d %d",&m1 ,&m2, &m3);
sum= m1+m2+m3;
avg=(sum/3.0);
printf ("your name is %s \n",name);
printf("ur total marks scored is %d",sum);
printf ("your average : ");
printf ("%f",avg);

}
