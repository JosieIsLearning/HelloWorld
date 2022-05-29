//linked list:inserting a node at beginning
#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};
Node* head;//ȫ�֣��洢ͷָ��
void Insert(int data) {
	Node* temp = new Node();
	temp->data = data;
	temp->next = NULL;//�ڽ�β��������
	if (head != NULL) temp->next = head;
	head = temp;
}
void Print() {
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;//��������
	}
	cout <<endl;
}
void Delete(int n) {
	struct Node* temp1 = head;
	if (n == 1) {
		head = temp1->next;//headָ��ڶ����ڵ㣬temp��Ȼָ���һ���ڵ�
		free(temp1);
		return;
	}//ɾ����һ�����
	else {for (int i = 0; i < n - 2; i++) {
		temp1 = temp1->next;//point to (n-1)th node
	}
	struct Node* temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);//�ͷ�ͨ��malloc������κ��ڴ�
	}
};//ɾ���ض�λ�õĽ��
int main() {
	head = NULL;//empty
	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);//List:5,6,4,2
	Print();
	int n;
	cout << "which node do you want to delete? Enter a position:";
	cin >> n;
	Delete(n);
	Print();
}