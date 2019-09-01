//
//  maximizing_subarray_sum.cpp
//  
//
//  Created by Medha gulati on 8/23/19.
//
#include<iostream>
using namespace std;
int f(int *a,int n){
    int best=0,current=0;
    for(int i=0;i<n;i++)
    {
        current=current+a[i];
        if(current>best)
            best=current;
        if(current<0)
            current=0;
    }
    return best;
}
int main(int argc,char**argv)
{
    string str=argv[1];
    int a[10000];
    int j=0;
    int n=str.size();
    int p=0;
    for(int i=0;i<n;i++)
    {
        int z=str[i];
        if(z==45){
            p=1;
            i++;
        }
        int m=str[i]-48;
        i++;
        while(str[i]!=32&&i!=n)
        {
            m=(m*10)+(str[i]-48);
            i++;
        }
        if(p==1){
            a[j]=(-1*m);
            p=0;
            j++;
        }
        else{
            a[j]=m;
            j++;
        }
    }
    
    int result=f(a,n);
    cout<<result;
}


