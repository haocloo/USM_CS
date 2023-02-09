#include <iostream>
using namespace std;
int main(){
	char c1, c2;
	int n1, n2, counter=0, row, col;
	cin>>c1>>n1>>c2>>n2>>row>>col;
	
	for(int i=0; i<(row*col); i++){
		if(counter<n1){
			// if counter = 0 to n1, print c1, add counter after printed
			cout<<c1;
			counter++;
		} 
		else if(counter<(n1+n2)){
			// if counter = n1 to n1+n2, print c2, add counter after printed
			cout<<c2;
			counter++;
		} 
		if(counter == n1+n2){
			// reset the counter if already printed n1+n2 characters
			counter=0;
		} 
		
		if(i%col == col-1) {
			// handle characters per line
			cout<<endl;
		}
	}
}

