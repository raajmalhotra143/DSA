#include <iostream>
#include <vector>
using namespace std;

class Matrix {
    int rows, cols;
    vector<vector<int>> data;

public:
    Matrix(int r, int c) : rows(r), cols(c), data(r, vector<int>(c)) {}

    void input() {
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                cin >> data[i][j];
    }

    void display() const {
        for (const auto& row : data) {
            for (int val : row)
                cout << val << " ";
            cout << endl;
        }
    }

    Matrix multiply(const Matrix& m) const {
        Matrix res(rows, m.cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < m.cols; ++j)
                for (int k = 0; k < cols; ++k)
                    res.data[i][j] += data[i][k] * m.data[k][j];
        return res;
    }

    bool isMultiplicableWith(const Matrix& m) const {
        return cols == m.rows;
    }
};

int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1;
    Matrix a(r1, c1);
    a.input();

    cin >> r2 >> c2;
    Matrix b(r2, c2);
    b.input();

    if (!a.isMultiplicableWith(b)) {
        cout << "Incompatible matrices\n";
        return 0;
    }

    Matrix c = a.multiply(b);
    c.display();

    return 0;
}
