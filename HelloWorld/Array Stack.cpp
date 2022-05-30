//
#include <iostream>
using namespace std;

#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void Push(int x) {
	if (top == MAX_SIZE - 1)
	{
		cout << "Error: stack overflow" << endl;
		return;
	}//to handle overflow
	A[++top] = x;
}
void Pop() {
	if (top == -1) {
		cout << "Error: No element to pop" << endl;
		return;
	}
		top--;
}
int Top() {
	return A[top];
}
void Print() {
	int i;
	cout << "The stack is: ";
	for (int i = 0; i <= top; i++)//如果这里没让等于0，就会坑掉i=0时
		cout << A[i] << " ";
	cout << endl;
}
int main() {
	Push(3); Print();
	Push(100); Print();
	Pop(); Print();
	Push(4); Print();
	Push(12); Print();
}