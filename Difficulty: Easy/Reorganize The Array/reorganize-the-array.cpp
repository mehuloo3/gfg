//{ Driver Code Starts
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int * Rearrange(int *arr,int n);

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int *b = Rearrange(a,n);
	    for(int i=0;i<n;i++)
	        cout << b[i] <<" ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends


int * Rearrange(int *arr,int n){
    // Complete the function
    for(int i=0;i<n;i++)
    {
        while(arr[i]!=-1 && arr[i]!=i)
        {
            int temp=arr[arr[i]];
            arr[arr[i]]=arr[i];
            arr[i]=temp;
        }
    }
        return arr;
    }
