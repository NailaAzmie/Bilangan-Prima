#include <iostream>
using namespace std ;

int main () {
	int n ;
	bool Prima = true ;
	
	cout << "Mementukan bilangan prima atau bukan" << endl ;
	cout << "Masukkan angka : " ;
	cin >> n ;
	
	for ( int i = 2 ; i <= n/2 ; i++ ) { 
		if ( n % i == 0 ) {
			Prima = false ;
			break;
		}
	}
	if (Prima) {
		cout << n << " adalah bilangan prima" << endl ;
	} else {
		cout << n<< " adalah bukan bilangan prima" ;
	}
}
