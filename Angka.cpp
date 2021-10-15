#include <bits/stdc++.h>
using namespace std;


int main(){
	for (int i=1; i<=5; i++){
		
		for (int j=1; j<=5; j++){
			if (j<=i){
				cout<<j;
			} else{
				cout<<" ";
			}
			
		}
		
		for (int j=4; j>=1; j--){
			if (j<=i){
				cout<<j;
			} else{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
	
	for (int i=4; i>=1; i--){
		
		for (int j=1; j<=5; j++){
			if (j<=i){
				cout<<j;
			} else{
				cout<<" ";
			}
			
		}
		
		for (int j=4; j>=1; j--){
			if (j<=i){
				cout<<j;
			} else{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
}
