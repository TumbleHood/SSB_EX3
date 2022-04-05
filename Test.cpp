#include "Matrix.hpp"
#include "doctest.h"

using namespace std;
using namespace zich;

TEST_CASE("Good Input"){

    SUBCASE("Good Width and Height"){
        vector<double> values = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12,
                                 13,14,15,16,17,18,19,20,21,22,23,24};
        CHECK_NOTHROW(Matrix(values, 1, 24));
        CHECK_NOTHROW(Matrix(values, 2, 12));
        CHECK_NOTHROW(Matrix(values, 3, 8));
        CHECK_NOTHROW(Matrix(values, 4, 6));
        CHECK_NOTHROW(Matrix(values, 6, 4));
        CHECK_NOTHROW(Matrix(values, 8, 3));
        CHECK_NOTHROW(Matrix(values, 12, 2));
        CHECK_NOTHROW(Matrix(values, 24, 1));
    }

    SUBCASE("Good values"){
        vector<double> values;
        int max = 10000;
        for (int i = 0; i < max; i++){
            values.insert(values.end(), (double)i);
        }
        for (int i = 1; i < max; i *= 10){
            CHECK_NOTHROW(Matrix(values, i, max/i));
        }
    }

    SUBCASE("Operators"){
        vector<double> values = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12,
                                 13,14,15,16,17,18,19,20,21,22,23,24};
        Matrix matrix = Matrix(values, 6, 4);
        
        CHECK_NOTHROW(+matrix);
        CHECK_NOTHROW(-matrix);


        CHECK_NOTHROW(matrix++);
        CHECK_NOTHROW(matrix--);
        CHECK_NOTHROW(++matrix);
        CHECK_NOTHROW(--matrix);

        CHECK_NOTHROW(matrix + 10);
        CHECK_NOTHROW(matrix - 10);
        CHECK_NOTHROW(matrix * 10);
        CHECK_NOTHROW(10 + matrix);
        CHECK_NOTHROW(10 - matrix);
        CHECK_NOTHROW(10 * matrix);

        CHECK_NOTHROW(matrix += 10);
        CHECK_NOTHROW(matrix -= 10);
        CHECK_NOTHROW(matrix *= 10);

        CHECK_NOTHROW(matrix + 3.33);
        CHECK_NOTHROW(matrix - 3.33);
        CHECK_NOTHROW(matrix * 3.33);
        CHECK_NOTHROW(3.33 + matrix);
        CHECK_NOTHROW(3.33 - matrix);
        CHECK_NOTHROW(3.33 * matrix);

        CHECK_NOTHROW(matrix += 3.33);
        CHECK_NOTHROW(matrix -= 3.33);
        CHECK_NOTHROW(matrix *= 3.33);

        Matrix new_matrix = Matrix(values, 1, 24);
        CHECK_NOTHROW(Matrix new_matrix = matrix);

        CHECK_NOTHROW(matrix + new_matrix);
        CHECK_NOTHROW(matrix - new_matrix);
        CHECK_NOTHROW(matrix * new_matrix);

        CHECK_NOTHROW(matrix += new_matrix);
        CHECK_NOTHROW(matrix -= new_matrix);
        CHECK_NOTHROW(matrix *= new_matrix);

        bool b;
        CHECK_NOTHROW(b = matrix == new_matrix);
        CHECK_NOTHROW(b = matrix < new_matrix);
        CHECK_NOTHROW(b = matrix > new_matrix);
        CHECK_NOTHROW(b = matrix <= new_matrix);
        CHECK_NOTHROW(b = matrix >= new_matrix);
        CHECK_NOTHROW(b = matrix != new_matrix);
    }
}

TEST_CASE("Bad Input"){
    
    vector<double> values;
    int max = 10000;
    for (int i = 0; i < max; i++){
        values.push_back((double)i);
    }

    SUBCASE("Non-Positive Width and Height"){
        for (int i = -100; i <= 0; i++){
            for (int j = -100; j <= 0; j++){
                CHECK_THROWS(Matrix(values, i, j));
            }
        }
    }

    SUBCASE("Illegal Size Division"){
        for (int i = 1; i < max; i++){
            if (max % i != 0){
                CHECK_THROWS(Matrix(values, i, max/i));
            }
        }
    }
}