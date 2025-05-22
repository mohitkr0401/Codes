#include<bits/stdc++.h>
using namespace std;

void Pattern(int n) {
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        Pattern(n);
    }
    return 0;
}