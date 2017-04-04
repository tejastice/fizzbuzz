/// FizzBuzz

#include <iostream>
using namespace std;


#include "fizz.h"

int main(){

	for(int x=1;x<=30;x++){

		if(x%3==0 && x%5!=0){
			cout << "fizz" << endl;
		}
		else if(x%5==0 && x%3!=0){
			cout << "buzz" << endl;
		}
		else if(x%3==0 && x%5==0){
			cout << "fizzbuzz!" << endl;
		}
		else if (x==20) {
			cout << "20" << endl;
		}
		else{
			cout << x << endl;
		}

	}


	return 0;

}