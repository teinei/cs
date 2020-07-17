/*
* File:   main.c
* Author: Dr. T
415 DynamicMemoryAllocation
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
* Demonstrates dynamic memory allocation
*/
int main(int argc, char** argv)
{
	int count;

	// get valid array size
	printf("Number of scores to enter (1-5): ");
	scanf("%d", &count);
	while (count < 1 || count > 5)
	{
		printf("\n");
		printf("Number of scores must be between 1 and 5\n");
		printf("Number of scores to enter (1-5): ");
		scanf("%d", &count);
	}

	// allocate memory for scores
	int* pScores = malloc(count * sizeof(int));

	// check for failed memory allocation
	if (pScores == NULL)
	{
		return EXIT_FAILURE;
	}

	// read in scores
	for (int i = 0; i < count; i++)
	{
		// prompt for and get valid test score
		printf("Enter score %d (0-100): ", i + 1);
		scanf("%d", pScores + i);
		while (*(pScores + i) < 0 || *(pScores + i) > 100)
		{
			printf("\n");
			printf("Score must be between 0 and 100\n");
			printf("Enter score %d (0-100): ", i + 1);
			scanf("%d", pScores + i);
		}
	}

	// print test scores
	printf("\n");
	for (int i = 0; i < count; i++)
	{
		printf("Score %d: %d\n", i + 1, *(pScores + i));
	}

	// free memory
	free(pScores);
	pScores = NULL;

	return (EXIT_SUCCESS);
}

