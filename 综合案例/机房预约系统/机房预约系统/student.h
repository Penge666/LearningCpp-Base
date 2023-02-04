#pragma once
#include"globalFile.h"
#include<istream>
#include <fstream>
#include<iostream>
#include"Identity.h"
#include<vector>
#include<string>
#include "computerRoom.h"
#include"orderFile.h"
using namespace std;

class Student :public Identity {

public:

	

	//构造函数
	Student();

	//有参构造
	Student(int id, string name, string pwd);


	//操作菜单
	virtual void operMenu();

	//申请预约
	void applyOrder();

	//查看我的预约
	void showMyOrder();

	//查看所有预约
	void showAllOrder();

	//取消预约
	void cancelOrder();

	//学生学号
	int m_Id;

	//机房容器
	vector<ComputerRoom> vCom;
};