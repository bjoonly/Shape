#include "Ellipse.h"
Ellipse::Ellipse(int x, int y, int width, int height) :x(x), y(y) {
	SetWidth(width);
	SetHeight(height);
}

void Ellipse::SetWidth(int width) {
	if (width < 1)
		width = 1;
	this->width = width;
}

void Ellipse::SetHeight(int height) {
	if (height < 1)
		height = 1;
	this->height = height;
}

void Ellipse::SetX(int x) {
	this->x = x;
}

void Ellipse::SetY(int y) {
	this->y = y;
}

int Ellipse::GetWidth() const {
	return width;
}

int Ellipse::GetHeight() const {
	return height;
}
int Ellipse::GetX() const {
	return x;
}

int Ellipse::GetY() const {
	return y;
}

void Ellipse::Show() const {
	cout << "\nEllipse:\n" << "Width: " << width << "\nHeight: " << height << "\n(" << x << ", " << y << ");\n";
}

void Ellipse::Save(string path) const {
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

void Ellipse::Load(string path) {
	ifstream fin(path);
	bool isOpen = fin.is_open();
	if (isOpen == false) {
		cout << "The file couldn't be opened.\n";
		return;
	}
	fin >> x >> y >> width >> height;
}

