#include "matrix.h"

Matrix Matrix::CreateMat(Matrix a, int n, int m)
{

	for (int i; i < n; i++) {
		for (int j; j < m; j++) {
			
		}
	}
	return Matrix();
}

vector<vector<int>> Matrix::randomMatrix(int n, int m) {
	srand(static_cast<unsigned>(time(NULL)));
	a.resize(n, vector<int>(m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = rand() % 10;
		}
	}

	return a;
}

void Matrix::printMatrix() {
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a[i].size(); j++) {
			std::cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

double Matrix::determinant(vector<vector<int>> sqrmat) {
	int size = sqrmat.size();

	if (size == 1) {
		return sqrmat[0][0];
	}
	else if (size == 2) {
		return sqrmat[0][0] * sqrmat[1][1] - sqrmat[0][1] * sqrmat[1][0];
	} else {
		int j = 1;
		Matrix submatrix;
		pow(-1, 1 + j)*sqrmat[0][j - 1]*determinant(sqrmat);
	}
}
