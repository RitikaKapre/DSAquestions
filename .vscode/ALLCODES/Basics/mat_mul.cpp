#include<iostream>
using namespace std;

class matrices{
    private:
        int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    public:
        void input();
        void multiply();
        void display();

};


void matrices::input(){

    cout << "Enter rows and columns for matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
    cout << endl << "Enter elements of matrix:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
        cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }


}

void matrices::multiply(){
   // int mult[r1][c2] ;
    for(i = 0; i < r1; ++i){
        for(j = 0; j < c2; ++j){
            mult[i][j]=0;
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

}
void matrices::display(){
     cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
            cout << endl;
    }
}
int main(){
    matrices m;
        m.input();
    matrices m2;
    //     m2.input();
    // matrices mult;
        // m.multiply();
    m.display();
    m2.display();
}