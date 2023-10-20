#include "BinarySearchTree.h"

void PrintSearchResult(int SearchTarget, BSTNode* Result)
{
	if (Result != NULL)
		printf("Found : %d \n", Result->Data);
	else
		printf("Not Found: %d \n", SearchTarget);

}

int main(void)
{
	BSTNode* Tree = BST_CreateNode(123);
	BSTNode* Node = NULL;


	BST_InsertNode(Tree, BST_CreateNode(22));
	BST_InsertNode(Tree, BST_CreateNode(9919));
	BST_InsertNode(Tree, BST_CreateNode(434));
	BST_InsertNode(Tree, BST_CreateNode(17));
	BST_InsertNode(Tree, BST_CreateNode(3));
	BST_InsertNode(Tree, BST_CreateNode(98));
	BST_InsertNode(Tree, BST_CreateNode(34));
	BST_InsertNode(Tree, BST_CreateNode(760));
	BST_InsertNode(Tree, BST_CreateNode(317));
	BST_InsertNode(Tree, BST_CreateNode(1));


	int SeacgTarget = 17;

	Node = BST_SearchNode(Tree, SeacgTarget);
	PrintSearchResult(SeacgTarget, Node);

	SeacgTarget = 118;

	Node = BST_SearchNode(Tree, SeacgTarget);
	PrintSearchResult(SeacgTarget, Node);

	BST_InorderPrintTree(Tree);
	printf("\n");

	printf("Removing 98 ...\n");


	Node = BST_RemoveNode(Tree, NULL, 98);

	BST_DestroyNode(Node);
	printf("\n");

	// �� ��� ����
	printf("Inserting 111 ... \n");

	BST_InsertNode(Tree, BST_CreateNode(111));
	BST_InorderPrintTree(Tree);
	printf("\n");
	
	
	return 0;
}