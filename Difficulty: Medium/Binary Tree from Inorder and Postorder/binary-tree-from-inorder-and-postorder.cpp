//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL)
        return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}


// } Driver Code Ends
/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution {
  public:
   int find(int in[],int target,int start,int end)
    {
        for(int i=start;i<=end;i++)
        {
            if(in[i]==target)
              return i;
        }
        return -1;
    }

    // Function to return a tree created from postorder and inoreder traversals.
    Node *Tree(int in[],int post[],int Instart,int Inend,int index)
    {
        if(Instart>Inend) return NULL;
        
        Node *root=new Node(post[index]);
        int pos=find(in,post[index],Instart,Inend);
        
        root->right=Tree(in,post,pos+1,Inend,index-1);
        root->left=Tree(in,post,Instart,pos-1,index-(Inend-pos)-1);
        
        return root;
    }
    Node *buildTree(int n, int in[], int post[]) {
        // Your code here
        
        return Tree(in,post,0,n-1,n-1);
        
    }
};


//{ Driver Code Starts.

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++)
            cin >> in[i];
        for (int i = 0; i < n; i++)
            cin >> post[i];
        Solution obj;
        Node* root = obj.buildTree(n, in, post);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends