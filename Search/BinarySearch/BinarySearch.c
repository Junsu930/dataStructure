#include <stdio.h>
#include <stdlib.h>
#include "Point.h"

Point* BinarySearch(Point PointList[], int Size, double Target)
{
	int Left, Right, Mid;

	Left = 0;
	Right = Size - 1; 
	
	while (Left <= Right)
	{
		Mid = (Left + Right) / 2;
		
		if (Target == PointList[Mid].point)
			return &(PointList[Mid]);
		else if (Target > PointList[Mid].point)
			Left = Mid + 1;
		else
			Right = Mid - 1;
	}

	return NULL;
}

int main(void)
{
	int Length = sizeof DataSet / sizeof DataSet[0];

	Point* found = NULL;

	qsort((void*)DataSet, Length, sizeof(Point), ComparePoint);


	// 구매포인트가 671.78점인 고객 찾기
	found = BinarySearch(DataSet, Length, 671.78);
	
	printf("found... ID: %d, Point: %f \n", found->id, found->point);

	return 0;
}