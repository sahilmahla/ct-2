// Name: Sahil Mahla
// Roll No: 2010991697
// Set 5
// Question:2
#include <bits/stdc++.h>
using namespace std;

int main(){
	try{
		int n;
		cin>>n; // size of array
		// vector<int> v(n);
        int a[n];
		vector<vector<int>> res;
		for(int i=0;i<n;i++){
			cin>>a[i]; // taking input
        }
        // applying brute force checking for every subarray
		for(int i=0;i<n;i++){
			vector<int> temp;
			int sum=0;
			for(int j=i;j<n;j++){
				sum+=a[j];
				temp.push_back(a[j]);
				if(sum==0)
					res.push_back(temp); // if subarray sum is 0 appending it to res
			}
		}

        cout<<"Subarrays with sum 0 are: "<<endl;
		for(int i=0;i<res.size();i++){
			for(int j=0;j<res[i].size();j++){
				cout<<res[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	catch(...){
		cout<<"There is problem\n";
	}
    return 0;
}

