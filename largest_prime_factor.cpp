#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long int num);

int main()
{
	long int n;
	cout << "Please Enter an Integer : ";
	cin >> n;
	
	if(isPrime(n)==true)
		cout << "Largest Prime Number is ... " << n << endl;
	else{
		while(n!=1){
			for(long int i=0; i<=n; i++){
				if(isPrime(i)==true){
					if(n%i==0){
						n = n/i;
						cout << i << " ";
					}
				}
			}
			cout << endl;
		}
	}
	
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
	for(int i=3; i< sqrt(num); i++){
		if(num%i==0)
			return false;
	}
	return true;
}
