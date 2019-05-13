#include <iostream>
using namespace std;

int main()
{
	int count, NextInteger, Integer0 = 0, Integer1 = 1, n = 22;
	
	for (count = 0; count < n; count++)
	{
		if (count <= 1)
			NextInteger=count;
			
		else
		{
			NextInteger = Integer0 + Integer1;
			Integer0 = Integer1;
			Integer1 = NextInteger;
		}
		cout << NextInteger << ", ";
	}
	
	return 0;
}
