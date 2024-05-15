// #include"aes_ecb.hpp"
// #include"aes_ctr.hpp"
#include"aes_cbc.hpp"
using namespace std;

int main()
{
    ifstream fp;
    fp.open("input.txt");
    string inpt, encr ;
    string line;
    while(getline(fp, line)){
        inpt += line;
        inpt += "\n";
    }
    inpt.pop_back();
    // cout << "Input : " ;
    // getline( cin, inpt );
    encr = cbc_encryption( inpt ) ;
    // encr = ecb_encryption( inpt ) ;
    // encr = ctr_encryption( inpt ) ;
    write_file(encr);
    string decr;
     decr= getDecryptedText( encr ) ;
     write_dec_file(decr, inpt.size());
    cout<<decr<<endl;
}