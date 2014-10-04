#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int sq = 0;
	int result;
	for(int i=1; i<=100; i++){
		sum += i;
		sq += i*i;
	}
	
	sum = sum*sum;
	
	result = sum - sq;
	cout << result << endl;
	
	return 0;
}