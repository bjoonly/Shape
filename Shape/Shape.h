#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Shape{
public:
	virtual ~Shape(){}
	virtual void Show()const=0;
	virtual void Save(string path)const=0;
	virtual void Load(string path) = 0;
};

