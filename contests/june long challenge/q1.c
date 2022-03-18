#include <stdio.h> 

int main()
{
    int t,xa,xb,Xa,Xb,a,b,c;
    scanf("%d",&t);
    for (int i = 0; i < t ; i++)
    {
       scanf("%d%d%d%d",&xa,&xb,&Xa,&Xb);
      a=(Xa/xa);
      b=(Xb/xb);
      c=a+b;
      printf("%d",c);

    }
    
    return 0;
}