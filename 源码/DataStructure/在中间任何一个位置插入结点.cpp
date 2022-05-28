//linked list:inserting a node at beginning
#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};
Node* head;
void Insert(int data, int n) {
	Node* temp1 = new Node();
	temp1->data = data;
	temp1->next = NULL;//新建立的要被插入的结点
	if (n == 1) {
		temp1->next=head;//适用于链表为空的情况
		head = temp1;//头结点指向整个temp1
		return;
	}//要是只往第一位插就不大费周折了
	Node* temp2 = head;//等于了头指针，头指针指向第一个结点，所以temp2也指向第一个节点
	for (int i = 0; i < n - 2; i++) {
		temp2 = temp2->next;
	}
	/*	temp2是去找位置的工具结点（防止链表乱了
		要指向N - 1，所以得把指针循环到n - 2处；
		n=2时不会执行循环，temp1就在第一个结点，恰好为n-1处
	*/ 
	temp1->next = temp2->next;//该行只改了指向的地址
	temp2->next = temp1;//建立从temp2位置到temp1结点的链接
}
void Print() {
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;//遍历链表
	}
	cout <<endl;
}
int main() {
	head = NULL;//empty
	Insert(2, 1);
	Insert(3, 2);
	Insert(4, 1);
	Insert(5, 2);
	Print();
}