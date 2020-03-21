#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,s,Q,W,A;
printf ("Enter the value of a\n");
scanf ("%d",&a);
printf ("Enter the value of b\n");
scanf ("%d",&b);
printf ("Enter the value of c\n");
scanf ("%d",&c);

s=(a+b+c)/2;
Q=(s-a)*(s-b)*(s-c);
W=s*Q
A=sqrt(W);
printf ("The Area of Triangle is %d",A);
}