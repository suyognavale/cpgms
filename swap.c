 #include<stdio.h>
 void main()
 {
 int a,b,c;
 printf ("ENTER THE VALUE OF A\n");
 scanf ("%d",&a);
 printf("ENTER THE VALUE OF B\n");
 scanf ("%d",&b);
 printf ("before swapping\n");
 printf ("a=%d\n b=%d\n",a,b);
 c=a;
 a=b;
 b=c;
 printf ("after swapping\n");
 printf ("a=%d\n b=%d\n",a,b); 
 }