//
// Created by Orlando Shamlou on 19/11/2024.
//

#ifndef GEOM_H
#define GEOM_H
#include <cmath>
#include <numbers>
using std::numbers::pi;
#include "point.h"

// Functions for points
// Could include point class/struct here?
// TODO: tests for functions
// TODO: const parameters
// TODO: see if these exist in stl or other library (probably - still a good learning exercise)
namespace geom {
    // Distance between two points
    double distance(Point a, Point b) {
        return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2) );
    }

    // Position of a point relative to another point, given a length and angle
    // TODO: better name for this function
        // point_by_angle_and_distance relative_position relative_point relative_coords
    Point relative_point(Point a, double distance, double radians) {
        Point b;
        b.x = a.x + (distance * cos(radians));
        b.y = a.y + (distance * sin(radians));
        return b;
    }
    double radians_to_degrees(double radians) {
        return (radians * 180) / pi;
    }

    // Conversions
    double degrees_to_radians(double degrees) {
        return (degrees * pi) / 180; }

    bool acceptably_close(const double a, const double b, const double tolerance) {
        double difference = abs(a - b);
        return difference <= tolerance;
    }
}
#endif //GEOM_H
