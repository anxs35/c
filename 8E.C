#include <stdio.h>
#include <stdlib.h>

void getMatrix(int rows, int cols, int matrix[rows][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("Enter the element at row %d, column %d: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }
}

int main() {
  int rows, cols;

  printf("Enter the number of rows in the matrix: ");
  scanf("%d", &rows);

  printf("Enter the number of columns in the matrix: ");
  scanf("%d", &cols);

  // Create the two matrices
  int A[rows][cols];
  int B[cols][rows];

  // Get the elements of the matrices from the user
  getMatrix(rows, cols, A);
  transpose(A, B, rows, cols);

  // Multiply the two matrices
  int C[rows][rows];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < rows; j++) {
      C[i][j] = 0;
      for (int k = 0; k < cols; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  // Print the product matrix
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < rows; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}

void transpose(int A[rows][cols], int B[cols][rows], int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      B[j][i] = A[i][j];
    }
  }
}
