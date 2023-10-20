#include <stdlib.h>
#include <stdio.h>
#include "Point.h"


/*
void *bsearch(
	const void *key		// 찾고자하는 데이터 주소
	const void *base	// 데이터배열의 주소
	size_t num			// 데이터 요소의 개수
	size_t width		// 한 데이터 요소의 크기
	int (_ _cdecl *compare)(const void *, const void*) // 비교함수에 대한 포인터
)
*/

int ComparePoint(const void* _elem1, const void* _elem2)
{
	Point* elem1 = (Point*)_elem1;
	Point* elem2 = (Point*)_elem2;

	if (elem1->point > elem2->point)
		return 1;
	else if (elem1->point < elem2->point)
		return -1;
	else
		return 0;
}


int main(void)
{
	int Length = sizeof DataSet / sizeof DataSet[0];
	Point target;
	Point* found = NULL;

	qsort((void*)DataSet, Length, sizeof(Point), ComparePoint);

	target.id = 0;
	target.point = 671.78;

	found = bsearch((void*)&target, (void*)DataSet, Length, sizeof(Point), ComparePoint);

	printf("found... ID: %d, Point : %f \n", found->id, found->point);

	return 0;


}