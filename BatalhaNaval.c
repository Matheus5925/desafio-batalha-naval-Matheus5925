#include <stdio.h>
#include <string.h>

#define LINES 10
#define COLUMNS 10

int main()
{

  int table[LINES][COLUMNS] = {0};
  int sharpVertical[3] = {3, 3, 3};
  int sharpHorizontal[3] = {3, 3, 3};

  table[1][2] = sharpVertical[0];
  table[1][3] = sharpVertical[1];
  table[1][4] = sharpVertical[2];

  table[5][3] = sharpVertical[0];
  table[6][3] = sharpVertical[1];
  table[7][3] = sharpVertical[2];

  for (int i = 0; i < LINES; i++)
  {
    for (int j = 0; j < COLUMNS; j++)
    {
      printf("%d ", table[i][j]);
    }
    printf("\n");
  }

  return 0;
}