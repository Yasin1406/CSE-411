#include"aes_ctr.hpp"

int main()
{
    string inpt, encr ;
    ifstream fp;
    fp.open("input.txt");
    string line;
    while(getline(fp, line)){
        inpt += line;
        inpt += "\n";
    }
    inpt.pop_back();
    encr = ctr_encryption( inpt ) ;
    write_file(encr);
    string en = read_file();
    string decr;
    decr= getDecryptedText( en ) ;
    write_dec_file(decr, inpt.size());
    // cout<<decr<<endl;
}
