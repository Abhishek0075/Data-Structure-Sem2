//max avoid this
//make 2 insert into 1 

#include<iostream>
using namespace std;

class tree
{
    int data;
    tree *left, *right;

    public:
    
    tree(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

    tree* insert(tree *root, int data)
    {
        if(root == NULL)
        {
            root = new tree(data);
            return root;
        }
        if(data <= root->data)
            root->left = insert(root->left, data);
        else
            root->right = insert(root->right, data);
        
        return root;
    }

    void insert(int data){
        insert(this,data);
    }

    void inorder()
    {
        if(this->left != NULL)
            this->left->inorder();

        cout << this->data <<" ";
        
        if(this->right != NULL)
            this->right->inorder();     
    }

    
    void preorder()
    {
        cout << this->data <<" ";

        if(this->left != NULL)
            this->left->preorder();
        
        if(this->right != NULL)
            this->right->preorder();     
    }

    void postorder()
    {
        if(this->left != NULL)
            this->left->postorder();
        
        if(this->right != NULL)
            this->right->postorder(); 

        cout << this->data <<" ";    
    }

    
};

int main()
{
    tree *root = new tree(50);
    root->insert(10);
    root->insert(14);
    root->insert(8);
    root->insert(36);
    root->insert(2);
    cout<<"Inorder traversal : ";
    root->inorder();
    cout<<"\nPreorder traversal : ";
    root->preorder();
    cout<<"\nPostorder traversal : ";
    root->postorder();
    root->insert(4);
    root->insert(25);
    cout<<"\n\nNew Inorder : ";
    root->inorder();

    return 0;
}