#include"NumClass.h"
int isPrime(int a)
{
    if(a<=0)return FALSE;
    if (a==1)return TRUE;
    
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return FALSE;
            }
    }
    return TRUE;
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

    if(num==finally){
        return TRUE;
    }
    else return FALSE;

}