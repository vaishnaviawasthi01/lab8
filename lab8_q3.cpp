//include library
#include<iostream>
using namespace std;

//to find the max of the array elements

int maxf(int arr[])
	{
	int max=arr[0];
	for (int i=0;i<7;i++)
		{
		if (arr[i]>=max)
			max=arr[i];
		}
	return max;
	}

//to find the min of the array elements

int minf(int arr[])
	{
	int min=arr[0];
	for (int i=0;i<7;i++)
		{
		if (arr[i]<=min)
			min=arr[i];
		}
	return min;
	}

//to find kth smallest and kth largest element of an array
// we have to sort the array first

void sorter(int arr[], int k)
	{
	cout <<"Sorted array: [";
	int sortarr[7];
	int big=maxf(arr), min=minf(arr);
	for (int j=0; j<7; j++)
		{
		if (j==0)
			{
			sortarr[j]=min;
			cout<<min;
			}
		else
			{
			for (int i=0;i<7;i++)
				{
				if (arr[i]<big && arr[i]>sortarr[j-1])//
					big=arr[i]; 
				}
			min=big;                         //it saves the jth smallest elment in min
			big=maxf(arr);
			sortarr[j]=min;
			cout <<","<<min;
			}
		}
	cout <<"]"<<endl;;
	cout<<k<<"th smallest element of the array is:"<<sortarr[k-1]<<endl;
	cout<<k<<"th largest element of the array is:"<<sortarr[7-k]<<endl;
	}

//main function
int main()
	{
	int arr[7]={10, 6, 7, 4, 3, 2, 11};
	int k;
	cout <<"Array: [10, 6, 7, 4, 3, 2, 11]"<<endl;
	cases:
	cout <<"Type a number k to find the kth largest and smallest element of this array: ";
	if(k>7)
		{
		cout <<" The value must be between 1 and 7."<<endl;
		goto cases;
	}
	else
		 {
		cin>>k;
		sorter(arr, k);
		return 1;
		}
	}
