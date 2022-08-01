#include<bits/stdc++.h>

using namespace std ; 

bool isval(int num){
	return ( (num >=94) and ( num <=727)) ;
}


int main(){
	int a,b,c ; 
	cin >> a >> b >> c ; 
	if(isval(a) and isval(b) and isval(c)){
		cout << max(a , max(b,c)) ; 
	}else{
		cout << "Error" ; 
	}
}

