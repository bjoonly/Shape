#include"Circle.h"
#include"Ellipse.h"
#include"Rectangle.h"
#include"Square.h"
int main() {
	string path("Shape.txt");
	Shape* shapes1[4] = { new Square(0,5,1),new Ellipse(1,1,2,3),new Rectangle,new Circle(0,7,5) };
	Shape* shapes2[4] = { new Square,new Ellipse,new Rectangle,new Circle };
	cout << "Shapes 1:\n";
	for (int i = 0; i < 4; i++) {
		shapes1[i]->Show();
		shapes1[i]->Save(path);
		shapes2[i]->Load(path);
	}
	cout << "\nShapse 2:\n";
	for (int i = 0; i < 4; i++)
		shapes2[i]->Show();

	for (int i = 0; i < 4; i++) {
		delete shapes1[i];
		delete shapes2[i];
	}
		return 0;
}