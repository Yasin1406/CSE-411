#include<bits/stdc++.h>
#include"aes.cpp"
using namespace std;
 
int main(){
    // freopen("input.txt","r",stdin);
    // // freopen("output.txt","w",stdout);
    // string plain_text;
    // getline(cin,plain_text);
    // vector<vector<unsigned char>> state_matrix(4,vector<unsigned char>(4));
    // int str_ptr;
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         state_matrix[i][j]=plain_text[str_ptr++];
    //     }
    // }
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         printf("%X ",state_matrix[i][j]);
    //     }
    //     cout<<endl;
    // }
    // cout<<endl<<endl;
    // sub_byte(state_matrix);
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         printf("%X ",state_matrix[i][j]);
    //     }
    //     cout<<endl;
    // }
    // cout<<endl<<endl;
    // row_shift(state_matrix);
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         printf("%X ",state_matrix[i][j]);
    //     }
    //     cout<<endl;
    // }
    key_expansion();
    return 0;
}