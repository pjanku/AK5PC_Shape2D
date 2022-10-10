//
// Created by Peter Janků on 08.10.2022.
//

#ifndef SHAPE2D_RECTANGLE_H
#define SHAPE2D_RECTANGLE_H

#include <iostream>
#include "shape.h"
#include "point.h"

namespace ShapeLib {
    /**
    * @brief Simple class representing a rectangle defined by two points. @sa Point
    */
    class Rectangle : public Shape {
    public:

        /**
         * @brief The rectangle constructor.
         *
         * This constructor is calling the second one with modified parameters. This can be done since C++11 standard and it's called constructor delegation.
         * @param id Rectangle ID
         * @param x1 X coordinate of first rectangle's point
         * @param y1 Y coordinate of first rectangle's point
         * @param x2 X coordinate of second rectangle's point
         * @param y2 Y coordinate of second rectangle's point
         */
        Rectangle(int id, int x1, int y1, int x2, int y2) : Rectangle(id, Point(x1, y1), Point(x2, y2)) {}

        /**
         * @brief The main rectangle constructor
         *
         * This constructor stores all Rectangle's internal members as well as members defined in Shape class. It also calls constructor of Shape class.
         * Finally, it recalculates the dimensions of the rectangle. @sa recalculateDim()
         * @param id Rectangle ID
         * @param p1 First point defining the rectangle.
         * @param p2 Second point defining the rectangle.
         */
        Rectangle(int id, const Point &p1, const Point &p2) : Shape(id), p1(p1), p2(p2) { recalculateDim(); }

        void printInfo() const override;

        int getWidth();

        int getHeight();

        /**
         * @brief Return the first point in 2D space, which defines the rectangle.
         * @return Const reference to the point @sa Point
         */
        const Point &getP1() const { return p1; }

        /**
         * @brief Return the second point in 2D space, which defines the rectangle.
         * @return Const reference to the point @sa Point
         */
        const Point &getP2() const { return p2; }

        void setP1(const Point &p1);

        void setP2(const Point &p2);

    protected:

        void recalculateDim();
        Point p1;   /**< @brief The first point in 2D space */
        Point p2;   /**< @brief The second point in 2D space */
        mutable int width;  /**< @brief Temporary storage of rectangle width. Don't have to be correct!!!! @sa dimValid */
        mutable int height; /**< @brief Temporary storage of rectangle height. Don't have to be correct!!!! @sa dimValid */
        mutable bool dimValid = false;  /**< @brief Information if width and height is correct or not. @sa recalculateDim() */


    };


    std::ostream &operator<<(std::ostream &stream, Rectangle &rect);
}


#endif //SHAPE2D_RECTANGLE_H
