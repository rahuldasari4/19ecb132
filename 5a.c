#include <stdio.h>
struct production{
	char left;
	char right[10][10];
	int noa;
	};
struct CFG{
struct production p[10];
int nop;
};
int main()
{
struct CFG g1;
printf("enter the number of productions\n");
scanf("%d",&g1.nop);
int i,j;
for(i=0;i<g1.nop;i++)
{
printf("enter the noa of %d production\n",i+1);
scanf("%d",&g1.p[i].noa);
printf("enter the left of %d production\n",i+1);
scanf(" %c",&g1.p[i].left);
for(j=0;j<g1.p[i].noa;j++)
{
printf("enter the right of %d production\n",i+1);
scanf(" %c",&g1.p[i].right[j][0]);
}
}
for(i=0;i<g1.nop;i++)
{
printf("%c==>",g1.p[i].left);
for(j=0;j<g1.p[i].noa;j++)
{
if(j==(g1.p[i].noa-1))
{
printf("%c\n",g1.p[i].right[j][0]);
}
else{
printf("%c/",g1.p[i].right[j][0]);
}
}
}
}
