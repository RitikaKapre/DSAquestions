#include <iostream>
using namespace std;

class matrix
{

    int a[10][10], m, n;

public:
    void input();
    void output();
    matrix mult(matrix x);
    ~matrix()
    {
        cout << "object is destroyed";
    }

    void input()
    {
        int i, j;
        cout << "Enter order of matrix:";
        cin >> m >> n;
        cout << "Enter matrix elements:";
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void output()
    {
        int i, j;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << a[i][j] << "\t";
                cout << endl;
            }
        }
    }

}; 
    

int main()
{
    matrix a, b, c;
    cout << "Enter matrix A order and elements:" << endl;
    a.input();

  
    a.output();
    //     cout << "Enter matrix B order and elements:" << endl;
    //   b.input();
    cout << "Resulting matrix is:" << endl;
    // b.output();
    return 0;
}
