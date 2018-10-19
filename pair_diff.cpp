#include <iostream>
#include <algorithm>
using namespace std;



//O(nlogn) solution
int binarysearch(int ar[],int low, int high, int x)
{

if (high >=low)
{
	int mid = low + (high-low)/2;
	if (x==ar[mid])
		return mid;

	if (x>ar[mid])
return binarysearch(ar, (mid + 1), high, x);
	

	else 
	return binarysearch(ar,low,(mid-1),x);
		

}

return -1;

}

int pairs(int ar[], int n , int k)
{

	int count=0;
	int i;
	sort(ar,ar+n);

	for(i=0; i<n-1;i++){

		if (binarysearch(ar,i+1,n-1,k - ar[i]) !=-1)
			count++;
	}
	return count;

}


int main()
{
	int ar[]={2,4,6,8};
	int k=10;
	//brute-force algorithm complexity for the problem would be O(n2)

	int n= sizeof(ar)/sizeof(ar[0]);
	cout<<pairs(ar,n,k);

	return 0;
}

//using hashmaps 




