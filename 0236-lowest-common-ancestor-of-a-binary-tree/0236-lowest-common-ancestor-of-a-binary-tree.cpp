/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * };
 */

#pragma GCC optimize("Ofast,unroll-loops,fast-math")
#pragma GCC target("avx,avx2,fma,sse4,popcnt,lzcnt,bmi,bmi2")

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

static constexpr size_t mxal = alignof(max_align_t);
alignas(mxal) static unsigned char buf[256 * 1024 * 1024];
static size_t pos = 0;

void* operator new(size_t sz) {
    size_t pad = (mxal - (pos % mxal)) % mxal;
    pos += pad + sz;
    return (void*)(&buf[pos - sz]);
}

void* operator new[](size_t sz) { return operator new(sz); }

void operator delete(void*) noexcept {}
void operator delete[](void*) noexcept {}
void operator delete(void*, size_t) noexcept {}
void operator delete[](void*, size_t) noexcept {}

int speedUp = [] {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
private:
    TreeNode* p;
    TreeNode* q;
    TreeNode* ans; 
    
    int count;

    int dfs(TreeNode* node) {
        if (node == NULL) return 0;
        
        if (node == p || node == q) {
            ans = node;
            ++count;
            return 1;
        }
        
        int leftCount = dfs(node->left);
        
        // Optimization: only search the subtrees if the 2 LCA hasn't been found yet
        if (count<2) {
            int rightCount = dfs(node->right);

            if(leftCount==2 || rightCount == 2) return 2;

            // If one target is in the left and the other is in the right, this node is the LCA
            if (leftCount==1 && rightCount==1) {
                ans = node;
            }

            return leftCount + rightCount;
        }
        
        return leftCount;
    }

public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        this->p=p;
        this->q=q;
        // ans = NULL;
        // count = 0;

        dfs(root);

        return ans;
    }
};

