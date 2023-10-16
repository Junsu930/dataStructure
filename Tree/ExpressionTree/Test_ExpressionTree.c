#include "ExpressionTree.h"

int main(void)
{
	ETNode* Root = NULL;

	char PostExpression[20] = "71*52-/";

	ET_BuildeExpressionTree(PostExpression, &Root);

	printf("Preorder ...\n");
	ET_PreorderPrintTree(Root);
	printf("\n\n");

	printf("Inorder ...\n");
	ET_InorderPrintTree(Root);
	printf("\n\n");

	printf("Postorder ...\n");
	ET_PostorderPrintTree(Root);
	printf("\n");

	printf("Evaluation Result : %f \n", ET_Evaluate(Root));

	ET_DestroyTree(Root);

	return 0;
}