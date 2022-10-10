//
// Created by Peter Janků on 08.10.2022.
//

#ifndef SHAPE2D_SHAPE_H
#define SHAPE2D_SHAPE_H

#include "point.h"

namespace ShapeLib {
    /**
     * @brief Interface for any 2D shape in this library
     *
     * This function implements the basic ID management as well as virtual function printInfo().
     */
    class Shape {
    public:

        /**
         * @brief Constructor of Shape class
         * @param id an ID of the shape
         */
        explicit Shape(int id) : ID(id) {}

        /**
         * @brief Virtual function for printing information about the shape into the console.
         */
        virtual void printInfo() const = 0;

        /**
         * @brief Getter for shape's ID
         * @return the ID of the shape
         */
        int getID() const { return ID; }

    protected:
        int ID; /**< @brief internal ID of each shape */
    };

} // ShapeLib

#endif //SHAPE2D_SHAPE_H
