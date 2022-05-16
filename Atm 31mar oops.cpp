#include<iostream>
using namespace std;
int Addmoney(int m){
	int a;
	cout<<"how much money you want to add";
	cin>>a;
	m=m+a;
	cout<<"total money is"<<m;
	return 0;
	}
	int main(){
	int arr[8][2]={1,101,2,102,3,103,4,104,5,105,6,106,7,107,8,108};
	int username,password;
	cout<<"Enter your username and password";
	cin>>username>>password;
	int t;
	for(int i=0;i<9;i++){
		if(arr[i][0]==username){
			for(int i=0;i<9;i++){
				if(arr[i][1]==password){
					t=5;
					cout<<"Password is strong"<<endl;
				}
				}
			}
		}
		int acc;
		cout<<"If you want to add money press 1";
		cin>>acc;
		if(t==5 && acc==1){
			int m=0;
			Addmoney(m);
		}
	}

	

