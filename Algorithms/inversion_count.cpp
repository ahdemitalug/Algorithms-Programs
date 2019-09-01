//
//  inversion_count.cpp
//  
//
//  Created by Medha gulati on 8/22/19.
//
#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char **argv)
{
    
    ifstream inputfile(argv[1]);
    int a[10000];
    int k=0;
    while(inputfile)
    {
        string str;
        inputfile>>str;
        int str_size=str.size();
        str=str+" ";
        for(int i=0;i<str_size;i++)
        {
            int num=str[i]-48;
            i++;
            while(str[i]!=32)
            {
                num=(num*10)+str[i]-48;
                i++;
            }
            a[k]=num;
            k++;
        }
    }
    
    int n=k;
    ofstream outputfile(argv[2]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
                outputfile<<a[i]<<","<<a[j]<<endl;
        }
    }

    
    return 0;
}
