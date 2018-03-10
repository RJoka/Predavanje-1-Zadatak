#include "ComplexNumber.h"
#include <string>
#include <sstream>
using namespace std;
ComplexNumber::ComplexNumber(int real, int imaginary) {
	this->real = real;
	this->imaginary = imaginary;
}

ComplexNumber::ComplexNumber() {
	this->real = 0;
	this->imaginary = 0;
}

void ComplexNumber::set_real(int real) {
	this->real = real;
}

void ComplexNumber::set_imaginary(int imaginary) {
	this->imaginary = imaginary;
}

ComplexNumber::ComplexNumber(ComplexNumber k1, ComplexNumber k2) {
	this->real = k1.real + k2.real;
	this->imaginary = k1.imaginary + k2.imaginary;
}

string ComplexNumber::get() {
	stringstream ss;
	ss << real << " + " << imaginary << "i";
	return ss.str();
}
