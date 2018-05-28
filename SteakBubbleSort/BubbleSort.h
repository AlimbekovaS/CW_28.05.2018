#pragma once
#include<vector>
template<typename T>
class BubbleSort
{	
public:
	static void Sort(vector T * arr, int size)
	{
		for (int i = 0;i < size - 1;i++)
		{
			for (int j = 0;j < size - 1;j++)
			{
				if(arr[j]>a[j+1])
					swap(arr[j], arr[j + 1]);
			}
		}
	}
	
};
