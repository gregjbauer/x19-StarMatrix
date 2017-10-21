#include<string>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
        int inputRow;
        int inputCol;

        cout<<"Enter the amount of rows you want. "<<endl;
        cin>>inputRow;
        cout<<"Enter the amount of columns you want. "<<endl;
        cin>>inputCol;
        vector<vector<string> >matrix;
        for( int r = 0; r < inputRow; r++)
        {
                matrix.resize(inputRow);
                for ( int c = 0; c < inputCol; c++)
                {
                        matrix[r].resize(inputCol);
                        if( r < inputRow)
                        {
                                cout<<"*";
                        }    
                }
        cout<<endl;        
        }
        return 0;
}
