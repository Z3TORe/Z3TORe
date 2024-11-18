#include <iostream>
using namespace std;
int main()
{
    double X, Y, Z;
    double det_mat1, det_matx, det_maty, det_matz;
    double mat1[3][3] = {
        {1,7,3},
        {2,3,6},
        {3,2,3}
    };
     det_mat1 = mat1[0][0] * (mat1[1][1] * mat1[2][2] - mat1[1][2] * mat1[2][1])
              - mat1[0][1] * (mat1[1][0] * mat1[2][2] - mat1[1][2] * mat1[2][0])
              + mat1[0][2] * (mat1[1][0] * mat1[2][1] - mat1[1][1] * mat1[2][0]);
     //cout <<"Determinant of mat1 = "<< det_mat1;
    double mat2[3] = { 11,12,8 };
    double matx[3][3] = {
        {mat2[0],mat1[0][1],mat1[0][2]},
        {mat2[1],mat1[1][1],mat1[1][2]},
        {mat2[2],mat1[2][1],mat1[2][2]}
    };
    double maty[3][3] = {
        {mat1[0][0],mat2[0],mat1[0][2]},
        {mat1[1][0],mat2[1],mat1[1][2]},
        {mat1[2][0],mat2[2],mat1[2][2]}
    };
    double matz[3][3] = {
        {mat1[0][0],mat1[0][1],mat2[0]},
        {mat1[1][0],mat1[1][1],mat2[1]},
        {mat1[2][0],mat1[2][1],mat2[2]}
    };
    det_matx = matx[0][0] * (matx[1][1] * matx[2][2] - matx[1][2] * matx[2][1])
             - matx[0][1] * (matx[1][0] * matx[2][2] - matx[1][2] * matx[2][0])
             + matx[0][2] * (matx[1][0] * matx[2][1] - matx[1][1] * matx[2][0]);

    det_maty = maty[0][0] * (maty[1][1] * maty[2][2] - maty[1][2] * maty[2][1])
             - maty[0][1] * (maty[1][0] * maty[2][2] - maty[1][2] * maty[2][0])
             + maty[0][2] * (maty[1][0] * maty[2][1] - maty[1][1] * maty[2][0]);

    det_matz = matz[0][0] * (matz[1][1] * matz[2][2] - matz[1][2] * matz[2][1])
             - matz[0][1] * (matz[1][0] * matz[2][2] - matz[1][2] * matz[2][0])
             + matz[0][2] * (matz[1][0] * matz[2][1] - matz[1][1] * matz[2][0]);
    X = det_matx / det_mat1;
    Y = det_maty / det_mat1;
    Z = det_matz / det_mat1;
    cout << "X = " << X << endl;
    cout << "Y = " << Y << endl;
    cout << "Z = " << Z << endl;
}
