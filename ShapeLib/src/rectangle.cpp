//
// Created by Peter Janků on 08.10.2022.
//
#include <iostream>
#include "rectangle.h"

/**
 * @brief This function returns the current width of the rectangle.
 * If the already calculated width is incorrect(the rectangle points were redefined), the dimensions are recalculated at first. @sa recalculateDim()
 * @return current width of the rectangle.
 */
int ShapeLib::Rectangle::getWidth() {
    if (!dimValid) {
        recalculateDim();
    }
    return width;
}

/**
 * @brief This function returns the current height of the rectangle.
 * If the already calculated height is incorrect(the rectangle points were redefined), the dimensions are recalculated at first. @sa recalculateDim()
 * @return current height of the rectangle.
 */
int ShapeLib::Rectangle::getHeight() {
    if (!dimValid) {
        recalculateDim();
    }
    return height;
}

/**
 * @brief Recalculates the rectangle width and height.
 *
 * Based on p1 and p2 this function recalculates the rectangle width and height and store it in internal temporary variables. @sa width @sa height
 */
void ShapeLib::Rectangle::recalculateDim() {
    width = Point::horizontalDistance(p1, p2);
    height = Point::verticalDistance(p1, p2);
    dimValid = true;
}

/**
 * @brief Print out basic rectangle info (ID, P2 and P2)
 */
void ShapeLib::Rectangle::printInfo() const {
    std::cout << "Rectangle ID:" << ID << std::endl;
    std::cout << "\tP1 (" << p1.x << "," << p1.y << ")" << std::endl;
    std::cout << "\tP2 (" << p2.x << "," << p2.y << ")" << std::endl;
}

/**
 * @brief Setter for the first point of the rectangle.
 * @param p1 point defining the rectangle.
 */
void ShapeLib::Rectangle::setP1(const Point &p1) {
    Rectangle::p1 = p1;
    dimValid = false;
}

/**
 * @brief Setter for the second point of the rectangle.
 * @param p2 point defining the rectangle.
 */
void ShapeLib::Rectangle::setP2(const Point &p2) {
    Rectangle::p2 = p2;
    dimValid = false;
}

/**
 * @brief Stream operator for Rectangle class.
 * @param stream output stream
 * @param rect the Rectangle object to be printed out
 * @return the original output stream
 */
std::ostream &ShapeLib::operator<<(std::ostream &stream, ShapeLib::Rectangle &rect) {
    std::cout << "Rectangle ID:" << rect.getID() << std::endl;
    std::cout << "\tP1 (" << rect.getP1().x << "," << rect.getP1().y << ")" << std::endl;
    std::cout << "\tP2 (" << rect.getP2().x << "," << rect.getP2().y << ")" << std::endl;
    std::cout << "\tWidth: " << rect.getWidth() << std::endl;
    std::cout << "\tHeight:" << rect.getHeight() << std::endl;


    return stream;
}
