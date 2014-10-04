#include <iostream>
#include <cmath>

using namespace std;

bool isDivisible(int num, int div);

int main()
{
	for(int i=2; i<=999999999; i++){
		int temp = i;
		bool divisible = true;
		for(int j=1; j<=20; j++){
			if(isDivisible(temp,j)==false){
				divisible = false;
				break;
			}
		}
		if(divisible==true){
			cout << temp << endl;
			return 0;
		}
	}
	
	return 0;
}

bool isDivisible(int num, int div)
{
	if(num%div!=0)
		return false;
	else{
		return true;
	}
}