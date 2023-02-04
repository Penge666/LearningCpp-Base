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

	

	//���캯��
	Student();

	//�вι���
	Student(int id, string name, string pwd);


	//�����˵�
	virtual void operMenu();

	//����ԤԼ
	void applyOrder();

	//�鿴�ҵ�ԤԼ
	void showMyOrder();

	//�鿴����ԤԼ
	void showAllOrder();

	//ȡ��ԤԼ
	void cancelOrder();

	//ѧ��ѧ��
	int m_Id;

	//��������
	vector<ComputerRoom> vCom;
};