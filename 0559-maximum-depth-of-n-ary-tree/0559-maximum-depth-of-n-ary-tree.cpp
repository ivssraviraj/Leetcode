/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    int maxDepth(Node* root) {

        if(!root) 
            return 0;
        int tmp=1;
        for(Node* child : root->children)
        {
            int h = 1 + maxDepth(child);
            if(h > tmp) tmp = h;
        }
        return tmp;        
    }
};