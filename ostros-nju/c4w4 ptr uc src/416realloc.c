/*
* File:   main.c
* Author: Dr. T
416 GettingMoreMemory
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
* Demonstrates allocating more memory as needed
*/
int main(int argc, char** argv)
{
	const int GROW_AMOUNT = 2;

	// initialize count and capacity and allocate memory
	int count = 0;
	int capacity = 2;
	int* pNumbers = malloc(capacity * sizeof(int));

	// check for allocation failure
	if (pNumbers == NULL)
	{
		return (EXIT_FAILURE);
	}

	// get numbers from user until they enter -1
	int n = 0;
	while (n != -1)
	{
		// get user input
		printf("Enter a number (-1 to quit): ");
		scanf("%d", &n);
		if (n != -1)
		{
			// check for need to allocate more memory
			if (count == capacity)
			{
				// increase capacity and get more memory
				capacity *= GROW_AMOUNT;
				pNumbers = realloc(pNumbers, capacity * sizeof(int));

				// check for allocation failure
				if (pNumbers == NULL)
				{
					return (EXIT_FAILURE);
				}

				// output for demonstration purposes
				printf("\nReallocated, new capacity: %d\n", capacity);
			}

			*(pNumbers + count) = n;
			count++;
		}
	}

	// free memory
	free(pNumbers);
	pNumbers = NULL;

	return (EXIT_SUCCESS);
}

