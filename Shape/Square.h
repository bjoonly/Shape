#pragma once
#include "Shape.h"


class Square :public Shape{
	int x;
	int y;
	int side;
public:
	Square(int x = 0, int y = 0, int side = 1);
	void SetSide(int side);
	void SetX(int x);
	void SetY(int y);
	int GetSide()const;
	int GetX()const;
	int GetY()const;
	virtual void Show()const override;
	virtual void Save(string path)const override;
	virtual void Load(string path) override;
};

