#include"NumClass.h"
#include <stdio.h>
int isArmstrong (int a)
{
    if(a<0)return FALSE;
    int  num=0;
    int temp,pow=0;
    int finally=a;
    while (a!=0){
        pow++;
        a=a/10;
    }
    a=finally;
     while (a!=0){
        int x=a%10;
        temp=1;
        for(int i=0;i<pow;i++)
        {
            temp=temp*x;
        }
        num+=temp;
        a=a/10;
    }
    if(num==finally)
    {
        return TRUE;
    }
    else return FALSE;
}
	
int isPalindrome (int a){
int  f,e,finally=a,num=1;
    if(a<0)return FALSE;
    while (a!=0){
        num=num*10;
        a=a/10;
    }
    num=num/10;
    a=finally;
    while(a!=0)
    {
        e=a%10;
        f=a/num;
        if(f!=e)return FALSE;
        
        a=a%num;
        a=a/10;
        num=num/100;
    }
    return TRUE;



}