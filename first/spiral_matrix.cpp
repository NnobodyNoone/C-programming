#include <iostream>
using namespace std;
int main() {
  int k = 3;
  int x1 = 0, y1 = 0;
  int X2 = k - 1, Y2 = k - 1;

  int matrix[k][k];
  int num = 1;

  for (int z=0;z<k*k;z++) {

    for (int i = y1; i <= Y2; i++) {
      matrix[x1][i] = num++;
    }

    for (int j = x1+1; j <= X2; j++) {
      matrix[j][Y2] = num++;
    }
    if (x1 < X2 && y1 < Y2) {
      for (int a = Y2 - 1; a > y1; a--) {
        matrix[X2][a] = num++;
      }
      for (int b = X2; b > x1; b--) {
        matrix[b][y1] = num++;
      }
    }
    x1++;
    X2--;
    y1++;
    Y2--;
  }

  for (int row = 0; row < k; row++) {
    for (int column = 0; column < k; column++) {
      cout << matrix[row][column] << " ";
    }
  }
}