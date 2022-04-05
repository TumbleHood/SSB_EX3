#include <vector>
#include <string>

using namespace std;

namespace zich{
    class Matrix{
        public:
            vector<double> _matrix;
            int _width;
            int _height;

            Matrix(vector<double>& values, int width, int height);

            Matrix operator+();
            Matrix operator-();

            Matrix& operator++();
            Matrix& operator--();

            Matrix operator++(int);
            Matrix operator--(int);

            Matrix operator+(const int);
            Matrix operator-(const int);
            Matrix operator*(const int);

            Matrix operator+(const double);
            Matrix operator-(const double);
            Matrix operator*(const double);

            Matrix operator+(const Matrix&);
            Matrix operator-(const Matrix&);
            Matrix operator*(const Matrix&);

            Matrix operator+=(const int);
            Matrix operator-=(const int);
            Matrix operator*=(const int);

            Matrix operator+=(const double);
            Matrix operator-=(const double);
            Matrix operator*=(const double);

            Matrix operator+=(const Matrix&);
            Matrix operator-=(const Matrix&);
            Matrix operator*=(const Matrix&);

            Matrix& operator=(const Matrix&);

            bool operator==(const Matrix&);
            bool operator!=(const Matrix&);
            bool operator>(const Matrix&);
            bool operator<(const Matrix&);
            bool operator>=(const Matrix&);
            bool operator<=(const Matrix&);
            
            friend ostream& operator<<(ostream&, const Matrix&);
            friend istream& operator>>(istream&, const Matrix&);

            friend Matrix operator+(const int, Matrix&);
            friend Matrix operator-(const int, Matrix&);
            friend Matrix operator*(const int, Matrix&);

            friend Matrix operator+(const double, Matrix&);
            friend Matrix operator-(const double, Matrix&);
            friend Matrix operator*(const double, Matrix&);
    };
}