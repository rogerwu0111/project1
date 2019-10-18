#include <iostream>
#include <fstream>
using namespace std;


// y is the particular column
// return th smallest row with 1
int checkHeight(int**arr, int y, int rows)
{
    int height = rows;
    for (int i=rows-1; i>3; i--)
    {
        if (arr[i][y] == 1)
        {
            height = i;
        }
        else {}
    }
    return height;
}

// x is the reference column
void putblock(string ch, int x, int**arr, int rows)
{
    if (ch == "T1")
    {
        int col1Height = checkHeight(arr, x-1, rows);
        int col2Height = checkHeight(arr, x, rows);
        int col3Height = checkHeight(arr, x+1, rows);

        if (col1Height <= col2Height-1 && col1Height <= col3Height)
        {
            arr[col1Height-1][x-1] = 1;
            arr[col1Height-1][x] = 1;
            arr[col1Height][x] = 1;
            arr[col1Height-1][x+1] = 1;
        }

        else if (col2Height-1 <= col1Height && col2Height-1 <= col3Height)
        {
            arr[col2Height-2][x-1] = 1;
            arr[col2Height-2][x] = 1;
            arr[col2Height-1][x] = 1;
            arr[col2Height-2][x+1] = 1;
        }

        else if (col3Height <= col1Height && col3Height <=col2Height-1)
        {
            arr[col3Height-1][x-1] = 1;
            arr[col3Height-1][x] = 1;
            arr[col3Height][x] = 1;
            arr[col3Height-1][x+1] = 1;
        }

        else {}
    }



    else if (ch == "T2")
    {
        int col1Height = checkHeight(arr, x-1, rows);
        int col2Height = checkHeight(arr, x, rows);

        if (col1Height <= col2Height-1)
        {
            arr[col1Height-1][x-1] = 1;
            arr[col1Height-1][x] = 1;
            arr[col1Height][x] = 1;
            arr[col1Height-2][x] = 1;
        }


        else if (col2Height-1 <= col1Height)
        {
            arr[col2Height-2][x-1] = 1;
            arr[col2Height-1][x] = 1;
            arr[col2Height-2][x] = 1;
            arr[col2Height-3][x] = 1;
        }

        else{}
    }

    else if (ch == "T3")
    {
        int col1Height = checkHeight(arr, x-1, rows);
        int col2Height = checkHeight(arr, x, rows);
        int col3Height = checkHeight(arr, x+1, rows);

        if (col1Height <= col2Height && col1Height <= col3Height)
        {
            arr[col1Height-1][x-1] = 1;
            arr[col1Height-1][x] = 1;
            arr[col1Height-2][x] = 1;
            arr[col1Height-1][x+1] = 1;
        }

        else if (col2Height <= col1Height && col2Height <= col3Height)
        {
            arr[col2Height-1][x-1] = 1;
            arr[col2Height-1][x] = 1;
            arr[col2Height-2][x] = 1;
            arr[col2Height-1][x+1] = 1;
        }

        else if (col3Height <= col1Height && col3Height <=col2Height)
        {
            arr[col3Height-1][x-1] = 1;
            arr[col3Height-1][x] = 1;
            arr[col3Height-2][x] = 1;
            arr[col3Height-1][x+1] = 1;
        }

        else {}

    }

    else if (ch == "T4")
    {
        int col1Height = checkHeight(arr, x-1, rows);
        int col2Height = checkHeight(arr, x, rows);

        if (col1Height-1 <= col2Height)
        {
            arr[col1Height-2][x] = 1;
            arr[col1Height-1][x-1] = 1;
            arr[col1Height-2][x-1] = 1;
            arr[col1Height-3][x-1] = 1;
        }

        else if (col2Height <= col1Height-1)
        {
            arr[col2Height-1][x] = 1;
            arr[col2Height-1][x-1] = 1;
            arr[col2Height][x-1] = 1;
            arr[col2Height-2][x-1] = 1;
        }

        else{}
    }

    else if (ch == "L1")
    {
        int col1Height = checkHeight(arr, x-1, rows);
        int col2Height = checkHeight(arr, x, rows);

        if (col1Height <= col2Height)
        {
            arr[col1Height-1][x] = 1;
            arr[col1Height-1][x-1] = 1;
            arr[col1Height-2][x-1] = 1;
            arr[col1Height-3][x-1] = 1;
        }

        else if (col2Height <= col1Height)
        {
            arr[col2Height-1][x] = 1;
            arr[col2Height-1][x-1] = 1;
            arr[col2Height-2][x-1] = 1;
            arr[col2Height-3][x-1] = 1;
        }

        else{}
    }

    else if (ch == "L2")
    {
        int col1Height = checkHeight(arr, x-1, rows);
        int col2Height = checkHeight(arr, x, rows);
        int col3Height = checkHeight(arr, x+1, rows);

        if (col1Height-1 <= col2Height && col1Height-1 <= col3Height)
        {
            arr[col1Height-1][x-1] = 1;
            arr[col1Height-2][x-1] = 1;
            arr[col1Height-2][x] = 1;
            arr[col1Height-2][x+1] = 1;
        }

        else if (col2Height <= col1Height-1 && col2Height <= col3Height)
        {
            arr[col2Height][x-1] = 1;
            arr[col2Height-1][x-1] = 1;
            arr[col2Height-1][x] = 1;
            arr[col2Height-1][x+1] = 1;
        }

        else if (col3Height <= col1Height-1 && col3Height <= col2Height)
        {
            arr[col3Height][x-1] = 1;
            arr[col3Height-1][x-1] = 1;
            arr[col3Height-1][x] = 1;
            arr[col3Height-1][x+1] = 1;
        }

        else {}
    }

    else if (ch == "L3")
    {
        int col1Height = checkHeight(arr, x-1, rows);
        int col2Height = checkHeight(arr, x, rows);

        if (col1Height <= col2Height-2)
        {
            arr[col1Height-1][x-1] = 1;
            arr[col1Height-1][x] = 1;
            arr[col1Height][x] = 1;
            arr[col1Height+1][x] = 1;
        }

        else if (col2Height-2 <= col1Height)
        {
            arr[col2Height-3][x-1] = 1;
            arr[col2Height-1][x] = 1;
            arr[col2Height-2][x] = 1;
            arr[col2Height-3][x] = 1;
        }

        else{}
    }

    else if (ch == "L4")
    {
        int col1Height = checkHeight(arr, x-1, rows);
        int col2Height = checkHeight(arr, x, rows);
        int col3Height = checkHeight(arr, x+1, rows);

        if (col1Height <= col2Height && col1Height <= col3Height)
        {
            arr[col1Height-1][x-1] = 1;
            arr[col1Height-1][x] = 1;
            arr[col1Height-1][x+1] = 1;
            arr[col1Height-2][x+1] = 1;
        }

        else if (col2Height <= col1Height && col2Height <= col3Height)
        {
            arr[col2Height-1][x-1] = 1;
            arr[col2Height-1][x] = 1;
            arr[col2Height-1][x+1] = 1;
            arr[col2Height-2][x+1] = 1;
        }

        else if (col3Height <= col1Height && col3Height <=col2Height)
        {
            arr[col3Height-1][x-1] = 1;
            arr[col3Height-1][x] = 1;
            arr[col3Height-1][x+1] = 1;
            arr[col3Height-2][x+1] = 1;
        }

        else {}
    }

    else if (ch == "J1")
    {
        int col1Height = checkHeight(arr, x-1, rows);
        int col2Height = checkHeight(arr, x, rows);

        if (col1Height <= col2Height)
        {
            arr[col1Height-1][x-1] = 1;
            arr[col1Height-1][x] = 1;
            arr[col1Height-2][x] = 1;
            arr[col1Height-3][x] = 1;
        }

        else if (col2Height <= col1Height)
        {
            arr[col2Height-1][x-1] = 1;
            arr[col2Height-1][x] = 1;
            arr[col2Height-2][x] = 1;
            arr[col2Height-3][x] = 1;
        }

        else{}
    }

    else if (ch == "J2")
    {
        int col1Height = checkHeight(arr, x-1, rows);
        int col2Height = checkHeight(arr, x, rows);
        int col3Height = checkHeight(arr, x+1, rows);

        if (col1Height <= col2Height && col1Height <= col3Height)
        {
            arr[col1Height-1][x-1] = 1;
            arr[col1Height-2][x-1] = 1;
            arr[col1Height-1][x] = 1;
            arr[col1Height-1][x+1] = 1;
        }

        else if (col2Height <= col1Height && col2Height <= col3Height)
        {
            arr[col2Height-1][x-1] = 1;
            arr[col2Height-2][x-1] = 1;
            arr[col2Height-1][x] = 1;
            arr[col2Height-1][x+1] = 1;
        }

        else if (col3Height <= col1Height && col3Height <=col2Height)
        {
            arr[col3Height-1][x-1] = 1;
            arr[col3Height-2][x-1] = 1;
            arr[col3Height-1][x] = 1;
            arr[col3Height-1][x+1] = 1;
        }

        else {}
    }

    else if (ch == "J3")
    {
        int col1Height = checkHeight(arr, x-1, rows);
        int col2Height = checkHeight(arr, x, rows);

        if (col1Height-2 <= col2Height)
        {
            arr[col1Height-1][x-1] = 1;
            arr[col1Height-2][x-1] = 1;
            arr[col1Height-3][x-1] = 1;
            arr[col1Height-3][x] = 1;
        }

        else if (col2Height <= col1Height-2)
        {
            arr[col2Height-1][x] = 1;
            arr[col2Height-1][x-1] = 1;
            arr[col2Height][x-1] = 1;
            arr[col2Height+1][x-1] = 1;
        }

        else{}
    }

    else if (ch == "J4")
    {
        int col1Height = checkHeight(arr, x-1, rows);
        int col2Height = checkHeight(arr, x, rows);
        int col3Height = checkHeight(arr, x+1, rows);

        if (col1Height <= col2Height && col1Height <= col3Height-1)
        {
            arr[col1Height-1][x-1] = 1;
            arr[col1Height-1][x] = 1;
            arr[col1Height-1][x+1] = 1;
            arr[col1Height][x+1] = 1;
        }

        else if (col2Height <= col1Height && col2Height <= col3Height-1)
        {
            arr[col2Height-1][x-1] = 1;
            arr[col2Height-1][x] = 1;
            arr[col2Height-1][x+1] = 1;
            arr[col2Height][x+1] = 1;
        }

        else if (col3Height-1 <= col1Height && col3Height-1 <= col2Height)
        {
            arr[col3Height-2][x-1] = 1;
            arr[col3Height-2][x] = 1;
            arr[col3Height-1][x+1] = 1;
            arr[col3Height-2][x+1] = 1;
        }

        else {}
    }

    else if (ch == "S1")
    {
        int col1Height = checkHeight(arr, x-1, rows);
        int col2Height = checkHeight(arr, x, rows);
        int col3Height = checkHeight(arr, x+1, rows);

        if (col1Height <= col2Height && col1Height <= col3Height+1)
        {
            arr[col1Height-1][x-1] = 1;
            arr[col1Height-1][x] = 1;
            arr[col1Height-2][x] = 1;
            arr[col1Height-2][x+1] = 1;
        }

        else if (col2Height <= col1Height && col2Height <= col3Height+1)
        {
            arr[col2Height-1][x-1] = 1;
            arr[col2Height-1][x] = 1;
            arr[col2Height-2][x] = 1;
            arr[col2Height-2][x+1] = 1;
        }

        else if (col3Height+1 <= col1Height && col3Height+1 <= col2Height)
        {
            arr[col3Height][x-1] = 1;
            arr[col3Height][x] = 1;
            arr[col3Height-1][x] = 1;
            arr[col3Height-1][x+1] = 1;
        }

        else {}
    }

    else if (ch == "S2")
    {
        int col1Height = checkHeight(arr, x-1, rows);
        int col2Height = checkHeight(arr, x, rows);

        if (col1Height <= col2Height-1)
        {
            arr[col1Height-1][x-1] = 1;
            arr[col1Height-2][x-1] = 1;
            arr[col1Height-1][x] = 1;
            arr[col1Height][x] = 1;
        }


        else if (col2Height-1 <= col1Height)
        {
            arr[col2Height-2][x-1] = 1;
            arr[col2Height-3][x-1] = 1;
            arr[col2Height-1][x] = 1;
            arr[col2Height-2][x] = 1;
        }

        else{}
    }

    else if (ch == "Z1")
    {
        int col1Height = checkHeight(arr, x-1, rows);
        int col2Height = checkHeight(arr, x, rows);
        int col3Height = checkHeight(arr, x+1, rows);

        if (col1Height+1 <= col2Height && col1Height+1 <= col3Height)
        {
            arr[col1Height-1][x-1] = 1;
            arr[col1Height-1][x] = 1;
            arr[col1Height][x] = 1;
            arr[col1Height][x+1] = 1;
        }

        else if (col2Height <= col1Height+1 && col2Height <= col3Height)
        {
            arr[col2Height-2][x-1] = 1;
            arr[col2Height-2][x] = 1;
            arr[col2Height-1][x] = 1;
            arr[col2Height-1][x+1] = 1;
        }

        else if (col3Height <= col1Height+1 && col3Height <= col2Height)
        {
            arr[col3Height-2][x-1] = 1;
            arr[col3Height-2][x] = 1;
            arr[col3Height-1][x] = 1;
            arr[col3Height-1][x+1] = 1;
        }

        else {}
    }

    else if (ch == "Z2")
    {
        int col1Height = checkHeight(arr, x-1, rows);
        int col2Height = checkHeight(arr, x, rows);

        if (col1Height-1 <= col2Height)
        {
            arr[col1Height-1][x-1] = 1;
            arr[col1Height-2][x-1] = 1;
            arr[col1Height-2][x] = 1;
            arr[col1Height-3][x] = 1;
        }

        else if (col2Height <= col1Height-1)
        {
            arr[col2Height-1][x-1] = 1;
            arr[col2Height][x-1] = 1;
            arr[col2Height-2][x] = 1;
            arr[col2Height-1][x] = 1;
        }

        else{}
    }

    else if (ch == "I1")
    {
        int col1Height = checkHeight(arr, x-1, rows);
        arr[col1Height-1][x-1] = 1;
        arr[col1Height-2][x-1] = 1;
        arr[col1Height-3][x-1] = 1;
        arr[col1Height-4][x-1] = 1;
    }

    else if (ch == "I2")
    {
        int MaxiHeight = checkHeight(arr, x-1, rows);
        for (int i=0; i<3; i++)
        {
            if (MaxiHeight > checkHeight(arr, x+i, rows))
            {MaxiHeight = checkHeight(arr, x+i, rows);}

            else {}
        }
        arr[MaxiHeight-1][x-1] = 1;
        arr[MaxiHeight-1][x] = 1;
        arr[MaxiHeight-1][x+1] = 1;
        arr[MaxiHeight-1][x+2] = 1;
    }

    else if (ch == "O")
    {
        int MaxiHeight = checkHeight(arr, x-1, rows);
        if (MaxiHeight > checkHeight(arr, x, rows))
        {
            MaxiHeight = checkHeight(arr, x, rows);
        }
        else {}

        arr[MaxiHeight-1][x-1] = 1;
        arr[MaxiHeight-1][x] = 1;
        arr[MaxiHeight-2][x-1] = 1;
        arr[MaxiHeight-2][x] = 1;
    }

    else {}
}


void checkRemove (int**arr, int rows, int cols)
{
    for (int i=4; i<rows; i++)
    {
        int checkrow = 1;
        for (int j=0; j<cols; j++)
        {
            if (arr[i][j] == 0) {checkrow = 0;}
            else {}
        }

        if (checkrow)
        {
            for (int k=i; k>0; k--)
            {
                for (int l=0; l<cols; l++)
                {
                    arr[k][l] = arr[k-1][l];
                }
            }
            for (int m=0; m<cols; m++)
            {arr[0][m] = 0;}

            i--;
        }
    }
}

int checkPass(int**arr, int cols)
{
    for (int j=0; j<cols; j++)
    {
        if (arr[3][j] == 1)
        {
            return 0;
        }
        else {}
    }
    return 1;
}


int main()
{
    ifstream file1;
    ofstream file2;
    file1.open("Tetris.data");
    file2.open("Tetris.final");

    int rows, cols;
    file1 >> rows;
    file1 >> cols;

    int**A = new int*[rows+4];
    for (int i=0; i<rows+4; i++)
    {
        A[i] = new int [cols];
    }

    for (int i=0; i<rows+4; i++)
    {
        for (int j=0; j<cols; j++)
        {
            A[i][j] = 0;
        }
    }

    int i=1;
    while(i)
    {
        string cha;
        file1 >> cha;
        if (cha != "End")
        {
            int x;
            file1 >> x;
            putblock(cha, x, A, rows+4);
            checkRemove(A, rows+4, cols);
            if (!checkPass(A, cols)) {i=0;}
            else {}
        }
        else i=0;
    }

    for (int i=4; i<rows+4; i++)
    {
        for (int j=0; j<cols; j++)
        {
            file2 << A[i][j];
        }
        file2 << endl;
    }

    for (int i=0; i<rows+4; i++)
    {
        delete [] A[i];
    }
    delete []A;

    return 0;
}