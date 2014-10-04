#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long int num);

int main()
{
	long int num = 0;
	int count = 0;
	while(count!=10001){
		if(isPrime(num)){
			count++;
			cout << num << endl;
		}
		if(count!=10001)
			num++;
	}
	
	cout << count << ": " << num << endl;
	
	return 0;
}

bool isPrime(long int num)
{
	if(num==0||num==1)
		return false;
	if(num<0)
		return false;
	if(num==2)
		return true;
	for(int i=2; i<=sqrt(num); i++){
		if(num%i==0)
			return false;
	}
	return true;
}