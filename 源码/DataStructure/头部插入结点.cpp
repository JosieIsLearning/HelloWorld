#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};//definition of Node
Node* head;//����ͷ���
Node* Insert(Node* head, int x) {
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = x;//��������
	temp->next = NULL;
	if (head != NULL) temp->next = head;//����tempָ��ͷָ��ָ�ŵĵط�����ֹ����
	head = temp;//Ȼ���ٰ�ͷָ��ָ�����Ľ��
	return head;
}
void Print(Node* head) {
	while (head != NULL)//����ֱ�Ӱ�ͷ��㱾������ѭ��
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