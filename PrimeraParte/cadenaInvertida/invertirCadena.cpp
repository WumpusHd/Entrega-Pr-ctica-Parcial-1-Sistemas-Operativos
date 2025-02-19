#include <iostream>
#include <string>
using namespace std;

int main() {
    int i;
    string cad;
    cin >> cad;

    cout << cad << endl;
    string ans;
    for(i = cad.size()-1; i >= 0 ; i--){
       //cout << i << endl;
       ans += cad[i];
    }

    cout << ans << endl;



    return 0;
}

