# include<stdio.h>
int main()
{
    int a,s=2,b=1;
    print("0 ");
    print("1 ");
    for(int i=1;i<100;i++)
    { a=s;
      s=s+b;
       printf("%d ",s);
       b=a;
    }
    return 0;
}
