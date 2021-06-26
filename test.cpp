#include<bits/stdc++.h>
class matrix
{
    int ROWS{50}, COLS{50};
    std::vector<std::vector<int>> table{ROWS, std::vector<int>{COLS, 0}};
    public:
    void printSize()
    {
        std::cout << "the size of matrix is : " << sizeof(table) << std::endl;
    }
};

int main()
{
    matrix obj;
    obj.printSize();
}
