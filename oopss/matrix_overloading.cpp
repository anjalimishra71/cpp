#include <iostream>
using namespace std;
class matrix
{
    int m[3][3];
    int row, col;

public:
    void getdata();
    matrix operator+(matrix);
    void display()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << m[i][j] << " ";
            }
            cout << endl;
        }
    }
};
void matrix::getdata()
{
    cout << "enter row";
    cin >> row;
    cout << "enter col";
    cin >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> m[i][j];
        }
    }
}
matrix matrix::operator+(matrix am)
{
    matrix temp;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp.m[i][j] = m[i][j] + am.m[i][j];
        }
        temp.row = row;
        temp.col = col;
    }
    return temp;
}
int main()
{
    matrix m1, m2, m3;
    m1.getdata();
    m2.getdata();
    m3 = m1 + m2;
    m3.display();
    return 0;
}