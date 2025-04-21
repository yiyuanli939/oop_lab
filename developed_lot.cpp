#include <cassert>
#include "developed_lot.hpp"

namespace developed_lot{
    DevelopedLot::DevelopedLot(double latitude,double longitude,double length,double width, double area, unsigned int floor):Lot(latitude,longitude,length,width){
        this -> area = area;
        this -> floor = floor; 
    }
    double DevelopedLot::floor_area_ratio() const{
        // Can we directly call it
        double lot_area = DevelopedLot::land_area();
        return area / lot_area; 
    }
    // Should we add override here? 
    double DevelopedLot::value() const{
        double base_lot_value = Lot::value(); 
        double floor_space = area*floor;
        double value = 100*floor_space + base_lot_value;
        return value;  
    }

}

