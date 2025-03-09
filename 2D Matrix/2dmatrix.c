#include <stdio.h>
int result[100][100];
void input (int row,int col,int matrix1[100][100]);//declaration
void input (int row,int col,int matrix1[100][100])//defitination
{
    int i,j;
    printf ("\n enter the element of matrix1 = ");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf ("\n element of matrix1[%d][%d]= ",i,j);
            scanf ("%d",&matrix1[i][j]);
        }
    }
}
void display(int row,int col,int matrix1[100][100]);//declaration
void display(int row,int col,int matrix1[100][100])//defination
{
    int i,j;
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf (" %d",matrix1[i][j]);
        }
        printf ("\n");
    }
}
int  multi (int row,int col,int a[100][100] ,int b[100][100]);//declration
int  multi (int row,int col,int a[100][100] ,int b[100][100])//defination
{
    int i,j,k;
    if (col != row) 
    {
        printf("\nMatrix multiplication is not possible (columns of matrix1 must equal rows of matrix2)\n");
        return 1;
    }
    
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            result[i][j]=0;
        }
    }
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            for (k = 0; k < col; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\nThe result of matrix multiplication is:\n");
    display(row, col, result);
}
int main()
{
    int row,col,i,j;
    int a[100][100],b[100][100],result[100][100];
    printf ("\n 2D array multiplication program.");
    printf ("\n enter the row and col value for matrix 1 = \n");
    scanf ("%d %d",&row,&col);
    printf ("\n enter the row and col value for matrix 2 = \n");
    scanf ("%d %d",&row,&col);
    if (col != row)
    {
        printf ("\n number of cols are not same");
    }
    
    input (row,col,a);//calling
    printf ("\n the value of matrix 1 : \n");
    display(row,col,a);//calling
    input (row,col,b);//calling
    printf ("\n the value of matrix 2 : \n");
    display(row,col,b);//calling
   
    multi(row, col, a, b);
    return 0;
}
