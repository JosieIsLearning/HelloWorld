#include<iostream>
using namespace std;
#include"point.h"
class circle {
public:
	void setR(int r) {
		m_R = r;
	}//设置半径
	int getR() {
		return m_R;
	}//获取半径
	void setCenter(Point center)
	{
		m_Center = center;
	}//设置圆心
	Point getCenter()//这里Point可以做返回值，因为它是自定义的数据类型
	{
		return m_Center;
	}//获取圆心
private:
	int m_R;//半径
	Point m_Center;
};
//判断点和圆的关系
void isInCircle(circle &c, Point &p) {
	int D = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) 
		+ (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());//计算两点之间距离的平方
	int R2= c.getR() ^ 2;//计算半径的平方
	if (D == R2) { cout << "点在圆上"<<endl; }
	else if (D>R2) { cout << "点在圆外" << endl; }
	else{ cout << "点在圆内" << endl; }//判断大小
}
int main() {
	//创建圆
	circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//创建点
	Point p;
	p.setX(10);
	p.setY(50);
	//判断关系
	isInCircle(c, p);
		system("pause");

}