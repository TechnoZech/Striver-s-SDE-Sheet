// <<<============== Day 1 8-06-2023 ==============>>>


//  Boundary Traversal of binary tree  ==============>>>

// class Solution {
// public:
    
//     vector<int>ans;
    
//     void left(Node* root){
//         if(!root) return;
//         if(!root->left && !root->right) return;
//         ans.push_back(root->data);
        
//         if(!root->left){
//             left(root->right);
//         }else{
//             left(root->left);
//         }
//     }
    
//     void leaves(Node* root){
//         if(!root) return;
//         if(!root->left && !root->right) ans.push_back(root->data);
        
//         leaves(root->left);
//         leaves(root->right);
//     }
    
//     void right(Node* root){
//         if(!root) return;
//         if(!root->left && !root->right) return;
        
//         if(!root->right){
//             right(root->left);
//         }else{
//             right(root->right);
//         }
//         ans.push_back(root->data);
//     }
//     vector <int> boundary(Node *root)
//     {
//         //Your code here
//         if(!root) return ans;
//         ans.push_back(root->data);
//         if(!root->left && !root->right) return ans;
        
//         left(root->left);
//         leaves(root);
//         right(root->right);
        
//         return ans;
//     }
// };