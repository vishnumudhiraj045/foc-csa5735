#include<stdio.h>
#include<conio.h>

int main()
{
int i,n,sum=0;
printf("enter the nth term");
scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum: %d",sum);
getch();
}
