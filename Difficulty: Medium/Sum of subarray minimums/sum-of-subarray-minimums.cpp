class Solution {
  public:
    int sumSubMins(vector<int> &arr) {
        // code here
        
    //TLE
    // vector<int>v;
    // int n =arr.size();
    // for(int i=0;i<n;i++)
    // {
    //     vector<int>vc;
    //     for(int j=i;j<n;j++)
    //     {
    //         vc.push_back(arr[j]);
    //         int mini=*min_element(vc.begin(),vc.end());
    //         v.push_back(mini);
    //     }
      
    // }
    // int sum=0;
    // for(auto i:v)
    // {
    //     sum+=i;
    // }
    // return sum;
    
    int n=arr.size();
    vector<int> left(n), right(n);
    stack<int> s;

    // Find Previous Smaller Element (PSE)
    // We use > to handle duplicates correctly on one side
    for (int i = 0; i < n; i++) {
        while (!s.empty() && arr[s.top()] > arr[i]) {
            s.pop();
        }
        left[i] = s.empty() ? i + 1 : i - s.top();
        s.push(i);
    }

    // Clear stack for next use
    while (!s.empty()) s.pop();

    // Find Next Smaller Element (NSE)
    // We use >= here to ensure each subarray is counted exactly once
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && arr[s.top()] >= arr[i]) {
            s.pop();
        }
        right[i] = s.empty() ? n - i : s.top() - i;
        s.push(i);
    }

    unsigned int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += (unsigned int)arr[i] * left[i] * right[i];
    }

    return totalSum;
    }
};