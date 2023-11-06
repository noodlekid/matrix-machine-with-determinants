#include "matrix.h"

genericMatrix Matrix::submatrix(const genericMatrix m, int r, int c) {
	genericMatrix result;
	
	const unsigned numRows = m.size();
	const unsigned numCols = m[0].size();

	for (unsigned row = 0; row < numRows; ++row) {
		if (row == r) continue; // Skip specified row
		vector<int> tempRow;
		for (unsigned col = 0; col < numCols; col++) {
			if (col == c) continue; // Skip specified column
			tempRow.push_back(m[row][col]);
		}
		result.push_back(tempRow);
	}
	return result;
}

void Matrix::matPopulate()
{
	int n = 0, m = 0;
	cout << "How many rows would you like the matrix to have?: "; cin >> n; cout << endl;
	cout << "How many columns would you like the matrix to have?: "; cin >> m; cout << endl;

	// Resizes the matrix to have n rows
	a.resize(n);

	// Resizes the matrix to have m columns
	for (int k = 0; k < a.size(); k++) {
		a[k].resize(m, 0);
	}
	// Allows for user generated matrices
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "enter a value for row" << i << "column" << j << endl; 
			cin >> a[i][j];
		}
	};
}

void Matrix::randomMatrix(int n, int m) {
	srand(static_cast<unsigned>(time(NULL)));
	a.resize(n, vector<int>(m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = rand() % 10;
		}
	}
}

void Matrix::randomMatrix(int n) {
	srand(static_cast<unsigned>(time(NULL)));
	a.resize(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = rand() % 10;
		}
	}
}

void Matrix::printMatrix() {
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a[i].size(); j++) {
			std::cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

long Matrix::determinant(const genericMatrix& m) {
	long size = m.size();
	if (m[0].size() != size) {
		cout << "Non-Sqaure Matrix, exiting...";
		return -1;
	} else if (size == 1) {
		return m[0][0];
	}
	else if (size == 2) {
		// For a 2x2 matrix, the determinant is ad - bc
		return m[0][0] * m[1][1] - m[0][1] * m[1][0];
	}
	else {
		double det = 0;
		for (long col = 0; col < size; col++) {
			long subDet = determinant(submatrix(m, 0, col));
			det += (col % 2 == 0 ? 1 : -1) * m[0][col] * subDet;
		}
		return det;
	}
}

genericMatrix Matrix::copyMat()
{
	return a;
}

genericMatrix Matrix::matMultiply(genericMatrix n, genericMatrix m)
{
	int aColNum = n[0].size(), aRowNum = n.size();
	int bColNum = m[0].size(), bRowNum = m.size();
	
	// Multiplies Matrices if n == m
	if (aColNum == bRowNum) {
		// Prepares a matrix
		genericMatrix newMat;
		newMat.resize(aRowNum);
		for (int i = 0; i < aRowNum; i++) {
			newMat[i].resize(bColNum);
		}
	}
}

