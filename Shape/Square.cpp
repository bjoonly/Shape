#include "Square.h"


Square::Square(int x, int y, int side):x(x), y(y) {
		SetSide(side);
}

void Square::SetSide(int side){
		if (side < 1)
			side = 1;
		this->side = side;
	
}

void Square::SetX(int x){
	this->x = x;

}

void Square::SetY(int y){
	this->y = y;
}

int Square::GetSide() const{
	return side;
}

int Square::GetX() const{
	return x;
}

int Square::GetY() const{
	return y;
}

void Square::Show() const{
	cout << "\nSquare:\nSide: "<<side<<"\n( "<<x<<", "<<y<<" );\n";

}

void Square::Save(string path) const{
	ofstream fout(path);
	bool isOpen = fout.is_open();
	if (isOpen == false) {
		cout << "The file couldn't be opened.\n";
		return;
	}
		fout << x << endl;
		fout << y << endl;
		fout << side << endl;
	
	fout.close();

}

void Square::Load(string path){
	ifstream fin(path);
	bool isOpen = fin.is_open();
	if (isOpen == false) {
		cout << "The file couldn't be opened.\n";
		return;
	}
	fin >> x;
	fin >> y;
	fin>> side;

}
