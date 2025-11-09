#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    // 👉 TODO: Declare a friend function here
    // friend <return_type> <function_name>(<parameters>);

    friend void Expriment2(Rectangle obj);

};

// 👉 TODO: Define your friend function here
// It should be able to access width and height even though they are private.

void Expriment2(Rectangle obj) {
    int Total = obj.width + obj.height;
    cout << "Width + Height = " << Total;
}


int main() {
    Rectangle rect(5, 3);

    Expriment2(rect);

    // 👉 Call your friend function here

}
