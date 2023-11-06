#include <vector>
#include <iostream>
#include <ctime>
#include <math.h>

using namespace std;
using genericMatrix = vector<vector<int>>;

class Matrix {
private:
	vector<vector<int>> a;
public:
	// Default constructor
	Matrix() {}
	genericMatrix submatrix(const genericMatrix m, int r, int c);
	void matPopulate();
	void randomMatrix(int n, int m); // n x m matrix
	void randomMatrix(int n); // n x n matrix
	void printMatrix();
	double determinant(const genericMatrix& m);
	genericMatrix copyMat();
};

