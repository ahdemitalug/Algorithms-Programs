//
//  pattern_matching.cpp
//  
//
//  Created by Medha gulati on 9/1/19.
//


#include <bits/stdc++.h>
#include<sstream>


using namespace std;

int main (int argv,char** argc)
{
    string str1, str2;
    unsigned int m;
    
    str1=argc[1];
    stringstream ss(str1);
    
    str2 = argc[2];
    
    m = str1.find(str2);
    
    if (m != string::npos){
        cout <<(m+1) ;
        
    }
    else{
        cout<<"0";
        
    }
    
    
    return 0;
}
