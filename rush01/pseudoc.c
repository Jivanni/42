#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//

int checkRow(int* row, int L, int R){
  int See = -1;  // number of visible boxes
  int count=0;						//1234
  for(int i=0;i<4;i++){
    if(See == 4) break;  // case 1234
    if(See<row[i]){
      See=row[i];  //see = 	1
      count++;
    }
  }
  if (count!=L && L!=0) return 0;
  See = -1;
  count=0;
  for(int i=3;i>-1;i--){
    if(See == 4) break;
    if(See<row[i]){
      See=row[i];
      count++;
    }
  }
  if (count!=R && R!=0) return 0;
  return 1;
}
void swap(int* row, int fst, int snd){
  int temp=row[fst]+row[snd];
  row[snd]=temp-row[snd];
  row[fst]=temp-row[snd];
}
void Transpose(int outcomes[][4], int column, int* rowT){
  for(int i=0;i<4;i++) rowT[i]=outcomes[i][column];
}
int isRepeat(int* row, int size){
  for(int i=0;i<size;i++){
    int num=row[i];
    for(int j=0;j<size;j++)
      if(num==row[j] && i!=j) return 1;
  }
  return 0;
}

int** final;

void heapA(int outcomes[][4], int size, int n, int rowIndex, int* clues){
  int* row=outcomes[rowIndex];
  if(size==1){
    /*do something*/
    if(checkRow(row, clues[19-(rowIndex+4)], clues[rowIndex+4])){
      if(rowIndex==3){
        int rowT[4];
        for(int i=0;i<4;i++){
          Transpose(outcomes, i, rowT);
          if(isRepeat(rowT, 4)) return;
          if(!(checkRow(rowT, clues[i], clues[11-i]))) return;
        }
        for(int i=0;i<4;i++){
          for(int j=0;j<4;j++)final[i][j]=outcomes[i][j];
        }
        return;
      }
      heapA(outcomes, 4, n, rowIndex+1, clues);
    }
    return;
  }
  for(int i=0;i<size;i++){
    heapA(outcomes,size-1,n, rowIndex, clues);
    if(size%2==1) swap(row, 0, size-1);
    else swap(row, i, size-1);
  }
}

int** SolvePuzzle (int *clues) {
  if(clues == 0) return 0;
  int tempOutcomes[4][4];
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++) tempOutcomes[i][j]=j+1;
  }
  final=malloc(sizeof(int*)*4);
  for(int i=0;i<4;i++){
    int* ptr=malloc(sizeof(int)*4);
    final[i]=ptr;
  }
  heapA(tempOutcomes, 4, 4, 0, clues);
  return final;
}


int** SolvePuzzle (int *clues);

static int clues[][16] = {
{ 2, 2, 1, 3,		//TOP
  2, 2, 3, 1,		//RIGHT
  1, 2, 2, 3,		//BOT
  3, 2, 1, 3 },		//LEFT
{ 0, 0, 1, 2,
  0, 2, 0, 0,
  0, 3, 0, 0,
  0, 1, 0, 0 }
};

int main()

{
	for(int i = 0; i < 16; i++)
	{
		int *res = *SolvePuzzle(*clues);
		printf("%d", res[i]);
		if ((i + 1) % 4 == 0)
			printf("\n");
	}

}
