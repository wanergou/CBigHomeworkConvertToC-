#include "BaseInterface.h"

const positionXY BaseInterface::bottonPosition[3][2] = { {{5, 3}, {65, 3} }, 
														{ {5, 9}, {65, 9} },
														{ {5, 15}, {65, 15} } };//保存6个功能按钮的绝对坐标

const positionXY BaseInterface::formPosition[2] = { {24, 6},{24, 8} }; //保存可能会用到的表单的绝对坐标const 



BaseInterface::BaseInterface(string bottonPosition00Str, string bottonPosition01Str,
	string bottonPosition10Str, string bottonPosition11Str,
	string bottonPosition20Str, string bottonPosition21Str,
	string formPosition0Str, string formPosition1Str) {
	bottonStr[0][0] = bottonPosition00Str;
	bottonStr[0][1] = bottonPosition01Str;
	bottonStr[1][0] = bottonPosition10Str;
	bottonStr[1][1] = bottonPosition11Str;
	bottonStr[2][0] = bottonPosition20Str;
	bottonStr[2][1] = bottonPosition21Str;
	formStr[0] = formPosition0Str;
	formStr[1] = formPosition1Str;
}




void BaseInterface::gotoxy(const positionXY& position)
{
	COORD coord = { position.x, position.y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void BaseInterface::show(void)
{
	system("cls");
	printf("____________________________________________________________________________\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|                                                                          |\n"
		"|__________________________________________________________________________|");

	for (int row = 0; row < 3; row++) {
		for (int column = 0; column < 2; column++) {
			gotoxy(bottonPosition[row][column]);
			cout << bottonStr[row][column];
		}
	}

	for (int i = 0; i < 2; i++) {
		gotoxy(formPosition[i]);
		cout << formStr[i];
	}

}

