//basic array implementation using c

#include <stdio.h>

struct Array
{
	int A[20];
	int size;
	int length;
};

void Display(struct Array arr)
{
	printf("\nElements are\n");
	
	for(int i = 0 ; i < arr.length ; i++)
	{
		printf("%d\n",arr.A[i]);
	}
}

int main()
{
	struct Array arr = {{1,2,3,4,5,6,7,8},20,8};

	Display(arr);
	
	return 0;
}
