#include<stdio.h>

long long int fast_exp(long long int base,long long int expp) {

    long long int res=1;

    if(base==0 && expp ==0)  return 0;

    while(expp>0) {

       if(expp%2==1) 
       {
       		res=(res*base);
       }
       base=(base*base);
       base=base%1000;
       res=res%10;
       expp/=2;
       if(res==0)  break;
    }
    return res;
}

int main()
{
 long long int res,t,a,b;
 scanf("%lld",&t);

 while(t--)
 {
    scanf("%lld%lld",&a,&b);
    res=fast_exp(a,b);
    printf("%lld\n",res);
 } 

 return 0;
}