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
	
	string bottonStr[3][2];//保存六个坐标位置显示的字符串
	string formStr[2]; //保存两个表单位置显示的字符串
	

public:
	const static  positionXY bottonPosition[3][2];//保存6个功能按钮的绝对坐标
	const static  positionXY formPosition[2];//保存可能会用到的表单的绝对坐标



	BaseInterface(string bottonPosition00Str = "", string bottonPosition01Str = "",
		string bottonPosition10Str = "", string bottonPosition11Str = "",
		string bottonPosition20Str = "", string bottonPosition21Str = "",
		string formPositon0Str = "", string formPosition1Str = "");

	void gotoxy(const positionXY& position);
	void show(void);

	virtual void sloveKey(int key) = 0;
};