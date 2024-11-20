#include "Diffirentiator.h"

Node* NewNode(unsigned type, char* value, Node* Left_Node, Node* Right_Node)
{
    assert(value);
    Node* newnode = { 0 };

    newnode->type = type;
    newnode->value = value;
    newnode->left = Left_Node;
    newnode->right = Right_Node;

    return newnode;

}
