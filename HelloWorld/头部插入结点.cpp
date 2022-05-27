#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};//definition of Node
Node* head;//创建头结点
Node* Insert(Node* head, int x) {
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = x;//插入数据
	temp->next = NULL;
	if (head != NULL) temp->next = head;//先让temp指向头指针指着的地方，防止断链
	head = temp;//然后再把头指针指向插入的结点
	return head;
}
void Print(Node* head) {
	while (head != NULL)//可以直接把头结点本身用来循环
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

int main() {
	head = NULL;//empty list
	cout << "How many numbers do you want?" << endl;
	int n;//the length of list
	int x;//Each number that is taken from the user.
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Enter the number" << endl;
		cin >> x;
		head = Insert(head, x);
		Print(head);
	}
}