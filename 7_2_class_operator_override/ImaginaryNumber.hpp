#include <ostream> 

class ImaginaryNumber {
    
public:
    float real;
    float imaginary;

    ImaginaryNumber(float realValue, float imaginaryValue);

    friend std::ostream& operator<<(std::ostream& os, const ImaginaryNumber& obj);

    ImaginaryNumber operator+(const ImaginaryNumber& z2);
};