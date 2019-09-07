//
//  selectionsort.cpp
//
//
//  Created by Medha gulati on 9/3/19.
//
#include<iostream>
#include<algorithm>
#include<fstream>
#include<string>

using namespace std;

int selection(int a[],int n,int x)
{
	sort(a,a+n);
	int r=a[x-1];
	return r;
}

int main(int argc,char *argv[])
{
    int arr[1000];
    fstream inf;
    inf.open(argv[1],ios::in);
    int i=0;
    while(inf)
    {
        inf>>arr[i];
        i++;
    }
    int v=arr[i-2];
    int total=i-2;
    inf.close();
    int k=selection(arr,total,v);
    fstream outf;
    outf.open(argv[2],ios::out);
    outf<<k;
    outf.close();
    return 0;
}
