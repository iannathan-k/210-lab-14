#include <iostream>

using namespace std;

// COMSC-210 | Lab 14 | Ian Kusmiantoro

class Color {
    private:
        int red;
        int green;
        int blue;

    public:
        void setRed(int r) {red = r;} // Not sure if pointer notation has been covered yet
        void setGreen(int g) {green = g;} // But I think this->green = green is neater
        void setBlue(int b) {blue = b;}
        int getRed() const {return red;}
        int getGreen() const {return green;}
        int getBlue() const {return blue;}
        void print() const {cout << "R: " << red << ", G: " << green << ", B: " << blue << endl;};
};

int main() {
    Color color1;
    Color color2;
    Color color3;

    color1.setRed(56);
    color1.setGreen(243);
    color1.setBlue(229);

    color2.setRed(182);
    color2.setGreen(130);
    color2.setBlue(236);

    color3.setRed(67);
    color3.setGreen(21);
    color3.setBlue(69);

    cout << "===== Color 1 =====" << endl;
    color1.print();

    cout << "===== Color 2 =====" << endl;
    color2.print();

    cout << "===== Color 3 =====" << endl;
    color3.print();

    return 0;
}