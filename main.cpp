#include<iostream>
#include <Eigen/Dense>
#include <Eigen/Core>
using namespace std;
void testMatrix()
{
    // Example of matrix
    cout << "Example of matrix \n";
    // matrix definition
    Eigen::Matrix3f i, j;
    i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    // matrix output
    cout << "Example of output \n";
    cout << i << endl;
    // matrix add i + j
    cout << "i + j =\n"
        << i + j << endl;
    cout << "i - j =\n"
        << i - j << endl;
    // cout << "Doing i += j;" << endl;
    // i += j;
    // cout << "Now i =\n"
    //           << i << endl;
    // matrix scalar multiply i * 2.0
    cout << "i * 2.0 =\n"
        << i * 2.0 << endl;
    // matrix multiply i * j
    cout << "i * j =\n"
        << i * j << endl;
    // matrix multiply vector i * v
    Eigen::Vector3f v(1.0f, 2.0f, 3.0f);
    cout << "i * v =\n"
        << i * v << endl;
}
int main() {
    testMatrix();
	return 0;
}