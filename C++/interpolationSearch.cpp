#include<bits/stdc++.h>
using namespace std;
int interpolationSearch(int arr[], int n, int x)
{
	// Find indexes of lower bound and upper bound
	int l = 0, h = n - 1;

	// Since array is sorted, an element present
	// in array must be in range defined by corner
	while (l <= h && x >= arr[l] && x <= arr[h])
	{
		if (l == h)
		{
			if (arr[l] == x) 
			    return l;
			return -1;
		}
		// Formula used for interpolation search
		int pos = l + (((double)(h - l) / (arr[h] - arr[l])) * (x - arr[l]));

		// Condition of key element found
		if (arr[pos] == x)
			return pos;

		// If x is larger, x is in upper part
		if (arr[pos] < x)
			l = pos + 1;

		// If x is smaller, x is in the lower part
		else
			h = pos - 1;
	}
	return -1;
}

int main()
{
	// Array of items on which search will
	// be conducted.
	int n;
	cout << "Enter array size: ";
	cin >> n;
	int arr[n];
	cout << "Enter the elements: ";
	for(int i=0;i<n;i++)
	    cin >> arr[i];
	int x; // Element to be searched
	cout << "Element to search: ";
	cin >> x;
	int index = interpolationSearch(arr, n, x); // indexing will start from 0
	if (index != -1)
		cout << "Element found at index " << index;
	else
		cout << "Element is not present in the array.";
	return 0;
}

