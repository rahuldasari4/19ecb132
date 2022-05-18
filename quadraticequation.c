#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,r1,r2;
printf("enter co-efficents of x*2,x,and constant in order");
scanf("%d%d%d"&a,&b,&c);
D=(b*b)-(4*a*c);
if (d<0)
printf("the roots are imaginary");
r1=(-b+sqrt(b*b-4*a*c))/2*a;
r2=(-b-sqrt(b*b-4*a*c))/2*a;
printf("the roots are imaginary %d%d"r1,r2);
else if(b*b-4*a*c>0)
{
	r1=(-b+sqrt(b*b-4*a*c))/2*a;
	r2=(-b-sqrt(b*b-4*a*c))/2*a;
	printf("the roots are real %d%d"r1;r2);
}
else if (b*b-4*a*c==0)
{
	r1=(-b+sqrt(b*b-4*a*c))/2*a;
	r2=(-b-sqrt(b*b-4*a*c))/2*a;
	printf("the roots are equal %d%d"r1,r2);
}
return 0;
}

