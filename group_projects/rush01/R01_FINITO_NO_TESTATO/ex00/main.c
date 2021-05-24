#include <stdio.h>

int main() {
  int **table;
  int **clues;
  table = (int **)malloc(5*sizeof(int *));
  for(int i = 0; i<4; i++)
  {
      
    table[i] = (int *)malloc(5*sizeof(int));
    for(int j=0; j < 4; j++)
        table[i][j] = 0;
  }
  
  clues = (int **)malloc(5*sizeof(int *));
  for(int i = 0; i<4; i++)
  {
      
    clues[i] = (int *)malloc(5*sizeof(int));
    for(int j=0; j < 4; j++)
    {
        if (i%2)
        clues[i][j] = j+1;
        else 
        clues[i][j] = 4-j;
    }
  }
  clues[0][0]
  fill_manager_row(table,clues);
  fill_manager_col(table,clues);
  for(int i = 0; i<4; i++)
  {
    for(int j=0; j < 4; j++)
        printf("%d ",clues[i][j]);
    printf("\n\n");
  }
  for(int i = 0; i<4; i++)
  {
    for(int j=0; j < 4; j++)
        printf("%d ",table[i][j]);
    printf("\n");
  }
  
  return 0;
}