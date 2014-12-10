#include <iostream>
#include <cctype>
using namespace std;


class Rectangle {
private:
	int height, width;
public:
	Rectangle() {width = 0; height = 0;} ;
	int returnArea() {return height * width;}
	void setHeight(int a) {height = a;}
	void setWidth(int b) {width = b;}
	int getHeight() {return height;}
	int getWidth() {return width;}
};



int main(){
	Rectangle rect;
	int width, height, choice;

	cout << "\nPlease choose from the following menu" << endl << "Press any character to exit";
	do {
		cout << "\n1) Set Width" << "\n2) Set Height" << "\n3) Display Dimensions" << "\n4) Calcualate area" << endl << "-> ";
		cin >> choice;
		switch(choice){
			case 1:
				cout << "\nEnter Width: ";
				cin >> width;
				rect.setWidth(width);
				break;
			case 2:
				cout << "\nEnter Height: ";
				cin >> height;
				rect.setHeight(height);
				break;
			case 3:
				cout << "\nHeight: " << rect.getHeight() << endl;
				cout << "\nWidth: " << rect.getWidth() << endl;
				break;
			case 4:
				cout << "\nArea: " << rect.returnArea() << endl;
				break;
		}
	} while (!(isalpha(choice)));
	
}