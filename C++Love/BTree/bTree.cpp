#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                // queue still has some child ndoes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(node *&root)
{
    queue<node *> q;

    cout << "Enter data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);

    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
};

int i = 0;

bool isIdentical(node *r1, node *r2)
{
    cout << "call " << ++i << endl;
    // base case
    if (r1 == NULL && r2 == NULL)
    {
        return true;
    }

    if (r1 == NULL && r2 != NULL)
    {
        return false;
    }

    if (r1 != NULL && r2 == NULL)
    {
        return false;
    }

    bool left = isIdentical(r1->left, r2->left);
    // cout << "call" << endl;
    bool right = isIdentical(r1->right, r2->right);

    bool value = r1->data == r2->data;

    if (left && right && value)
    {
        return true;
    }
    else
    {
        return false;
    }
};

int main()
{

    node *r1 = NULL;
    node *r2 = NULL;

    buildFromLevelOrder(r1);
    // 1 2 3 -1 -1 -1 -1
    buildFromLevelOrder(r2);
    // 1 2 3 -1 -1 -1 -1

    cout << isIdentical(r1, r2);

    // levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    // creating a Tree
    // root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level order
    // cout << "Printing the level order traversal output " << endl;
    // levelOrderTraversal(root);

    // cout << "inorder traversal is:  ";
    // inorder(root);

    // cout << endl
    //      << "preorder traversal is:  ";
    // preorder(root);

    // cout << endl
    //      << "postorder traversal is:  ";
    // postorder(root);

    return 0;
}