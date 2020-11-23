#include <iostream>
#include <vector>

class Matrix {
public:
    std::vector < std::vector < double > > matrix;
    Matrix(int rows, int cols);
    Matrix(int size);
    Matrix(std::string path);
    ~Matrix();
    void set(int n, int m, int val);
    double get(int n, int m);
    Matrix add(Matrix m2);
    Matrix subtract(Matrix m2);
    Matrix multiply(Matrix m2);
    int cols();
    int rows();
    void print();
    void store(std::string filename, std::string path);
    int main();
};

Matrix::Matrix(int rows, int cols)
{
    std::vector <double> tab;
    for(int j = 0; j < cols; j++) {
        tab.push_back(0); //wypełniam zerami
    }
    for (int i = 0 ; i < rows ; i++) {
        matrix.push_back(tab); //wypełniam vector vectorami
    }
}

Matrix::Matrix(int size)
{
    std::vector <double> tab;
    for (int j = 0; j < size; j++) {
        tab.push_back(0);
    }
    for (int i = 0 ; i < size ; i++) {
        matrix.push_back(tab);
    }
}

Matrix::Matrix(string path)
{
    std::fstream file;
    file.open();
}

Matrix::~Matrix(){}

void Matrix::set(int n, int m, int val)
{
    matrix.at(n).at(m) = val;
}

double Matrix::get(int n, int m)
{
    return matrix.at(n).at(m);
}

Matrix Matrix::add(Matrix m2)
{
    int r = rows();
    int c = cols();
    Matrix result = matrix;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            (Matrix.matrix)[i][j] = matrix[i][j] + (m2.matrix)
        }
    }
}

Matrix Matrix::subtract(Matrix m2)
{
    int r = rows();
    int c = cols();
    Matrix result = matrix;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            (Matrix.matrix)[i][j] = matrix[i][j] - (m2.matrix)
        }
    }
}

Matrix Matrix::multiply(Matrix m2)
{
    int r = rows();
    int c = cols();
    Matrix result
}

int Matrix::cols()
{
    return matrix[0].size();
}

int Matrix::rows()
{
    return matrix.size();
}

int Matrix::main()
{
    Matrix matrix1 = matrix(6,4);
    Matrix matrix2 = matrix(4,6);
    Matrix squarematrix1 = matrix(5);
    Matrix squarematrix2 = matrix(5);

    return 0;
}
