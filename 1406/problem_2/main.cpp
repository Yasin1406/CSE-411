#include"sha.hpp"

int main()
{
    string inpt, padded ;
    ifstream fp;
    fp.open("input.txt");
    string line;
    while(getline(fp, line)){
        inpt += line;
        inpt += "\n";
    }
    inpt.pop_back();
    padded = padding(inpt);
    // cout<<decr<<endl;
    // cout << "Original Message: " << inpt;
    // cout << "Padded Message: " << padded << endl;
    fp.close();
    ofstream out;
    out.open("output.txt");
    out << "Original text: " << endl << inpt << endl;
    out << "Original text length: " << inpt.size() * 8 << endl << endl;
    out << "Padded text: " << endl << padded << endl;
    out << "Padded text length: " << padded.size() << endl;
}
