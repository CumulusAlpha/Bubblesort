#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "bubble.h"
void Bubble(int *arr, int k) {
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