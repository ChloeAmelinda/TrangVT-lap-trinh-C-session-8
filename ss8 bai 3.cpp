#include<stdio.h>
int main()
{
	// khoi tao
	int number,i,j;
	int arr[number][number];
	
	printf("nhap so : ");
	scanf("%d", &number);
	
	for( i =0; i <number ; i++)
	{
		for( j =0; i<number ;i++)
		{
			arr[i][j] = i*number + j*number;
		}
	}
	printf("ma tran : \n");
	for(i =0;i<number;i++)
	{
		for(j=0;j<number;j++)
		{
			printf(" %d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
