#include"lot.hpp"

namespace developed_lot{
    class DevelopedLot: public lot::Lot{
    private: 
        double area;
        unsigned int floor; 

    protected:
        // return the total area of all floors in the building divided by the land area of the lot
        double floor_area_ratio() const; 

    public: 
        DevelopedLot(double latitude,double longitude,double length,double width, double area, unsigned int floor); 

        double value() const override; 

    };

}