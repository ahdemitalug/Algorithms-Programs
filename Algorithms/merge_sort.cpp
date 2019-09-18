//
//  merge_sort.cpp
//  
//
//  Created by Medha gulati on 9/2/19.
//

#include<iostream>
using namespace std;
void merge_sort(int *a,int nsize)
{
    if(nsize==1)
        return;

    int lower[10000],upper[10000], size1=nsize/2, size2=nsize-size1, index, i, j;
    
    for(int i=0;i<size1;i++)
    {
        lower[i]=a[i];
    }
    
    index=0;
    
    for(int i=size1;i<nsize;i++)
    {
        upper[index]=a[i];
        index++;
    }
    merge_sort(lower,size1);
    merge_sort(upper,size2);
    i=0,j=0;
    index=0;
    while(i<size1&&j<size2)
    {
        if(lower[i]<upper[j]){
            a[index]=lower[i];
            i++;
            index++;
        }
        else if(lower[i]>upper[j]){
            a[index]=upper[j];
            j++;
            index++;
        }
        else if(lower[i]==upper[j]){
            a[index]=lower[i];
            index++;
            i++;
            a[index]=upper[j];
            index++;
            j++;
        }
    }
    while(i<size1)
    {
        a[index]=lower[i];
        i++;
        index++;
    }
    while(j<size2)
    {
        a[index]=upper[j];
        j++;
        index++;
    }
    
}
int main(int argc,char**argv)
{
    string str = argv[2];
    int arr[10000], index=0, nsize=str.size(), num;
    for(int i=0;i<nsize;i++)
    {
        num=str[i]-48;
        i++;
        while(str[i]!=32 && i!=nsize)
        {
            num=(num*10)+(str[i]-48);
            i++;
        }
        arr[index]=num;
        index++;
    }
    
    merge_sort(arr,index);
    
    for(int i=0;i<index;i++)
    {
        cout<<arr[i]<<" ";
    }
}

