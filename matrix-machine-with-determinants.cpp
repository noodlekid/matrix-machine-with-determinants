#include "matrix.h"

using namespace std;

int main() {
	Matrix matrix;
	matrix.randomMatrix(10, 10);
	matrix.printMatrix();


	Matrix oneByone;
	oneByone.printMatrix();
	oneByone.a = { {12} };
	oneByone.printMatrix();
	cout << endl;



	 

	return 0;
}