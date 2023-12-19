#include <iostream>

using namespace std;
void DrawTree(int treeSize);


int main()
{
    int treeSize;
    cout << "Choose the size of your tree\n";
    cin >> treeSize;
    DrawTree(treeSize);
}

void DrawTree(int treeSize)
{
    const int maxNumCharRow = 2 * treeSize + 1;
    const int centralPosition = maxNumCharRow / 2 + 1;

    for (int row = 0; row < treeSize; ++row)
    {  
        const int numCharRow = 2 * row + 1;

        for (int column = 0; column < maxNumCharRow; ++column)
        {
            if (column == (centralPosition) or
                    (column >= (centralPosition - numCharRow / 2) and 
                    column <= (centralPosition + numCharRow / 2))
                ){
            
                cout << "X";
            }
            else {
                cout << " ";
            }       
        }
        cout << endl;
    }
    for (int column = 0; column <= centralPosition; ++column)
    {
        if(column < centralPosition) cout << " ";
        else cout << "I";
    }
}