#include <iostream>
#include "point.h"
#include "rectangle.h"
#include "circle.h"


int main() {
    ShapeLib::Point p1(0, 0);

    ShapeLib::Rectangle r(0, 0, 0, 10, 20);
    std::cout << r;

    ShapeLib::Circle c(1, 0, 0, 10);
    std::cout << c;
    return 0;
}
