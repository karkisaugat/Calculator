#include <stdio.h>

void linearEquations()
{
  printSystemOfEquation();
  float A[20][20], c, x[10], sum = 0;
  int i, j, k, n;
  printf("\n\t\tEnter the order of matrix: ");
  scanf("%d", &n);
  printf("\n\t\tEnter the elements of the augmented matrix in row- wise:\n");
  for (i = 1; i <= n; i++)
  {
    // Number of column is one more than the number of rows is Gauss- elimimation method. So j<=n+1
    for (j = 1; j <= (n + 1); j++)
    {
      printf("\t\tA[%d][%d]: ", i, j);
      scanf("%f", &A[i][j]);
    }
  }
  for (j = 1; j <= n; j++)
  {
    for (i = 1; i <= n; i++)
    {
      if (i > j)
      { //Row number > Column number
        c = A[i][j] / A[i][j];
        for (k = 1; k <= n + 1; k++)
        {
          A[i][k] = A[i][k] - c * A[j][k]; // We have to convert into upper trianglar matrix from this loop
        }
      }
      printf("\n");
      printf("\t\tFor j=%d and i=%d", j, i);
      printf("\n");
      int x, y;
      for (x = 1; x <= n; x++)
      {
        for (y = 1; y <= (n + 1); y++)
        {
          printf("\t\t%.2f ", A[x][y]);
        }
        printf("\n");
      }
    }
  }

  x[n] = A[n][n + 1] / A[n][n]; //x3 =a34/a33
  // This loop is for bacckward substitution.
  for (i = n - 1; i >= 1; i--)
  {
    sum = 0;
    for (j = i + 1; j <= n; j++)
    {
      sum = sum + A[i][j] * x[j];
    }
    x[i] = (A[i][n + 1] - sum) / A[i][i];
  }
  printf("\n\t\tThe solution is: \n");
  for (i = 1; i <= n; i++)
  {
    printf("\n\t\tx%d=%f\t", i, x[i]); // x1,x2,x3 are the required solution
  }
}