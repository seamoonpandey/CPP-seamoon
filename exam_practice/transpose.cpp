/*
This program features calculation of transpose of matrix using the concepts of matrix
*/

//preprocessor directives
#include <iostream>

using namespace std;

//declaration of Matrix class
class Matrix{
    //make the data private
    private:
    int rows,columns;//number of rows and columns
    int **data;//data in the matrix array
    public:
    //constructor with the rows and columns size of the matrix
    Matrix(int rows, int column):rows(rows),columns(columns) {
        //we make a pointer array to point through the row of the matrix
        data = new int*[rows];
        for(int i = 0 ; i < rows ; i++){
            //here we do not use the aestrik "*" operator for the columns because we do not need to allocate memory for that as it is the part of the row.
            data[i] = new int[columns]; // here data[i] points to the the initial value of the pointer in the rows array
        }
    }

    //getter
    void getMatrix(){
        cout<<"Enter Matrix elements"<<endl;
        for(int i = 0;i<rows ;i++){
            for(int j = 0;j<columns;j++){
                cin>>data[i][j];
            }
        }
    }
    //printer
     void printMatrix() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
     }
     
     Matrix transpose(){
        Matrix temp(columns,rows);

        for(int i = 0; i < rows;i++){
            for(int j = 0; j < columns;j++){
                temp.data[j][i] = data[i][j];
            }
        }
        return temp;
     }
    //we need to destroy the allocated memory
    ~Matrix(){
        for(int i = 0 ; i < rows; i++){
            //this loop deletes each and every data inside the array
            delete[] data[i];
        }
        delete[] data; //this deletes the array itself
    }
};

int main(){
    int r,c;
    cout<<"Enter the number rows X columns"<<endl;
    cin>>r>>c;
    Matrix mat1(r,c);
    mat1.getMatrix();
    mat1.printMatrix();
    Matrix mat2 = mat1.transpose();
    mat2.printMatrix();
    return 0;
}
