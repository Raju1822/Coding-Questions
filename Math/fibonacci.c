# include<stdio.h>
int main()
{
    int b=2,a=1,c,i;
    printf("0 ");
    printf("1 ");
    printf("1 ");
    printf("2 ");
    for(int i;i<100;i++)
    { c=a+b;
       printf("%d ",c);
       a=b;
       b=c;
    }
    return 0;
}
