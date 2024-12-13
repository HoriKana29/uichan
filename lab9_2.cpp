#include<iostream>
using namespace std;

void printO(int N,int M){
	if(N<=0 or M<=0) cout << "Invalid input";
		for(int i = 0;i<N;i+=1){
			for(int j = 0;j<M;j+=1){
				cout<<"O";
			}
			cout<<"\n";
		}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
