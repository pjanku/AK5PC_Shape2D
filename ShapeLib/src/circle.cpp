//
// Created by Peter Janků on 10.10.2022.
//

#include <cmath>
#include <iostream>
#include "circle.h"

namespace ShapeLib {

    /**
     * @brief Setter for the center point.
     * @param centerPoint Point defining the circle center
     */
    void Circle::setCenterPoint(const Point &centerPoint) {
        Circle::centerPoint = centerPoint;
    }

    /**
     * @brief Setter for the radius. It also invalidate internal dimensions.
     * @param radius the circle radius
     */
    void Circle::setRadius(int radius) {
        Circle::radius = radius;
        dimsValid = false;
    }

    /**
     * @brief This function returns the length of circle border.
     * If the dimension is not valid, it is  recalculated at first. @sa recalculateDim()
     * @return current length of circle border.
     */
    double Circle::getBorderLength() {
        if (!dimsValid) recalculateDim();
        return borderLength;
    }

    /**
     * @brief this function returns the volume of circle area.
     * If the dimensions is not valid, it is  recalculated at first. @sa recalculateDim()
     * @return
     */
    double Circle::getCircleVolume()  {
        if (!dimsValid) recalculateDim();
        return circleVolume;
    }

    /**
     * @brief Recalculates the circle border length and area volume.
     *
     * Based on radiusthis function recalculates the circle are volume and border lenght and store it in internal temporary variables. @sa borderLength @sa circleVolume
     */
    void Circle::recalculateDim() {
        borderLength = 2 * M_PI * radius;
        circleVolume = M_PI * radius * radius;
        dimsValid = true;
    }

    /**
     * @brief Print out tha basic circle info (center point and radius)
     */
    void Circle::printInfo() const {
        std::cout << "Circle ID:" << ID << std::endl;
        std::cout << "\tCenter point: " << centerPoint << std::endl;
        std::cout << "\tRadius:" << radius << std::endl;
    }

    /**
     * @brief Stream operator for Circle class.
     * @param stream output stream
     * @param circle the Circle object to be printed out
     * @return the original stream
     */
    std::ostream &operator<<(std::ostream &stream, Circle &circle) {
        stream << "Circle ID:" << circle.getID()  << std::endl;
        stream << "\tCenter point: " << circle.getCenterPoint() << std::endl;
        stream << "\tRadius:" << circle.getRadius() << std::endl;
        stream << "\tBorder dim: " << circle.getBorderLength() << std::endl;
        stream << "\tArea volume: " << circle.getCircleVolume() << std::endl;
        return stream;
    }
} // ShapeLib