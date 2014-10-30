#include <iostream>
using namespace std;
string reverse(string x){
	
	if(x.length() == 0 || x.length() == 1){return x;}
	else{
//		for(int i = x.length()-1; i >= 0; i-- ){cout << x.substr(i,1) <<endl; }
//		cout << reverse(x.substr(0, x.length()-1)) << endl;
		return x.substr(x.length()-1, 1) + reverse(x.substr(0, x.length()-1)); 
 }

}
int main(){

	string x;
	cin >> x;
	x = reverse(x);
	cout << x << endl;
}
