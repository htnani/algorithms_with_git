// C++ program to implement interpolation search
#include <bits/stdc++.h>
using namespace std;
// If x is present in arr[0..n-1], then returns
// index of it, else returns -1.
int interpolationSearch(int arr[], int n, int x)
{
	// Find indexes of two corners
	int lo = 0, hi = (n - 1);

	// Since array is sorted, an element present
	// in array must be in range defined by corner
	while (lo <= hi && x >= arr[lo] && x <= arr[hi])
	{
		// Probing the position with keeping
		// uniform distribution in mind.
		int pos = lo + (((double)(hi-lo) /
			(arr[hi]-arr[lo]))*(x - arr[lo]));

		// Condition of target found
		if (arr[pos] == x)
			return pos;

		// If x is larger, x is in upper part
		if (arr[pos] < x)
			lo = pos + 1;

		// If x is smaller, x is in the lower part
		else
			hi = pos - 1;
	}
	return -1;
}

int main()
{
	int n,x,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
        cin>>arr[i];

	cin>>x;
	int index = interpolationSearch(arr, n, x);

	// If element was found
	if (index != -1)
		cout<<"Element found at index"<<index<<endl;
	else
		cout<<"Element not found"<<endl;
	return 0;
}
