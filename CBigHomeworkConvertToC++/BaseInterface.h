#pragma once
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string>
using namespace std;

typedef struct positionXY {
	int x;
	int y;
} positionXY;

class BaseInterface {
private:
	
	string bottonStr[3][2];//������������λ����ʾ���ַ���
	string formStr[2]; //����������λ����ʾ���ַ���
	

public:
	const static  positionXY bottonPosition[3][2];//����6�����ܰ�ť�ľ�������
	const static  positionXY formPosition[2];//������ܻ��õ��ı��ľ�������



	BaseInterface(string bottonPosition00Str = "", string bottonPosition01Str = "",
		string bottonPosition10Str = "", string bottonPosition11Str = "",
		string bottonPosition20Str = "", string bottonPosition21Str = "",
		string formPositon0Str = "", string formPosition1Str = "");

	void gotoxy(const positionXY& position);
	void show(void);

	virtual void sloveKey(int key) = 0;
};