#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool isPalindromic(int num);

int main()
{
	int product;
	int max = 0;
	int n1, n2;
	for(int i=999; i>0; i--){
		for(int j=999; j>0; j--){
			product = i*j;
			if(isPalindromic(product)){
				if(max < product){
					max = product;
					n1 = i;
					n2 = j;
				}
			}
		}
	}
	
	cout << n1 << " * " << n2 << " = " << max << endl;
	
	return 0;
}

bool isPalindromic(int num)
{
	stringstream palin;
	palin << num;
	string p = palin.str();
	int s1 = 0;
	int s2 = p.size()-1;
	int comp = p.size()/2;
	for(int i=0; i<comp; i++){
		if(p[s1]!=p[s2])
			return false;
		s1++;
		s2--;
	}
	return true;
}