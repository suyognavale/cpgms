#include<stdio.h>
void main()
{
int a,b,c,d,e,n,W=0;
printf ("Enter the 5 digits n\n");
scanf("%d",&n);
a=n%10;
W=W+a;
n=n/10;
b=n%10;
W=W+b;
n=n/10;
c=n%10;
W=W+c;
n=n/10;
d=n%10;
W=W+d;
n=n/10;
e=n%10;
W=W+e;
n=n/10;
printf ("The sum of 5 digits is %d\n",W);
}