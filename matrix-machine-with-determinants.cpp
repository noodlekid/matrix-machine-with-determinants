#include "matrix.h"

using namespace std;

int main() {
	Matrix matrix;
	matrix.matPopulate();
	genericMatrix m = matrix.copyMat();

	cout << "Determinant of the matrix is :" << matrix.determinant(m);

	return 0;
}