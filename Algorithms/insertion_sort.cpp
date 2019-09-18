//
//  insertion_sort.cpp
//  
//
//  Created by Medha gulati on 9/3/19.
//
#include<iostream>
#include<fstream>

using namespace std;

int main(int argc,char **argv)
{
    ifstream inputfile(argv[1]);
    ofstream outfile(argv[2]);
    
    int arr[10000],n,m,x;
    x=0;
    while(inputfile)
    {
        string str;
        inputfile>>str;
        int nsize=str.size();
        str=str+" ";
        for(int i=0;i<nsize;i++)
        {
            int num=str[i]-48;
            i++;
            while(str[i]!=32)
            {
                num=(num*10)+str[i]-48;
                i++;
            }
            arr[x]=num;
            x++;
        }
    }
    
    n=x;
    for(int i=0;i<n;i++)
    {
        outfile<<arr[i]<<" ";
    }
    outfile<<endl;
    for(int i=1;i<n;i++)
    {int val=arr[i];
        int x=i-1;
        while(arr[x]>arr[i]&&x>-1)
        {
            x--;
        }
        x++;
        m=i-1;
        for(m=i-1;m>=x;m--)
        {
            arr[m+1]=arr[m];
        }
        arr[m+1]=val;
        for(int i=0;i<n;i++)
        {
            outfile<<arr[i]<<" ";
        }
        outfile<<endl;
    }
    
    
}

