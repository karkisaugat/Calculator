#include <stdio.h>

// Adding matrix
void addition()
{
  printMatrixOperation();
  int row, column, a[100][100], b[100][100], sum[100][100], i, j;
  printf("\t\tEnter the number of rows : ");
  scanf("%d", &row);
  printf("\t\tEnter the number of columns : ");
  scanf("%d", &column);

  printf("\n\t\tEnter elements of 1st matrix:\n");
  for (i = 0; i < row; ++i)
    for (j = 0; j < column; ++j)
    {
      printf("\t\tEnter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("\t\tEnter elements of 2nd matrix:\n");
  for (i = 0; i < row; ++i)
    for (j = 0; j < column; ++j)
    {
      printf("\t\tEnter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  for (i = 0; i < row; ++i)
    for (j = 0; j < column; ++j)
    {
      sum[i][j] = a[i][j] + b[i][j];
    }

  printf("\n\t\tSum of two matrices: \n");
  for (i = 0; i < row; ++i)
  printf("\t\t");
    for (j = 0; j < column; ++j)
    {
      printf("%d ", sum[i][j]);
      if (j == column - 1)
      {
        printf("\n\n");
      }
    }
}

// Matrix multiplication
void multiplication()
{

  // ac for column of matrix A
  // ar for rows of matrix A
  // br for rows of matrix B
  // bc for columnns of matrix B
  printMatrixOperation();
  int ac, ar, i, j, k, br, bc, sum = 0;
  int a[100][100], b[100][100];
  int product[100][100];

  // Entering the rows and columns for matrix A
  printf("\t\tEnter the number of rows and columns of matrix A");
  scanf("%d %d", &ar, &ac);

  printf("\t\tThe elements of matrix A \n");
  for (i = 0; i < ar; i++)
  {
    for (j = 0; j < ac; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  printf("\n\t\tEnter the row and columns of matrix B");
  scanf("%d %d", &br, &bc);

  // Checking the condition of matrix multiplication
  if (ar != bc)
  {
    printf("\t\tThe matrix multiplication cannot be performed\n");
  }
  else
  {
    printf("\t\tElements of matrix B");
    for (i = 0; i < br; i++)
    {
      for (j = 0; j < bc; j++)
      {
        scanf("%d", &b[i][j]);
      }
    }
  }
  printf("\n");

  // Actual calculation
  for (i = 0; i < ar; i++)
  {
    for (j = 0; j < bc; j++)
    {
      for (k = 0; k < br; k++)
      {
        sum += a[i][k] * b[k][j]; // k is column for matrix a and row for matrix b.
      }
      product[i][j] = sum;
      sum = 0;
    }
  }

  // Result display
  for (i = 0; i < ar; i++)
  {
    for (j = 0; j < bc; j++)
    {
      printf("%d ", product[i][j]);
    }
    printf("\n");
  }
}

// Transpose the matrix
void transpose()
{
  printMatrixOperation();
  int row, column;
  printf("Enter the number of row: ");
  scanf("%d", &row);
  printf("Enter the number of column: ");
  scanf("%d", &column);

  int matrix[row][column];
  int i, j; 

  for ( i = 0; i < row; i++)
  {
      for (j = 0; j < column; j++)
      {
          printf("\t\tEnter the element for row %d and column %d:", i + 1, j + 1);
          scanf("%d", &matrix[i][j]);
      }
  }

  //Print the array.

  printf("\t\tThe matrix is:\n");

  for ( i = 0; i < row; i++)
  {
    printf("\t\t");
      for (j = 0; j < column; j++)
      {
          printf("%d", matrix[i][j]);
          printf(" ");
      }
      printf("\n");
  }

  //Transpose of matrix
  int transpose[column][row];

  for ( i = 0; i < row; i++)
  {
      for ( j = 0; j < column; j++)
      {
          transpose[j][i] = matrix[i][j];
      }
  }

  //Print the array.
  printf("\t\tThe transpose of matrix is:\n");

  for (i = 0; i < column; i++)
  {
    printf("\t\t");
      for ( j = 0; j < row; j++)
      {
          printf("%d", transpose[i][j]);
          printf(" ");
      }
      printf("\n");
  }
}

void matrixOperation() {
  printMatrixOperation();
  printf("\n\t\t1. Addition\n");
  printf("\n\t\t2. Multiplication\n");
  printf("\n\t\t3. Transpose\n");
  printf("\n\t\t0. Back to Main Menu\n");

  int choice = askChoice();
  
  validateChoice(choice, 1, 3);

  switch (choice)
  {
  case 1:
    cls();
    addition();
    break;
  case 2:
    cls();
    multiplication();
    break;
  case 3:
    cls();
    transpose();
    break;
  case 0:
    homepage();
    break;
  default:
    break;
  }


}