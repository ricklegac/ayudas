#include <stdio.h>
#include <math.h>

int main() {

  double distance[3][3] = {0};
  double myArray[3][3] = { {1, 2, 3}, {4 , 5, 6}, {7, 8, 9} };

  int i, j,k;
for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
        int temp = 0;

        for (k = 0; k < 3; k++) {
            temp += (int)sqrt(pow(myArray[i][k] - myArray[j][k], 2));
        }

        distance[i][j] = temp;
    }
}

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {

      printf("%f ", distance[i][j]);
      if (j == 2) {
        printf("n");
      }
    }
  }
  return 0;
}