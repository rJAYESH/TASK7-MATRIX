#include<stdio.h>
int main()
{
	int matrix[3][3],i,j;
	printf("Input elements in the matrix : \n");
	for (i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("Matrix-[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
	    }
	}
	printf("\nDisplaying the matrix  : \n\n");
	for (i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("%d\t",matrix[i][j]);
	    }
	printf("\n");
	}
}
