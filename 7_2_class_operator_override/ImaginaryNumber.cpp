#include "ImaginaryNumber.hpp"


ImaginaryNumber::ImaginaryNumber(float realValue, float imaginaryValue) {
    real = realValue;
    imaginary = imaginaryValue;
}

// this is a free function because it's an operator on a class (ostream) that I don't control - 
// yet Im' able to override it's behavior like this
std::ostream& operator<<(std::ostream& os, const ImaginaryNumber& obj) {
    os << obj.real << " + " << obj.imaginary << "i";
    return os;
}


// this is a class function operator ovrload.
ImaginaryNumber ImaginaryNumber::operator+(const ImaginaryNumber& z2) {
    return ImaginaryNumber(real + z2.real, imaginary + z2.imaginary);
}