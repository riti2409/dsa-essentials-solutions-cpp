#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int n=A.size();
    int cs = 0;
	int largest = INT_MIN;

	for(int i=0;i<n;i++){
		cs = cs + A[i];
        //maximum subarray size should be 1 atleast
		if(cs < A[i]){
			cs = A[i];
		}
		largest = max(largest, cs);
	}

	return largest;
}
