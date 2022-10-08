//
// Created by Peter Janků on 08.10.2022.
//

#ifndef SHAPE2D_POINT_H
#define SHAPE2D_POINT_H

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

    int x; /**< coordinate X */
    int y; /**< coordinate Y */
};


#endif //SHAPE2D_POINT_H
