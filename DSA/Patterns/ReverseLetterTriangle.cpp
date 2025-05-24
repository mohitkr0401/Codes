#include<bits/stdc++.h>
using namespace std;

void Pattern(int n) {
  for(int i=n;i>=1;i--){
		for(char j='A';j<'A'+i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}

    //one more way to print the same pattern
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+(n-i-1);j++){
            cout<<j<<" ";
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