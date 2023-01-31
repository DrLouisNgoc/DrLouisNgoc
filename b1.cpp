#include <iostream>
using namespace std;
int t = 0;
int n;
int main(){
	cout << "nhap vao so N: ";
	cin >> n;
	if (n<=50){
		for (int i=1; i <= n; i++){
			if (i > (n-1)/2){
				t++;
			}
		}
	}
	cout << "so cac so nguyen la: " << t <<  endl;
	return 0;	
}
