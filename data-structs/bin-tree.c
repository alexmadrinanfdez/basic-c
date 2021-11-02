#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int key;
    struct node * left;
    struct node * right;
} node_t;

void insert( node_t ** tree, int key );
node_t * search( node_t * tree, int key );
void print_tree( node_t * current );
void destroy_tree( node_t * tree );

int main()
{
    node_t * root = NULL;

    insert( &root, 5 );
    insert( &root, 8 );
    insert( &root, 4 );
    insert( &root, 3 );

    print_tree( root );
    destroy_tree( root );

    return 0;
}

void insert( node_t ** tree, int key )
{
    if( *tree == NULL ) {
        *tree = (struct node*) malloc( sizeof( struct node ) );
        (*tree)->key = key;
        (*tree)->left = NULL;    
        (*tree)->right = NULL;  
    }
    else if( key < (*tree)->key )
        insert( &(*tree)->left, key );
    else
        insert( &(*tree)->right, key );
}

node_t * search( node_t * tree, int key )
{
    if( tree != NULL ) {
        if( key == tree->key )
            return tree;
        
        else if( key < tree->key )
            return search( tree->left, key );
        
        else
            return search( tree->right, key);
    }
    else return NULL;
}

/* depth-first search */
void print_tree( node_t * current )
{
    if (current == NULL)         return;   /* security measure */
    if (current->left != NULL)   print_tree( current->left );
    if (current != NULL)         printf( "%d ", current->key );
    if (current->right != NULL)  print_tree( current->right );
}

void destroy_tree( node_t * tree )
{
    if( tree != 0 ) {
        destroy_tree( tree->left );
        destroy_tree( tree->right );
        free( tree );
    }
}