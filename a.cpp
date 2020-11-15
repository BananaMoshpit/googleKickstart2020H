#include<iostream>
using namespace std;

int main (){
 int n,k,s, test, i, answ;


cin >> test;

for(i =0 ; i < test; i++){
    cin >> n;
    cin >> k;
    cin >> s;

answ = (k - 1 + n + 1 < k - 1 + k - s + n - s) ? (n + k) : ( k - 1 + k - s + n - s);
//    if ( k - 2*s < 0)
//        cout << "Case #"<< i << ": " << (k-1+k-s+n-s+1) << endl;
//    else
//        cout << "Case #"<< i << ": " << (n+k) << endl;

        cout << "Case #"<< i << ": " << answ << endl;
}
return 0;
}