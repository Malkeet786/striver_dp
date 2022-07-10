/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
// vector<int>ans;
void solve(TreeNode<int> *root,vector<int>&ans){
    if(root==NULL){
        return;
    }
    solve(root->left,ans);
    ans.push_back(root->val);
    solve(root->right,ans);
}
int floorInBST(TreeNode<int> * root, int X)
{
    vector<int>ans;
    solve(root,ans);
    int num;
    if(root=NULL){
        return -1;
    }
    for(int i=0;i<ans.size();i++){
         if(ans[i]<=X){
           num=ans[i];
       }
      
   }
   return num;
    // Write your code here.
//      int floorVal = 0;
//     while(root != NULL) {
        
//         if(root -> val == X) {
//             floorVal = root -> val;
//             return floorVal;
//         }
//         else if(root -> val > X) {
//             root = root -> left;
//         }
//         else {
//             floorVal = root -> val;
//             root = root -> right;
//         }
//     }
//     return floorVal;
}