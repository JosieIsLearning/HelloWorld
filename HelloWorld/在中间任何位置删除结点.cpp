//linked list:inserting a node at beginning
#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};
Node* head;//全局，存储头指针
void Insert(int data) {
	Node* temp = new Node();
	temp->data = data;
	temp->next = NULL;//在结尾加入整数
	if (head != NULL) temp->next = head;
	head = temp;
}
void Print() {
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;//遍历链表
	}
	cout <<endl;
}
void Delete(int n) {
	struct Node* temp1 = head;
	if (n == 1) {
		head = temp1->next;//head指向第二个节点，temp仍然指向第一个节点
		free(temp1);
		return;
	}//删除第一个结点
	else {for (int i = 0; i < n - 2; i++) {
		temp1 = temp1->next;//point to (n-1)th node
	}
	struct Node* temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);//释放通过malloc分配的任何内存
	}
};//删除特定位置的结点
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