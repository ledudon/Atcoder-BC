#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<char>> a(n, vector<char> (n));

    int i = 0,
        j = 0;
    char value;
    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> value;
            a.at(i).at(j) = value;
        }
    }

    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> value;
            if(a.at(i).at(j) != value)
            {
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
        }
    }
    
    return 0;
}