#include<stdio.h>
#include<conio.h>
int a(const void*d,const void*n)
{
return(*(char*)n)-(*(char*d));
}
void main()
{
int i,j,n;
char n[2*10];
scanf("%d",&a);
j=a;
while(i<a)
{
i=0;
n[i]='B';
n[j+1]='W';
j++;
}
n[a*2]='\0';
qsort(n,2*a,sizeof(char),a);
printf("%s",n);
}
