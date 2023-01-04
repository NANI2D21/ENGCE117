#include <stdio.h>
int main() {
  int n=4,arr[4][4]={
	{19,18,17,16},{29,28,27,90},
	{39,38,37,70},{44,41,42,46}
};
  for (int a = 0; a < 4; a++) {
    for (int b = 0; b < 4; b++) {
      printf("%d ", arr[a][b]);
    }
    printf("\n");
  }
  printf("=========== \n");
  int(*j)[4] = arr;
  j[0][3] = 99;
  for (int a = 0; a < 4; a++) {
    for (int b = 0; b < 4; b++) {
      printf("%d ", arr[a][b]);
    }
    printf("\n");
  }
  return 0;
}
