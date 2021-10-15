#include <bits/stdc++.h>

using namespace std;

string kalimat;
int cipher;

void split_input(string input){
	bool buka=false;

	string inputString = "";
	
	for (int i=0; i<=input.length(); i++){
		
		if (input[i]==char(34) && buka==false){
			buka=true;
			continue;
		} else
		if (input[i]==char(34) && buka==true){
			buka=false;
			continue;
		}
		
		
		if (buka==true){
			inputString+=input[i];
		}
	}
	
	kalimat = inputString;
	
	}
	
	int main(){
		string input;
	
		getline(cin, input);
		split_input(input);
		
//		cout<<kalimat<<endl;
		
		int n = kalimat.length();
		
		for (int i=0; i<=n/2; i++){
			swap(kalimat[i],kalimat[n-1 -i]);
		}
		
		cout<<kalimat<<endl;
	}
	
