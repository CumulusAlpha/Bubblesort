#include<stdio.h>
void Bubble(int* arr, int k) {
	for (int i = 0; i < k - 1; i++)
	{
		for (int j = 0; j < k - 1 - i; j++)
		{

			if (arr[j] > arr[j + 1])
			{
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int k = sizeof(arr)/sizeof(int);
	Bubble(arr, k);
	for (int q = 0; q < 10; q++)
	{
		printf("%d\n", arr[q]);
	}
	printf("star Nb");
	return 0;

}
