#include <vector>
#include <iostream>
#include <ctime>

using namespace std;

class Matrix {
private:
	
public:
	// Default constructor
	Matrix() {}
	vector<vector<int>> a;
	vector<vector<int>> randomMatrix(int n, int m);
	void printMatrix();
	int determinant(vector<vector<int>> sqrMat);
};