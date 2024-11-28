#include<stdio.h>
int main()
{
	int arr[5][5]={
	 {12,23,34,45,56},
	 {1,2,3,4,5},
	 {2,4,6,8,10},
	 {1,3,5,7,9},
	 {10,20,30,40,50}
	};
	
	int sum=0;
	printf("duong cheo chinh la : ");
	for(int i =0 ;i<5; i++)
	{
		printf(" %d ",arr[i][4-i]);
		sum += arr[i][4-i];
	}
	printf("\n tong cua duong cheo chinh la : %d", sum);
	return 0;
}
