#include <stdio.h>
int main() {
  int row, col,i,j;
  printf("How many rows and col?: ");
  scanf("%d %d",&row,&col);

  int a[row*col];
  for ( i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      printf("a[%d][%d] : ", i, j);
      scanf("%d", &a[i*col+j]);
    }
  }

  return 0;
}

