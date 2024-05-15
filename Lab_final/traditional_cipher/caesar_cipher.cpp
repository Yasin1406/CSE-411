#include<bits/stdc++.h>
using namespace std;

void cieser_cipher_encryption(string &text, int key){
    int k; 
    for(int i = 0; i < text.size(); ++i){
        k=text[i];
        k -= 'a';
        k += key;
        k %= 26;
        text[i]= (k + 'a');
        text[i]-=('a'- 'A');
    }
}


void cieser_cipher_decryption(string &text, int key){
    int k; 
    for(int i = 0; i < text.size(); ++i){
        k=text[i];
        k -= 'A';
        k -= key;
        k += 26;
        k %= 26;
        text[i]= (k + 'A');
        text[i]+=('a' - 'A');
    }
}

int main(){

    string text;
    cout << "Enter text in small letter: ";
    cin >> text;
    int key;
    cout << "Enter shift: ";
    cin >> key;
    cout << "Before Encryption: " << text << '\n';  
    cieser_cipher_encryption(text, key);
    cout << "After Encryption: " << text << '\n';   
    cieser_cipher_decryption(text, key);
    cout << "After decryption: " << text << '\n';
    return 0;
}