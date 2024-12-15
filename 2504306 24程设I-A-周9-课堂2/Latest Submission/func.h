void func(int n,int(*matrix)[n],int *row,int *col)
{
    matrix--;
    col--;
    matrix[0][0] = 0;
    for(int i = 1;i < n; i++)
    {
        matrix[i][0] = row[i];
    }
    for(int i = 1;i < n; i++)
    {
        matrix[0][i] = col[i];
    }

    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            matrix[i][j] = matrix[i-1][j] - matrix[i][j-1];
        }
    }
}