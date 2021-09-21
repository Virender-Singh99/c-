#include <iostream>

using namespace std;

int main() {
	
	int n, m = 0, o, x;
	
	cin >> n;
	
	for( int i=0; i<n; i++ ) {
		cin >> x;
		
		if( x > m ) {
			m = x; 
			o = 1;
		}
		else if( x == m )
			o++;
	}
	
	cout << o;
	
	
	return 0;
}
