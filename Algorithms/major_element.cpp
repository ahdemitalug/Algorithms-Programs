//
//  major_element.cpp
//  
//
//  Created by Medha gulati on 8/20/19.
//

#include<iostream>
#include<climits>

using namespace std;

int main(int argc, char **argv)
{
    string str=argv[1];
    int a[10000], num, major=INT_MIN, x=0, f=0, nsize=str.size();
    
    for(int i=0;i<nsize;i++)
    {
        //take integer from string
        num=str[i]-48;
        i++; //to ignore space
        
        //if it is not space
        while(str[i]!=32&&i!=nsize)
        {
            //it's a 2-digit number
            num=(num*10)+(str[i]-48);
            i++;
        }
        
        //put that number in an array
        a[x]=num;
        x++;
    }
    
    for(int i=0;i<x;i++)
    {
        if(a[i]>major)
            major=a[i];
    }
    
    //make array of storing the values found in given array
    int v[major+1];
    
    for(int i=0;i<=major;i++)
    {
        v[i]=0;
    }
    
    for(int i=0;i<x;i++)
    {
        v[a[i]]++;
    }
    
    //finding major element
    for(int i=0;i<=major;i++)
    {
        if(v[i]>=x/2)
        {
            cout<<i;
            f=1;
        }
    }
    
    if(f==0)
        cout<<"NONE";

    return 0;
    
}
