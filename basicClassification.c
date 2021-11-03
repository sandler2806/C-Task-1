#include"NumClass.h"
int isPrime(int a)
{
    if(a==0)return 0;
    if (a==1)return 1;
    
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 0;
            }
    }
    return 1;
}
int isStrong(int a){
    if(a==0)return 0;
    int num=0;
    int temp;
    int finally=a;
    while (a!=0){
        int x=a%10;
        temp=1;
        for(int i=2;i<=x;i++)
        {
            temp=temp*i;
        }
        num+=temp;
        a=a/10;
    }

    if(num==finally)return 1;
    else return 0;

}