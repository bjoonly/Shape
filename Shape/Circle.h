#pragma once
#include "Shape.h"
class Circle :public Shape{
	int x;
	int y;
	int r;
public:
	Circle(int x=0, int y=0, int r=1);
	void SetR(int r);
	void SetX(int x);
	void SetY(int y);
	int GetR()const;
	int GetX()const;
	int GetY()const;
	virtual void Show()const override;
	virtual void Save(string path)const override;
	virtual void Load(string path) override;
};

