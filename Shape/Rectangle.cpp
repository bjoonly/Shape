#include "Rectangle.h"

Rectangle::Rectangle(int x, int y, int width,int height):x(x),y(y){
	SetWidth(width);
	SetHeight(height);
}

void Rectangle::SetWidth(int width){
	if (width < 1)
		width = 1;
	this->width = width;
}

void Rectangle::SetHeight(int height) {
	if (height < 1)
		height = 1;
	this->height = height;
}

void Rectangle::SetX(int x){
	this->x = x;
}

void Rectangle::SetY(int y){
	this->y = y;
}

int Rectangle::GetWidth() const{
	return width;
}

int Rectangle::GetHeight() const {
	return height;
}
int Rectangle::GetX() const{
	return x;
}

int Rectangle::GetY() const{
	return y;
}

void Rectangle::Show() const{
	cout<<"\nRectangle:\n"<<"Width: "<<width<<"\nHeight: "<<height<<"\n("<<x<<", "<<y<<");\n";
}

void Rectangle::Save(string path) const{
	ofstream fout(path);
	bool isOpen = fout.is_open();
	if (isOpen == false) {
		cout << "The file couldn't be opened.\n";
		return;
	}
	fout << x << endl;
	fout << y << endl;
	fout << width << endl;
	fout << height << endl;
	fout.close();
}

void Rectangle::Load(string path){
	ifstream fin(path);
	bool isOpen = fin.is_open();
	if (isOpen == false) {
		cout << "The file couldn't be opened.\n";
		return;
	}
	fin >> x >> y >> width>>height;
}
