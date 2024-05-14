#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
//newNode()allocates a new node
//with the given data and NULL left and right pointers.
struct node* newNode(int data){
    //Allocate memory for new node
    struct node* node = (struct node*)malloc(sizeof(struct node));
    //Assign data to this node
    node->data=data;
    //initialize left and right children as NULL
    node->left =NULL;
    node->right = NULL;
    return(node);
}
void inorder(temp->left){
    if(temp == NULL){
        return;
    }
    inorder(temp->left);
    printf("%d",temp->data);
    inorder(temp->right);
}
void preorder(struct node* temp){
    if(temp==NULL){
        return;
    }
    printf("%d",temp->data);
    preorder(temp->left);
    preorder(temp->right);
}

int main(int argc, char* argv[])