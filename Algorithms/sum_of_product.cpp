//
//  sum_of_product.cpp
//  
//
//  Created by Medha gulati on 8/25/19.
//

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv){
    
    string str1 = argv[1];
    string str2 = argv[2];
    
    int str1_size = str1.size();
    int str2_size = str2.size();
    
    if(str1_size!=str2_size){
        cout<<"-1";
    }
    else{
        
     
        int num1 = atoi(str1.c_str());
        int num2 = atoi(str2.c_str());
        
        int prod,sop=0, rem1, rem2,n1 = num1, n2=num2;
        
        for(int i=0;n1!=0;i++){
            
            rem1 = n1 % 10;
            rem2 = n2 % 10;
            
            n1 = n1/10;
            n2 = n2/10;
            
            prod = rem1 * rem2;
            
            sop = sop + prod;
            
        }
        
        cout<<sop;
        
        
    }
    
    return 0;
    
}

