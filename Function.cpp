#include "Function.h"

string helperHor(int amount, int spaces,string ch)
{
    string z = "";
    for (int i = 0; i < spaces; i++)
    {
        z += " ";
    }
    for (int i = 0; i < amount; i++)
    {
        z += ch;
    }
    return z + "\n";
}

string helperVert(int amount, int spaces,string ch)
{
    string z = "";
    for (int i = 0; i < spaces; i++)
    {
        z += " ";
    }
    for (int i = 0; i < amount; i++)
    {
        z += ch;
        if (i != amount - 1)
        {
            z += " ";
        }
    }
    return z + "\n";
}

string createPyramid(int num)
{
    if(num == 0)
    {
        return "Invalid pyramid size.";
    }
    else if(num >= 500)
    {
        return "Pyramid size too large.";
    }
    else if(num < 0)
    {
        return "Negative pyramid size.";
    }
    int horizontal_lines = 1 + 2 * (num - 1);
    string toReturn = helperHor(horizontal_lines,1,"-");
    for (int i = num, spaces = 1,vert = num + 1; i > 0; i--,spaces++,horizontal_lines-=2,vert--)
    {
        toReturn =  helperHor(horizontal_lines,spaces,"-") + helperVert(vert,spaces - 1,"|" ) + toReturn;
    }
    return toReturn;
}

int getUserInput()
{
    int x = 0;
    cout << "How tall do you want your pyramid to be?" << endl;
    cin >> x;
    return x;
}


