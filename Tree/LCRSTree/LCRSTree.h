#ifndef LCRS_TREE_H
#define LCRS_TREE_H
#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


typedef char ElementType;

typedef struct tagLCRSNode
{
	struct tagLCRSNode* LeftChild;
	struct tagLCRSNode* RightSibling;

	ElementType Data;

} LCRSNode;

LCRSNode* LCRS_CreateNode(ElementType NewData);

void LCRS_DestroyNode(LCRSNode* Node);
void LCRS_DestroyTree(LCRSNode* Root);

void LCRS_AddChildNode(LCRSNode* Parent, LCRSNode* Child);
void LCRS_PrintTree(LCRSNode* Node, int Depth);

void LCRS_PrintNodesAtLevel(LCRSNode* Node, int Level);



#endif // !LCRS_TREE_H
