
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

//function to print the array
void printarray(int arr[], int size)
{
    int i,j;
    for(i=0; i<size; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("\n");
}

//function to swap the variables
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//permutation function
void permutation(int *arr, int start, int end)
{
    if(start==end)
    {
        printarray(arr, end+1);
        return;
    }
    int i;
    for(i=start;i<=end;i++)
    {
        //swapping numbers
        swap((arr+i), (arr+start));
        //fixing one first digit
        //and calling permutation on
        //the rest of the digits
        permutation(arr, start+1, end);
        swap((arr+i), (arr+start));
    }
}

int main()
{
    //taking input to the array
    int size = 4;
    int i;
    int arr[64] = {1,2,3,4};

 	int **board[4][64];
	permutation(arr, 0, size-1);

	for(int i = 0; i < 4; i++)
	{
		for (int j=0; j<64; j++)
		{
			*board[i][j] = &arr[j];
		}
	}
    //calling permutation function


	return 0;
}
