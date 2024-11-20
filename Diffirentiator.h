#ifndef _DIFF_INCLUDED_
#define _DIFF_INCLUDED_

#include <stdio.h>
#include <assert.h>
#include <string.h>

enum OPERANDS
{
    ADD,//add
    SUB,//subtrection
    MUL,//multiply
    DIV,//division
};

enum TYPES
{
    NUM,//number
    VAR,//varible
    OP,//operand
};


typedef struct Node
{
    unsigned type;
    char*   value;
    Node*    left;
    Node*   right;

} Node;

Node* NewNode(unsigned type, char* value, Node* Left_Node, Node* Right_Node);


#endif
