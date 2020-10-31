#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// This is a brute force algorithm. Better will be done in 5x5 and 7X7 katas
static const int N = 4;
static const int NN = 4 * 4;

bool TestRow (int row, int **grid, int *clues) {
  int encountered[N + 1];
  int *gridRow = grid[row];
  int currentHeight = 0, seen = 0;
  bool rowComplete = true;

  memset(encountered, 0, sizeof(encountered));
  int clue = clues[NN - 1 - row];
  for (int i = 0; i < N; i++) {
    if (gridRow[i] == 0)
      rowComplete = false;
    else {
      if (encountered[gridRow[i]]++ > 0)
        return false;

      if (gridRow[i] > currentHeight) {
        currentHeight = gridRow[i];
        seen++;
      }
    }
  }

  if (clue && (seen > clue || (seen < clue && rowComplete)))
    return false;

  if (rowComplete) {
    currentHeight = seen = 0;
    clue = clues[row + 4];
    for (int i = N - 1; i >= 0; i--) {
      if (gridRow[i] > currentHeight) {
          currentHeight = gridRow[i];
          seen++;
      }
    }

    if (clue && seen != clue)
      return false;
  }

  return true;
}

bool TestCol (int col, int **grid, int *clues) {
  int encountered[N + 1];
  int currentHeight = 0, seen = 0;
  bool colComplete = true;

  memset(encountered, 0, sizeof(encountered));
  int clue = clues[col];
  for (int j = 0; j < N; j++) {
    if (grid[j][col] == 0)
      colComplete = false;
    else {
      if (encountered[grid[j][col]]++ > 0)
        return false;

      if (grid[j][col] > currentHeight) {
        currentHeight = grid[j][col];
        seen++;
      }
    }
  }

  if (clue && (seen > clue || (seen < clue && colComplete)))
    return false;

  if (colComplete) {
    currentHeight = seen = 0;
    clue = clues[3 * N - 1 - col];
    for (int j = N - 1; j >= 0; j--) {
      if (grid[j][col] > currentHeight) {
        currentHeight = grid[j][col];
        seen++;
      }
    }

    if (clue && seen != clue)
      return false;
  }

  return true;
}

int** SolvePuzzle (int *clues) {
  int ** result = (int**) malloc (N * sizeof (int*));

  for (int i = 0; i < N; i++)
    result[i] = (int*) calloc (N, sizeof(int));

  int currentSquare = 0;
  while (currentSquare >= 0 && currentSquare < NN) {
    int currentRow = currentSquare / N;
    int currentCol = currentSquare % N;

    if (++result[currentRow][currentCol] > N) {
      result[currentRow][currentCol] = 0;
      currentSquare--;
    }
    else
      if (TestRow(currentRow, result, clues) && TestCol(currentCol, result, clues))
        currentSquare++;
  }

  return result;
}
