//
// Created by Peter Janků on 08.10.2022.
//

#ifndef SHAPE2D_POINT_H
#define SHAPE2D_POINT_H

#include <iostream>

namespace ShapeLib {
    /**
     * @brief Simple class representing one point in cartesian coordinates
     */
    class Point {
    public:

        /**
         * @brief First parametric constructor
         *
         * Because at least one parametric constructor is created, the compiler doesn't create the default constructor.
         * @param x coordinate
         * @param y coordinate
         */
        Point(int x, int y) : x(x), y(y) {}

        static int horizontalDistance(const Point &p1, const Point &p2);

        static int verticalDistance(const Point &p1, const Point &p2);

        int x; /**< @brief coordinate X */
        int y; /**< @brief coordinate Y */
    };

    std::ostream &operator<<(std::ostream& stream, const Point &point);

}

#endif //SHAPE2D_POINT_H
