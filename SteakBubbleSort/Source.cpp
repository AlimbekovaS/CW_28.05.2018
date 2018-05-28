#include<iostream>
#include<stack>
#include<vector>
#include"BubbleSort.h"

using namespace std;
////template<typename T>
////void bubbleSort(vector<T> *arr, int size)
////{
////	for (int i = 0;i < size - 1;i++)
////	{
////		for (int j = 0;j < size - 1;j++)
////		{
////			if (arr[j]>a[j + 1])
////				swap(arr[j], arr[j + 1]);
////		}
////	}
////}

int main()
{
	int size=0;
	stack<int>s1;
	s1.push(5);
	s1.push(9);
	s1.push(8);
	s1.push(19);

	vector<int>v;
	while (!s1.empty())
	{
		v.push_back(s1.top());
		s1.pop();
		size += 1;
	}
	BubbleSort<int>::Sort(v, size);
	for (int i = 0;i < 5;i++)
		cout << v[i] << endl;
	//bubbleSort(v, size);
	
	system("pause");
	return 0;
}