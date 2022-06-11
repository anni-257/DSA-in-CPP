#include <bits/stdc++.h>
using namespace std;

class BTnode
{
public:
    int val;
    BTnode *lchild;
    BTnode *rchild;
    BTnode() : val(0), lchild(nullptr), rchild(nullptr) {}
    BTnode(int _val) : val(_val), lchild(0), rchild(0) {}
    BTnode(int _val, BTnode *left, BTnode *right) : val(_val), lchild(left), rchild(right) {}
};

class Tree
{
    BTnode *root;

public:
    Tree() { root = nullptr; }
    BTnode *getnode() { return root; }
    void createBT();                                                // Done
    void preOrder(BTnode *p);                                       // Done
    void inOrder(BTnode *p);                                        // Done
    void postOrder(BTnode *p);                                      // Done
    vector<int> levelByLevel();                                     // Done
    vector<vector<int>> BFS();                                      // Done
    vector<int> IterativePreOrder();                                // Done
    vector<int> preOrder();                                         // Done
    vector<int> IterativeInOrder();                                 // Done
    vector<int> IterativePostOrder();                               // Done
    int maxHeight(BTnode *);                                        // Done
    bool isBalance(BTnode *p);                                      // Done O(n^2);
    bool isBalanced(BTnode *root) { return dfsHeight(root) != -1; } // Done O(n);
    int dfsHeight(BTnode *root);
    int diameterOfTree(BTnode *root){int dia=0; diameterHeight(root,dia); return dia;}
    int diameterHeight(BTnode*,int&);
};

void Tree::createBT()
{
    BTnode *newnode, *p;
    int _val;
    queue<BTnode *> q;
    cout << "Enter Root Value: ";
    cin >> _val;
    root = new BTnode(_val);
    q.push(root);

    while (!q.empty())
    {
        p = q.front();
        q.pop();
        cout << "Enter " << p->val << " left child value: ";
        cin >> _val;
        if (_val != -1)
        {
            newnode = new BTnode(_val);
            p->lchild = newnode;
            q.push(p->lchild);
        }
        cout << "Enter " << p->val << " right child value: ";
        cin >> _val;
        if (_val != -1)
        {
            newnode = new BTnode(_val);
            p->rchild = newnode;
            q.push(p->rchild);
        }
    }
}

void Tree::preOrder(BTnode *p)
{
    if (p)
    {
        cout << p->val << " ";
        preOrder(p->lchild);
        preOrder(p->rchild);
    }
}

void Tree::inOrder(BTnode *p)
{
    if (p)
    {
        inOrder(p->lchild);
        cout << p->val << " ";
        inOrder(p->rchild);
    }
}

void Tree::postOrder(BTnode *p)
{
    if (p)
    {
        postOrder(p->lchild);
        postOrder(p->rchild);
        cout << p->val << " ";
    }
}

vector<int> Tree::levelByLevel()
{
    BTnode *p;
    vector<int> level;
    queue<BTnode *> q;
    if (!root)
        return level;
    q.push(root);
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        level.emplace_back(p->val);
        if (p->lchild)
            q.push(p->lchild);
        if (p->rchild)
            q.push(p->rchild);
    }
    return level;
}

vector<vector<int>> Tree::BFS()
{
    BTnode *p;
    int size;
    vector<vector<int>> ans;
    if (!root)
        return ans;
    queue<BTnode *> q;
    q.push(root);
    while (!q.empty())
    {
        size = q.size();
        vector<int> level;
        for (int i = 0; i < size; ++i)
        {
            p = q.front();
            q.pop();
            level.emplace_back(p->val);
            if (p->lchild)
                q.push(p->lchild);
            if (p->rchild)
                q.push(p->rchild);
        }
        ans.emplace_back(level);
    }
    return ans;
}

vector<int> Tree::IterativePreOrder()
{
    BTnode *p;
    vector<int> preOrder;
    if (!root)
        return preOrder;
    stack<BTnode *> st;
    st.push(root);
    while (!st.empty())
    {

        p = st.top();
        st.pop();
        preOrder.emplace_back(p->val);

        if (p->rchild)
            st.push(p->rchild);

        if (p->lchild)
            st.push(p->lchild);
    }
    return preOrder;
}
vector<int> Tree::preOrder()
{
    BTnode *p;
    vector<int> preOrder;
    if (!root)
        return preOrder;
    p = root;
    stack<BTnode *> st;
    while (p || !st.empty())
    {
        if (p)
        {
            preOrder.emplace_back(p->val);
            st.push(p);
            p = p->lchild;
        }
        else
        {
            p = st.top();
            st.pop();
            p = p->rchild;
        }
    }
    return preOrder;
}

vector<int> Tree::IterativeInOrder()
{
    BTnode *p;
    vector<int> inOrder;
    if (!root)
        return inOrder;
    stack<BTnode *> st;
    p = root;
    while (p || !st.empty())
    {
        if (p)
        {
            st.push(p);
            p = p->lchild;
        }
        else
        {
            p = st.top();
            st.pop();
            inOrder.emplace_back(p->val);
            p = p->rchild;
        }
    }
    return inOrder;
}

vector<int> Tree::IterativePostOrder()
{
    BTnode *p, *helper;
    long int temp;
    vector<int> postOrder;
    if (!root)
        return postOrder;
    stack<BTnode *> st;
    p = root;
    while (p || !st.empty())
    {
        if (p)
        {
            st.push(p);
            p = p->lchild;
        }
        else
        {
            temp = (long int)st.top();
            st.pop();
            if (temp > 0)
            {
                st.push((BTnode *)-temp);
                helper = (BTnode *)temp;
                p = helper->rchild;
            }
            else
            {
                helper = (BTnode *)-temp;
                postOrder.emplace_back(helper->val);
                p = nullptr;
            }
        }
    }
    return postOrder;
}

int Tree::maxHeight(BTnode *p)
{
    if(!p) return 0;

    int lh=maxHeight(p->lchild);
    int rh=maxHeight(p->rchild);

    return 1+max(lh,rh);
}

int Tree::dfsHeight(BTnode *p)
{ // O(N)
    if (!p)
        return 0;

    int lh = dfsHeight(p->lchild);
    if (lh == -1)
        return -1;
    int rh = dfsHeight(p->rchild);
    if (rh == -1)
        return -1;

    if (abs(lh - rh) > 1)
        return -1;

    return max(lh, rh) + 1;
}

bool Tree::isBalance(BTnode *p)
{ // O(N^2)
    int lh, rh;

    if (!root)
        return true;

    lh = maxHeight(p->lchild);
    rh = maxHeight(p->rchild);

    if (abs(lh - rh) > 1)
        return false;

    bool left = isBalance(p->lchild);
    bool right = isBalance(p->rchild);

    if (!left || !right)
        return false;

    return true;
}

int Tree::diameterHeight(BTnode* root,int& diameter){
    if(!root)
        return 0;
    
    int lh=diameterHeight(root->lchild,diameter);
    int rh=diameterHeight(root->rchild,diameter);

    diameter=max(diameter,lh+rh+1);

    return 1+max(lh,rh);
}



int main()
{
    vector<int> temp;
    cout << "----Create Binary Tree----" << endl;
    Tree bt;
    bt.createBT();
    cout << "PreOrder: ";
    bt.preOrder(bt.getnode());
    cout << "\nAbdul bari Iterative preOrder: ";
    temp = bt.preOrder();
    for (auto x : temp)
        cout << x << " ";

    cout << "\nStriver Iterative preOrder: ";
    temp = bt.IterativePreOrder();
    for (auto x : temp)
        cout << x << " ";

    cout << "\ninOrder: ";
    bt.inOrder(bt.getnode());
    cout << "\nIterative inOrder: ";
    temp = bt.IterativeInOrder();
    for (auto x : temp)
        cout << x << " ";

    cout << "\npostOrder: ";
    bt.postOrder(bt.getnode());
    cout << "\nIterative postOrder: ";
    temp = bt.IterativePostOrder();
    for (auto x : temp)
        cout << x << " ";

    cout << "\nLevelByLevel Traversal: ";
    temp = bt.levelByLevel();
    for (auto x : temp)
        cout << x << " ";

    cout << "\nBFS Traversal" << endl;
    vector<vector<int>> bfs = bt.BFS();
    for (auto x : bfs)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}

