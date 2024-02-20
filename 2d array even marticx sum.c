#include<stdio.h>
int main()
{
    int A[10][10],row,col,i,j,n;
    int sum =0;
    printf("please,enter your row number : ");
    scanf("%d",&row);
    printf("please,enter your col number :");
    scanf("%d",&col);

    printf("enter your marticx element :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }

    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%10d ",A[i][j]);
            if(A[i][j]%2==0)
                sum=sum+A[i][j];

        }
        printf("\n");
    }
    {
        printf("\n even number sum is :%d",sum);
    }


}

