//
//  find_sum.cpp
//  
//
//  Created by Medha gulati on 8/20/19.
//
#include<iostream>
#include<algorithm>
#include<fstream>
using namespace std;
int main(int argc,char **argv)
{
    ifstream inputfile(argv[1]);
    ofstream outputfile(argv[2]);
    
    
    int narr[10000];
    int m=0;
    while(inputfile)
    {
        string str;
        inputfile>>str;
        int size=str.size();
        str=str+" ";
        for(int i=0;i<size;i++)
        {
            int num=str[i]-48;
            i++;
            while(str[i]!=32)
            {
                num=(num*10)+str[i]-48;
                i++;
            }
            narr[m]=num;
            m++;
        }
    }
    
    int n=m;
    int e=narr[n-1];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(narr[i]+narr[j]==e)
                outputfile<<narr[i]<<","<<narr[j]<<endl;
        }
    }
}

