#include<stdio.h>

struct Array
{
	int* A;
	int size;
	int length;
};

void Display(struct Array arr)
{
	for (int i = 0; i <arr.length; i++)
	{
		printf("%d ", arr.A[i]);
	}
}

int BinarySearch(struct Array arr, int key)
{
	int l, mid, h;
	l = 0;
	h = arr.length;

	while (l <= h)
	{
		mid = (l + h) / 2;
		if (key == arr.A[mid])
			return mid;
		else if (key < arr.A[mid])
			h = mid - 1;
		else
			l = mid + 1;
	}

	return 0;
}

int main()
{
	struct Array arr = {{2,3,4,5,6}, 20, 5 };

	printf("%d\n", BinarySearch(arr, 5));

	Display(arr);

	return 0;

}