#include "Matrix.hpp"

using namespace std;
using namespace zich;

Matrix::Matrix(vector<double>& values, int width, int height){
    _width = width;
    _height = height;
}

Matrix Matrix::operator+(){
    return *this;
}

Matrix Matrix::operator-(){
    return *this;
}

Matrix& Matrix::operator++(){
    return *this;
} 

Matrix& Matrix::operator--(){
    return *this;
}

Matrix Matrix::operator++(int inc){
    return *this;
}

Matrix Matrix::operator--(int dec){
    return *this;
}

Matrix Matrix::operator+(const int num){
    return *this;
}

Matrix Matrix::operator-(const int num){
    return *this;
}

Matrix Matrix::operator*(const int num){
    return *this;
}

Matrix Matrix::operator+(const double num){
    return *this;
}

Matrix Matrix::operator-(const double num){
    return *this;
}

Matrix Matrix::operator*(const double num){
    return *this;
}

Matrix Matrix::operator+(const Matrix& matrix){
    return *this;
}

Matrix Matrix::operator-(const Matrix& matrix){
    return *this;
}

Matrix Matrix::operator*(const Matrix& matrix){
    return *this;
}

Matrix Matrix::operator+=(const int num){
    return *this;
}

Matrix Matrix::operator-=(const int num){
    return *this;
}

Matrix Matrix::operator*=(const int num){
    return *this;
}

Matrix Matrix::operator+=(const double num){
    return *this;
}

Matrix Matrix::operator-=(const double num){
    return *this;
}

Matrix Matrix::operator*=(const double num){
    return *this;
}

Matrix Matrix::operator+=(const Matrix& matrix){
    return *this;
}

Matrix Matrix::operator-=(const Matrix& matrix){
    return *this;
}

Matrix Matrix::operator*=(const Matrix& matrix){
    return *this;
}

Matrix& Matrix::operator=(const Matrix& matrix){
    return *this;
}

bool Matrix::operator==(const Matrix& matrix){
    return true;
}

bool Matrix::operator!=(const Matrix& matrix){
    return true;
}

bool Matrix::operator>(const Matrix& matrix){
    return true;
}

bool Matrix::operator<(const Matrix& matrix){
    return true;
}

bool Matrix::operator>=(const Matrix& matrix){
    return true;
}

bool Matrix::operator<=(const Matrix& matrix){
    return true;
}

ostream& zich::operator<<(ostream& os, const Matrix& matrix){
    return os;
}

istream& zich::operator>>(istream& is, const Matrix& matrix){
    return is;
}

Matrix zich::operator+(const int num, Matrix& matrix){
    return matrix;
}

Matrix zich::operator-(const int num, Matrix& matrix){
    return matrix;
}

Matrix zich::operator*(const int num, Matrix& matrix){
    return matrix;
}

Matrix zich::operator+(const double num, Matrix& matrix){
    return matrix;
}

Matrix zich::operator-(const double num, Matrix& matrix){
    return matrix;
}

Matrix zich::operator*(const double num, Matrix& matrix){
    return matrix;
}