//
// Created by Peter Janků on 08.10.2022.
//

#include "../include/point.h"
#include <cmath>

namespace ShapeLib {
    /**
     * @brief Static function for horizontal distance of two point estimation. @sa Point
     * @param p1 first input point
     * @param p2 second input point
     * @return horizontal distance between provided pints
     */
    int Point::horizontalDistance(const Point &p1, const Point &p2) {
        return std::abs(p1.x - p2.x);
    }

    /**
     * @brief Static function for vertical distance of two point estimation. @sa Point
     * @param p1 first input point
     * @param p2 second input point
     * @return vertical distance between provided points
     */
    int Point::verticalDistance(const Point &p1, const Point &p2) {
        return std::abs(p1.y - p2.y);
    }
}