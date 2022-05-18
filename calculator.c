#include<stdio.h>
int main()
{char opr;
float n1,n2,ans;
printf("what operation do you want to erform");
scanf("%c",&opr);
printf("enter two numbers"); scanf("%f %f",&ni,&n2);
switch (opr)
{case '+':
ans=n1+n2;
printf("add is %.2f",ans);
break;
case '-':
ans=n1-n2;
printf("sub is %.2f",ans);
break;
case '/':
ans=n1/n2;
printf("div is %.2f", ans);
break;}
return 0;
}
