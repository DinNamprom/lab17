#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

int randomVector(unsigned int N){	
    vector<int> v(N);
    for(unsigned int i = 0; i < N; i++) v.push_back(rand()%10);
    return v;
}

void showVector(vector<int> n){
	cout << "[";
	for(unsigned int i = 0; i < n.size(); i++){
		cout << n[i];
		if(i == n.size()) cout << "]";
		else cout << " ";
	}
}

_________________ dotProduct(_____________________________){
	int sum = 0;
	for(unsigned int i = 0; _____________________; i++) sum += _________________;	
	_________________;
}

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}
