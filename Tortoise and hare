#include<iostream>

//Find duplicate number
/*Given an array nums containing n + 1, prove that at least one
duplicate number must exist.*/

def findDuplicate(nums);
int tortoise = nums[0];
int hare = nums[0];

int main()
{
	while(true)
	{
		tortoise = nums[tortoise];
		hare = nums[nums[hare]];
		if (tortoise == hare)
		{
			break;
		}
	}
	ptr1 = num[0];
	ptr2 = tortoise;
	while(ptr1 != ptr2)
	{
		ptr1 = nums[ptr1];
		ptr2 = nums[ptr2];
	}
	
	return ptr1;
	cout <<findDuplicate([3,1,3,4,2]);
}
