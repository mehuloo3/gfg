//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


vector <int> bottomView(Node *root);

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//Function to return a list containing the bottom view of the given tree.

class Solution {
  public:
// void find(Node *root,int pos,int &l,int &r)
    // {
    //     if(!root) return;
        
    //     l=min(pos,l);
    //     r=max(pos,r);
    //     find(root->left,pos-1,l,r);
    //     find(root->right,pos+1,l,r);
    // }
      void find(Node *root,int pos,int &l,int &r){
        if(!root)
            return;
        l = min(l,pos);
        r = max(r,pos);
        find(root->left,pos-1,l,r);
        find(root->right,pos+1,l,r);
    }
 void bottom(Node *root,int pos,int level,vector<int>&ans,vector<int>&levelarr){
        if(!root)
            return;
        if(!ans[pos] || level>=levelarr[pos]){
            ans[pos] = root->data;
            levelarr[pos] = level;
        }
        bottom(root->left,pos-1,level+1,ans,levelarr);
        bottom(root->right,pos+1,level+1,ans,levelarr);
    }   
// void bottom(Node *root,int pos,vector<int>&ans,vector<int>&level,int l)
// {
//     if(!root) return;
    
//     if(level[pos]<l || !ans[pos])
//     {
//         ans[pos]=root->data;
//         level[pos]=l;
//     }
// bottom(root->left,pos-1,ans,level,l+1);
// bottom(root->right,pos+1,ans,level,l+1);
// }
    vector <int> bottomView(Node *root) {
        // // Your Code Here
        // int l=0,r=0;
        
        // find(root,0,l,r);
        // vector<int>ans(r-l+1);
        // vector<int>level(r-l+1,INT_MAX);
        // bottom(root,-1*l,ans,level,0);
        // return ans;
        
         int l=0,r=0;
        find(root,0,l,r);
        vector<int>ans(r-l+1);
        vector<int>levelarr(r-l+1,0);
        int pos = -1*l;
        int level = 0;
        bottom(root,pos,level,ans,levelarr);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        vector <int> res = ob.bottomView(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}



// } Driver Code Ends