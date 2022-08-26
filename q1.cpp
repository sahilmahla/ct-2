// Name: Sahil Mahla
// Roll No: 2010991697
// Set: 5
// Question:1
#include <bits/stdc++.h>
using namespace std;

int first = -1;
int second = -1;

// int helper(int a[],  int n, int k) 
// { 
//     unordered_map<int,int> mp;
//     int len=0,sum=0;
//     mp[0]=-1;
//     for(int i=0;i<n;i++){
//         sum+=a[i];
        
//         if(mp.find(sum-k)!=mp.end()){
//              //len=max(len,i-mp[sum-k]);
//             if(len< i-mp[sum-k]){
//                 len=i-mp[sum-k];
//                 first = i;
//                 cout<<i<<" ";
//                 second = mp[sum-k];
//                 cout<<second<<" ";
//             }       
//         }
//         if(mp.find(sum)==mp.end()){
//             mp[sum]=i;
//         }

//     }
//     return len;
// } 

vector<int> helper(int a[],int n,int k){
	vector<int> res;
    //  applying brute force
	for(int i=0;i<n;i++){
		int sum=0;
		vector<int> temp;
		for(int j=i;j<n;j++){
			sum+=a[j];
			temp.push_back(a[j]);
			if(sum==k && res.size()<temp.size()){ // checking if current one is greater then previous subaasray with k sum
				res=temp;
			}
		}
	}
    return res;
}
int main(){
    int n; // size of input aay
    cin>>n;
    int a[n]; // input aay
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k; // given sum
    cin>>k;
    vector<int> res;
    try{
        res = helper(a,n,k);
    }
    catch(exception e){
        cout<<"Problem with helper function"<<endl;
    }
    cout<<"The longest subarray is {";
    for(int i = 0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<"} with length "<<res.size()<<endl;
    return 0;
}