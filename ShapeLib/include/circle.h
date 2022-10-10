//
// Created by Peter Janků on 10.10.2022.
//

#ifndef SHAPE2D_CIRCLE_H
#define SHAPE2D_CIRCLE_H

#include "shape.h"
#include "point.h"

namespace ShapeLib {
    /**
     * @brief Simple class representing one Circle.
     *
     * The circle is defined by a centre point and radius.
     */
    class Circle : public Shape {

    public:
        /**
         * @brief The circle constructor
         *
         * This constructor is calling the second one with modified parameters. This can be done since C++11 standard and it's called constructor delegation.
         * @param ID Circle ID
         * @param centerX The X coordinate of circle center
         * @param centerY The Y coordinate of circle center
         * @param radius The circle radius
         */
        Circle(int ID, int centerX, int centerY, int radius) : Circle(ID, Point(centerX, centerY), radius) {}

        /**
         * @brief The circle constructor
         *
         * This constructor stores all Circle's internal members as well as members defined in Shape class.
         * It also calls constructor of Shape class.
         * Finally, it recalculates the dimensions of the rectangle. @sa recalculateDim()
         * @param ID Circle ID
         * @param center Circle center point @sa Point
         * @param radius Circle radius
         */
        Circle(int ID, const Point &center, int radius) : Shape(ID), centerPoint(center), radius(radius) {}

        void setCenterPoint(const Point &centerPoint);

        void setRadius(int radius);

        void printInfo() const override;

        /**
         * @brief Getter for the center point
         * @return Center point
         */
        const Point &getCenterPoint() const {
            return centerPoint;
        }

        /**
         * @brief Getter for the radius dimension
         * @return Size of the circle's radius
         */
        int getRadius() const {
            return radius;
        }
        double getBorderLength();
        double getCircleVolume();

    protected:

        void recalculateDim();

        Point centerPoint;  /**< @brief Point defining the center of the circle */
        int radius; /**< @brief Dimension of circle radius. */
        double borderLength = 0; /**< @brief Temporary storage of circle border length. Don't have to be correct!!!! @sa dimsValid */
        double circleVolume = 0; /**< @brief Temporary storage of circle area volume. Don't have to be correct!!!! @sa dimsValid */
        bool dimsValid = false;  /**< @brief Information if circle area volume and border length is valido or not. @sa recalculateDim() */
    };

    std::ostream &operator<<(std::ostream &stream, Circle &circle);

} // ShapeLib

#endif //SHAPE2D_CIRCLE_H
