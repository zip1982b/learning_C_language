#include <stdio.h>

int main(void)
{
    int col = 4; 
    int row = 3;
    int t, i, num[row][col];

    for(t=0; t<3; ++t)
        for(i=0; i<4; ++i)
            num[t][i] = (t*4)+i+1;

  /* вывод на экран */
    printf("%5s", " ");
    for(int k=0; k<col; k++) printf("%3d ", k);
    printf("\n");
    printf("    +---------------");
    printf("\n");
  for(t=0; t<3; ++t) {
      printf("%3d ", t);
      printf("|");
      for(i=0; i<4; ++i) printf("%3d ", num[t][i]);
      printf("\n");
  }
  printf("num[2][3] = %d\n", num[2][3]);

  return 0;
}
