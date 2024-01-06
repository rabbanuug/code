// C Program Illustrating Naive Approach to
// Find if There is a Pair in A[0..N-1] with Given Sum

// Importing all libraries
#include <stdio.h>

int isPairSum(int A[], int N, int X)
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			// as equal i and j means same element
			if (i == j)
				continue;

			// pair exists
			if (A[i] + A[j] == X)
				return 1;

			// as the array is sorted
			if (A[i] + A[j] > X)
				break;
		}
	}

	// No pair found with given sum.
	return 0;
}

// Driver Code
int main()
{
	int arr[] = { 2, 3, 5, 8, 9, 10, 11 };
	int val = 17;
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	// Function call
	printf("%d", isPairSum(arr, arrSize, val));

	return 0;
}
