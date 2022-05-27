#include<iostream>
using namespace std;
#include"point.h"
class circle {
public:
	void setR(int r) {
		m_R = r;
	}//���ð뾶
	int getR() {
		return m_R;
	}//��ȡ�뾶
	void setCenter(Point center)
	{
		m_Center = center;
	}//����Բ��
	Point getCenter()//����Point����������ֵ����Ϊ�����Զ������������
	{
		return m_Center;
	}//��ȡԲ��
private:
	int m_R;//�뾶
	Point m_Center;
};
//�жϵ��Բ�Ĺ�ϵ
void isInCircle(circle &c, Point &p) {
	int D = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) 
		+ (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());//��������֮������ƽ��
	int R2= c.getR() ^ 2;//����뾶��ƽ��
	if (D == R2) { cout << "����Բ��"<<endl; }
	else if (D>R2) { cout << "����Բ��" << endl; }
	else{ cout << "����Բ��" << endl; }//�жϴ�С
}
int main() {
	//����Բ
	circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//������
	Point p;
	p.setX(10);
	p.setY(50);
	//�жϹ�ϵ
	isInCircle(c, p);
		system("pause");

}