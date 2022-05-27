#include<iostream>
using namespace std;
void bubbleSort(int *arr,int len);
void printArray(int*arr, int len);
int main() {
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(arr[0]);//这一步是可以计算机算的呀宝
	bubbleSort(arr, len);
	printArray(arr, len);
	system("pause");
	return 0;
}

void bubbleSort(int *arr, int len) {
	for (int i = 1; i < len; i++) 
	{
		for (int j = 0; j < len -i; j++) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printArray(int* arr, int len) {
	cout << "数组从小到大依次为：";
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
}