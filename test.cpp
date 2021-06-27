#include<bits/stdc++.h>
class matrix
{
    int ROWS{50}, COLS{50};
    std::vector<std::vector<int>> table{ROWS, std::vector<int>{COLS, 0}};
    
public:
    void printer()
    {
        std::vector<std::vector<int>>::iterator row;
        std::vector<int>::iterator col;
        
        for(row = begin(table); row != end(table); row++)
        {
            for(col = row->begin(); col != row->end(); col++)
            {
                std::cout << *col << ' ';
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    void printSize()
    {
        std::cout << "the size of matrix is : " << table.size() << std::endl;
    }
};

int main()
{
    matrix obj;
    obj.printSize();
    obj.printer();
}
