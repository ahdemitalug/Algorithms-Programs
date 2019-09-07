//
//  matrix_chain.cpp
//
//
//  Created by Medha gulati on 9/4/19.
//
#include<iostream>
#include<fstream>
#include<climits> 
using namespace std; 
void print(fstream& infile,int a,int b,int n,int s[], int &t)
{ 
	if(a==b)
    { 
		infile<<'A'<<t;
		t++; 
        return; 
    } 
    
    infile<<"("; 
    print(infile,a,s[n*a+b],n,s,t);
	print(infile,s[n*a+b]+1,b,n, s,t);
    infile<<")";
} 
void order(fstream& infile,int arr[], int n) 
{ 
    int result[n][n];
    int mm[n][n];
    for (int index=1;index<n;index++)
        result[index][index]=0;
 
    for (int q=2;q<n;q++)
    { 
        for (int i=1;i<n-q+1;i++) 
        { 
            int j=i+q-1;
            result[i][j]=INT_MAX;
            for (int k=i;k<=j-1;k++) 
            { 
                int c=result[i][k]+result[k+1][j]+arr[i-1]*arr[k]*arr[j];
                if (c<result[i][j])
                { 
                    result[i][j]=c;
                    mm[i][j]=k;
                } 
            } 
        } 
    } 
  
    int t=1;
    print(infile,1,n-1,n,(int *)mm,t);
  
} 
 
int main(int argc,char *argv[]) 
{ 
    int array[1000];
    fstream filein;
    filein.open(argv[1],ios::in);
    int i=0;
    while(filein)
    {
        filein>>array[i];
        i++;
    }
    filein.close();
	int n=i-1;
	fstream fileout;
	fileout.open(argv[2],ios::out);
    order(fileout,array,n);
	fileout.close();
    return 0; 
}
