#pragma once
//Ϊ�˽����scanf������vs�б���
#define _CRT_SECURE_NO_WARNINGS
#include"orderFile.h"
#include<iostream>
#include "identity.h"
using namespace std;

class Teacher :public Identity{
public:

	//Ĭ�Ϲ���
	Teacher();

	//�вι��� (ְ����ţ�����������)
	Teacher(int empId, string name, string pwd);

	//�˵�����
	virtual void operMenu();

	//�鿴����ԤԼ
	void showAllOrder();

	//���ԤԼ
	void validOrder();

	int m_EmpId; //��ʦ���

};