//
//  range_of_prime.cpp
//  
//
//  Created by Medha gulati on 8/26/19.
//

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv){
    
    
    string str1 = argv[1];
    string str2 = argv[2];
    
    int start_num = atoi(str1.c_str());
    int end_num = atoi(str2.c_str());
    
    int flag=0;
    
    for (int i=start_num; i<=end_num; i++){
        flag=0;
        for(int j=2; j<=(i/2); j++){
            if(i%j== 0)
            {
                flag++;
                break;
            }
        }
        if (flag==0)
        {
            cout << "1 ";
            
        }
        else
        {
            cout << "0 ";
            
        }
    }
    
    return 0;
}
