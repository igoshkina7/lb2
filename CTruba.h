#pragma once
#include <iostream>
#include <fstream>
#include<string>

using namespace std;

class Truba
{
	friend ostream& operator << (ostream& out, const Truba& t);   //����� � �������
	friend istream& operator >> (istream& in, Truba& new_tr);     //���� � �������
	friend ofstream& operator << (ofstream& out, const Truba& t);   //����� � ����
	friend ifstream& operator >> (ifstream& in, Truba& new_tr);    //���������� �� �����
	
	int id;  //��������� ����������, ����� ������������ �� ������� �� �������� ������
public:
	double diametr;
	double length;
	bool remont;
	static int IDT;
	Truba();
	void EditTruba();
	

};