//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int find(int inorder[],int target,int start,int end)
    {
        for(int i=start;i<=end;i++)
        {
            if(inorder[i]==target)
              return i;
        }
        return -1;
    }
     Node *Tree(int inorder[],int preorder[],int instart,int inend,int index)
     {

        if(instart>inend) return NULL;
        
        Node *root=new Node(preorder[index]);
        int pos=find(inorder,preorder[index],instart,inend);
        
        root->left=Tree(inorder,preorder,instart,pos-1,index+1);
        root->right=Tree(inorder,preorder,pos+1,inend,index+(pos-instart)+1);
        
        return root;
     }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        return Tree(in,pre,0,n-1,0);
        
       
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends