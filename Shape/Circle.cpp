#include "Circle.h"

Circle::Circle(int x, int y, int r):x(x),y(y){
	SetR(r);
}

void Circle::SetR(int r){
	if (r < 1)
		r = 1;
	this->r = r;
}

void Circle::SetX(int x){
	this->x = x;
}

void Circle::SetY(int y){
	this->y = y;
}

int Circle::GetR() const{
	return r;
}

int Circle::GetX() const{
	return x;
}

int Circle::GetY() const{
	return y;
}

void Circle::Show() const{
	cout<<"\nCircle:\nRadius: "<<r<< "\nCenter in (" << x << ", " << y << ");\n";
}

void Circle::Save(string path) const{
	ofstream fout(path);
	bool isOpen = fout.is_open();
	if (isOpen == false) {
		cout << "The file couldn't be opened.\n";
		return;
	}
	fout << x << endl;
	fout << y << endl;
	fout << r << endl;

	fout.close();
}

void Circle::Load(string path){
	ifstream fin(path);
	bool isOpen = fin.is_open();
	if (isOpen == false) {
		cout << "The file couldn't be opened.\n";
		return;
	}
	fin >> x >> y >> r;
}
