#pragma once
#include "Shape.h"
class Rectangle : public Shape{
	int x;
	int y;
	int width;
	int height;
public:
	Rectangle(int x = 0, int y = 0, int width = 1, int height = 1);
	void SetWidth(int width);
	void SetHeight(int height);
	void SetX(int x);
	void SetY(int y);
	int GetWidth()const;
	int GetHeight()const;
	int GetX()const;
	int GetY()const;
	virtual void Show()const override;
	virtual void Save(string path)const override;
	virtual void Load(string path) override;
};

