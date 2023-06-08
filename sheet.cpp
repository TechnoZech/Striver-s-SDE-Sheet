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



//  Flattening a Linked List  ==============>>>

// Node *merge(Node* list1, Node*list2){
//     if(!list1) return list2;
//     else if(!list2) return list1;
//     Node *ans;
//     if(list1->data < list2->data){
//         ans = list1;
//         ans->bottom = merge(list1->bottom, list2);
//     } else {
//         ans = list2;
//         ans->bottom = merge(list1, list2->bottom);
//     }
//     return ans;
// }

// Node *flatten(Node *root)
// {
//    // Your code here
//    Node *ans = root, *ptr = root->next;
//    ans->next = NULL;
//    while(ptr){
//        Node *temp = ptr;
//        ptr = ptr->next;
//        temp->next = NULL;
//        ans = merge(ans, temp);
//    }
//    return ans;
// }


//  Kth Largest Element in an Array  ==============>>>

// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         priority_queue<int>pq;

//         for(int i=0; i<nums.size(); i++){
//             pq.push(nums[i]);
//         }

//         for(int i=0; i<k-1 ; i++){
//             pq.pop();
//         }

//         return pq.top();
//     }
// };
