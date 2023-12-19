/*
    There is a shortage of Christmas trees this year, however, you can help! In the absence of real trees,
    Santa is going to teach the children of the world the magic of the console.

    Unfortunately, being approximately 1,751 years old, Santa can only write binary, and needs your help to
     write a program in a more modern language.
    Instructions
    Input

    Given the children of the world have varying screen sizes, Santa has tasked you with printing a Christmas
    tree to the console for a given argument of the tree’s height to accommodate for all of the children.

    Output

    For example a tree with a height of 2 looks like this:

    tree
     X
    XXX
     I

    And a tree with a height of 3 looks like this:

    3 height tree
      X
     XXX
    XXXXX
      I
*/

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