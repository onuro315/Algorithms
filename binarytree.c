#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *l, *r;
};
  
struct node *new(int num)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->l = temp->r = NULL;
    return temp;
}

struct node* insert(struct node* node, int data)
{
    if (node == NULL)
    {
       return new(data);
    }

    if (data < node->data)
    {
        node->l  = insert(node->l, data);
    }
    else if (data > node->data)
    {
        node->r = insert(node->r, data);
    }

    return node;
}

struct node *root = NULL;

void ldr(struct node *root)
{
    if (root != NULL)
    {
        ldr(root->l);
        printf("%d \n", root->data);
        ldr(root->r);
    }
}

void lrd(struct node *root)
{    
	if (root != NULL)
    {
        ldr(root->l);
	ldr(root->r);
        printf("%d \n", root->data);
    }
}

void dlr(struct node *root)
{   
	if (root != NULL)
    {
	printf("%d \n", root->data);
        ldr(root->l);
	ldr(root->r);
    }
}

int main()
{
    
    root = insert(root, 6);	
    insert(root, 5);
    insert(root, 8);
    insert(root, 7);
    insert(root, 2);
    insert(root, 4);
    insert(root, 1);
   
    printf("Inorder:\n");
    ldr(root);
    printf("Postorder:\n");
    lrd(root);
    printf("Preorder:\n");
    dlr(root);
  
    return 0;
}
