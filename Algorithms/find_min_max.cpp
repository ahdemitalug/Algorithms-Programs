//
//  find_min_max.cpp
//  
//
//  Created by Medha gulati on 8/22/19.
//

#include<iostream>
#include<climits>
#include<stdio.h>
#include<cstdlib>
#include<string>

using namespace std;

int main(int argc, char **argv){
    
    string str=argv[1];
    string option = argv[2];
    
    int a[10000], num, x=0, nsize=str.size();
    int min=INT_MAX,max=INT_MIN;
    
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
    
    int op_val = atoi(option.c_str());
    
    switch (op_val) {
            
        case 1://maximum
            for(int i=0;i<x;i++){
                
                if(a[i]>max)
                    max=a[i];
                
            }
            
            cout<<max;
            break;
            
        case 2://minimum
            for(int i=0;i<x;i++){
                
                if(a[i]<min)
                    min=a[i];
                
            }
            
            cout<<min;
            break;
    }
    
    return 0;
    
}
