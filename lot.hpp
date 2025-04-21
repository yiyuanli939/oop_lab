namespace lot {class Lot{
private:
    double latitude;
    double longitude; 
    double length;
    double width;

protected:
    //
    double land_area() const;

public:
    // Constructor 
    Lot(double latitude,double longitude,double length,double width);
    // Getters 
    double get_lat() const; 
    double get_long() const; 
    // virtual 
    virtual ~Lot(); // allow the lower class to specify this
    // give a virtual value 
    virtual double value() const; 


}; // don't forget ; 
}