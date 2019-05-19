#pragma once
#include"BaseInterface.h"
int main(void) {
	BaseInterface test("位置1", "位置2", "位置3", "位置4", "位置5", "位置6", "表单1", "表单2");
	test.show();
	return 0;
}