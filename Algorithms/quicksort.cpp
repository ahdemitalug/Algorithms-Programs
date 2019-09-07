//
//  quicksort.cpp
//
//
//  Created by Medha gulati on 9/4/19.
//
#include<algorithm>
#include<iostream>
#include<fstream>

using namespace std;
int c=0;
int v;

void fit(int ar[],int a,int b)
{
	int temp=ar[b];
	for(int x=(b-1);x>=a;x--)
	{
		ar[x+1]=ar[x];
	}
	ar[a]=temp;
	a++;
	b++;
}

void print(fstream& afile2,int arr[],int final[])
{
	for(int y=0;y<v;y++)
	{
		for(int b=0;b<c;b++)
		{
			if(arr[y]==final[b])
			{
				afile2<<"(";
			}
		}
		afile2<<arr[y];
        for(int b=0;b<c;b++)
		{
			if(final[b]==arr[y])
			{
				afile2<<")";
			}
		}
		if(y!=(v-1))
		{
			afile2<<",";
		}
	}
	afile2<<endl;
}

int part(fstream& file2,int arr[],int l,int h,int final[])
{
	int pivot=arr[h];
	int i=l-1;
	int j=l;

	for(;j<h;j++)
	{
		if(arr[j]<=pivot)
		{
			i++;
			fit(arr,i,j);
		}
	}
	fit(arr,i+1,h);

	final[c]=arr[i+1];
	c++;
	print(file2,arr,final);
	return(i+1);
}
void quicksort(fstream& file2,int arr[],int final[],int l,int h)
{
	int t;
	if(l<=h)
	{
		t=part(file2,arr,l,h,final);

		quicksort(file2,arr,final,l,t-1);
		quicksort(file2,arr,final,t+1,h);

	}
}


int main(int argc,char *argv[])
{
	int arr[1000];
	fstream infile, outfile;
    infile.open(argv[1],ios::in);
    int i=0,total;
    while(infile)
    {
        infile>>arr[i];
        i++;
    }
    total=i-1;
    v=total;
	infile.close();
    int final[1000];
    outfile.open(argv[2],ios::out);
    outfile<<arr[0];
	for(int o=1;o<total;o++)
	{
		outfile<<","<<arr[o];
	}
	outfile<<endl;
	quicksort(outfile,arr,final,0,total-1);

	outfile<<arr[0];
    
    
	for(int o=1;o<total;o++)
	{
		outfile<<","<<arr[o];
	}

	return 0;
}

