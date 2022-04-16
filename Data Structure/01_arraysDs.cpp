//Program Name: Arrays and DS

/*	====	included header file	====	*/
#include <iostream>
//#include <iomanip>
//#include <cstring>
//#include <cmath>
//#include <string>
//#include <algorithm>
//#include <fstream>
//#include <vector>
//#include <list>
//#include <map> 

/*	====	Stucture, Uninons, Predefine Marcos & namespaces	====	*/
using namespace std;

/*	====	Classes	====	*/

/*	====	Functions	====	*/

/*	+-+-+-+-+-+-+-+-+-+-+
        Main Function
    +-+-+-+-+-+-+-+-+-+-+	*/
int main()
{
    int n;
    cin>>n;

int a[n];
for(int i=0;i<n;i++)
{
   cin>>a[i];
}
for (int j = 0; j < n; j++)
{
    cout << a[n-j-1]<<" ";
}

    return 0;
}