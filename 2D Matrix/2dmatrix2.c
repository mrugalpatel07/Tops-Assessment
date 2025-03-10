#include <stdio.h>
int result[100][100];
void input (int row,int col,int matrix1[100][100]);//declrastion
void input (int row, int col, int matrix1[100][100])//definastion
{
    int i,j;
    printf("\n enter the element of matrix1 = ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\n elememt of matrix1[%d][%d]= ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
}
void display(int row,int col,int matrix1[100][100]);//declarstion
void display(int row,int col,int matrix1[100][100])//definastion
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf(" %d",matrix1[i][j]);
        }
        printf("\n");
    }
}
int multi (int row,int col,int a[100][100],int b[100][100]);//declrastion
int multi ( int row,int col,int a[100][100],int b[100][100])//definastion
{
    int i,j,k;
    for(i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            result [i][j]=0;
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            for(k=0;k<col;k++)
            {
            result[i][j]+= a[i][k]*b[k][j];
            }
        }
    }
    printf("\n the result of matrix multiplicastion:\n");
display(row,col,result);

}

int main(){
    int row,col,i,j;
    int a[100][100],b[100][100],result[100][100];
    printf("\n 2d array multiplicastion pogram .");
    printf("\n row and col value add in matrix 1 = \n");
    scanf("%d %d",&row,&col);
    printf("\n rol and col value add in matrix 2 = \n");
    scanf("%d %d",&row,&col);
    if(col!=row)
    {
        printf("\n number are cols are not same");
    }
    input(row,col,a);//calling
    printf("\n the value of matrix 1 :\n");
    display(row,col,a);//calling
    input(row,col,b);//calling
    printf(" the value of matrix 2 : \n");
    display(row,col,b);//calling
    multi(row,col,a,b);

    return 0;
}