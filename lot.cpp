#include"lot.hpp"
#include<iostream>
#include<cassert>

namespace lot{
    Lot::Lot(double latitude,double longitude,double length,double width) {
        this -> latitude = latitude; 
        this -> longitude = longitude;
        this -> length = length;
        this -> width = width; 
    }
    // the implementation does not need lost
    Lot::~Lot(){} 

    // if we need return type, we need 
    double Lot::get_lat() const{
        return this -> latitude; 
    }
    double Lot::get_long() const{
        return this -> longitude; 
    }
    double Lot::value() const{
        return (this -> length)*(this -> width)*16; 
    }
    double Lot::land_area() const{
        // not necessarily this
        return length*width; 
    }


}




