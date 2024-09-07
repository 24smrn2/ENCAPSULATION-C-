#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Constructor to initialize length and breadth
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Method to set length
    void setLength(int l) {
        if (l >= 0) {
            length = l;
        }
    }

    // Method to set breadth
    void setBreadth(int b) {
        if (b >= 0) {
            breadth = b;
        }
    }

    // Method to get area
    int getArea() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect(10, 5);
    cout << "Area: " << rect.getArea() << endl;

    rect.setLength(15);
    rect.setBreadth(10);
    cout << "New Area: " << rect.getArea() << endl;

    return 0;
}
