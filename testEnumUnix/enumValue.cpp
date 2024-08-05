// modify @t2. before merge t1
#include <iostream>
using namespace std;

int main()
{
	enum 
	{
		V1 = -2,
		V2,
		V3,
		V4
	};

	cout << V1 << ", " << V2 << ", " << V3 << ", " << V4 << endl;
}