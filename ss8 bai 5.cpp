#include<stdio.h>
int main()
{
	int arr[2][3]={
	{12,3,4},
	{24,6,9}};
	int tong=0;
	for(int i=0; i<2 ;i++)
	{
		for(int j = 0; j<3 ;j++)
		{
			tong+=arr[i][j];
		}
	}
	printf("tong cac phan tu trong mang la : %d", tong);
	return 0;
}
