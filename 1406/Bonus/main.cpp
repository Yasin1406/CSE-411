#include"subbyte.hpp"

int main(){
    string inpt, encr ;
    ifstream fp;
    fp.open("input.txt");
    string line;
    while(getline(fp, line)){
        inpt += line;
        inpt += "\n";
    }
    inpt.pop_back();
    fp.close();
    unsigned char state[16];
    for(int i = 0; i < 16; i++){
        state[i] = inpt[i];
    }
    subBytes(state);;
   FILE *FP;
   FP=fopen("output.txt","w+");
   for(int i = 0; i < inpt.size(); i++){
      fprintf(FP,"%02X ",state[i]);
   }
   cout<<endl;
   fclose(FP);
}