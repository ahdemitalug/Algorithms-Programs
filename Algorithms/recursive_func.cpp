//
//  recursive_func.cpp
//  
//
//  Created by Medha gulati on 9/1/19.
//

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int f(int n, int r){
    
    if(n==0 || r==0){
        return 1;
    }
    else{
        return f(n-1,r)+f(n-1,r-1);
    }
}

int main(int argc, char **argv){
    
    string str_n = argv[1];
    string str_r = argv[2];
    
    int n = atoi(str_n.c_str());
    int r = atoi(str_r.c_str());
    
    int result = f(n,r);
    
    cout<<result;
    
    return 0;
}
