#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int counter = 1101;
    stringstream fixedstream;
    fixedstream<<bitset<16> (counter);
    cout << fixedstream.str();
}