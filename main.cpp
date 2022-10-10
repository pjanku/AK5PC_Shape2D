#include <iostream>
#include "point.h"
#include "rectangle.h"


int main() {
    ShapeLib::Point p1(0, 0);

    ShapeLib::Rectangle r(0,0,0,10,20);
    r.printInfo();
    std::cout << "H:"<< r.getHeight() << " W:" << r.getWidth() << std::endl;
    std::cout << r;
    return 0;
}
