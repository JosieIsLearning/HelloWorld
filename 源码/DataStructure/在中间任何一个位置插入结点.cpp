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
	temp1->next = NULL;//�½�����Ҫ������Ľ��
	if (n == 1) {
		temp1->next=head;//����������Ϊ�յ����
		head = temp1;//ͷ���ָ������temp1
		return;
	}//Ҫ��ֻ����һλ��Ͳ����������
	Node* temp2 = head;//������ͷָ�룬ͷָ��ָ���һ����㣬����temp2Ҳָ���һ���ڵ�
	for (int i = 0; i < n - 2; i++) {
		temp2 = temp2->next;
	}
	/*	temp2��ȥ��λ�õĹ��߽�㣨��ֹ��������
		Ҫָ��N - 1�����Եð�ָ��ѭ����n - 2����
		n=2ʱ����ִ��ѭ����temp1���ڵ�һ����㣬ǡ��Ϊn-1��
	*/ 
	temp1->next = temp2->next;//����ֻ����ָ��ĵ�ַ
	temp2->next = temp1;//������temp2λ�õ�temp1��������
}
void Print() {
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;//��������
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