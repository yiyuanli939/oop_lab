#include "offce.hpp"

namespace office {
    Office::Office(double latitude,double longitude,double length,double width, double area, unsigned int floor, unsigned int offices) : DevelopedLot(latitude, longitude, length, width, area, floor), offices(offices) {}

    double Office::value() const {
        return DevelopedLot::value() + offices * 200;
    }
}
