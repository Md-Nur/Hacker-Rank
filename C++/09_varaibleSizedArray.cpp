//Program Name: variable size array

/*	====	included header file	====	*/
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>
#include <list>
#include <map>

/*	====	Stucture, Uninons, Predefine Marcos & namespaces	====	*/
using namespace std;

/*	====	Declaration of classes & Functions	====	*/

/*	====	Classes	====	*/

/*	====	Functions	====	*/

/*	+-+-+-+-+-+-+-+-+-+-+
        Main Function
    +-+-+-+-+-+-+-+-+-+-+	*/
int main()
{
    int numOfArray, numOfQuery, i, j, n,t;
    cin >> numOfArray >> numOfQuery;

    vector<int> arr[numOfArray] ;

    for (i = 0; i < numOfArray; i++)
    {
        cin >> n;
        while(n--)
        {
            cin>>t;
            arr[i].push_back(t);
        }
    }
    while (numOfQuery--)
    {
        cin >> i >> j;
        cout << arr[i][j] << endl;
    }

    return 0;
}