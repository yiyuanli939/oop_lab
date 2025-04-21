#include "developed_lot.hpp"
namespace office {
    class Office: public developed_lot::DevelopedLot {
    private:
        unsigned int offices;
    public:
        Office(double latitude,double longitude,double length,double width, double area, unsigned int floor, unsigned int offices);

        double value() const;
    };
}