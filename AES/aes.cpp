#include<bits/stdc++.h>
#include"aes.h"
using namespace std;

void sub_byte(vector<vector<unsigned char>> &state_matrix){
    unsigned char ch,row,col;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            ch=state_matrix[i][j];
            row=ch>>4;
            col=ch&0x0f;
            state_matrix[i][j]=sbox[row][col];
        }
    }
}

void row_shift(vector<vector<unsigned char>> &state_matrix){
    for(int i=0;i<4;i++){
        rotate(state_matrix[i].begin(),state_matrix[i].begin()+i,state_matrix[i].end());
    }
}

void mix_column(vector<vector<unsigned char>> &state_matrix){
    
}

void key_expansion(){
    srand(time(NULL));
    unsigned char alphanumeric[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string key;
    int i,index,j;
    for(i=0;i<16;i++){
        index=rand()%16;
        round_keys[i]=alphanumeric[index];
    }
    // cout<<"Key: "<<key<<endl;
    // round_keys.push_back(key); // Pushed round-0 key
    // string word=round_keys.back().substr(12);
    // g(word,0);
    // for(auto w:word){
    //     printf("%X ",w);
    // }
    // cout<<endl;
    // unsigned char w3[4];
    // for(i=12;i<16;i++){
    //     w3[i-12]=round_keys[i];
    // }
    // g(w3,0);
    unsigned char prev_word[4];
    unsigned char next_word[4];
    for(i=0;i<10;i++){
        for(j=0;j<4;j++){
            prev_word[j]=round_keys[16*i+j+12];
        }
        g(prev_word,0);
        for(j=0;j<4;j++){
            next_word[j]=round_keys[16*i+j];
            next_word[j]=next_word[j]^prev_word[j];
        }
        for(j=0;j<4;j++){
            round_keys[16*i+j]=next_word[j];
        }
        

    }
    
}

void g(unsigned char *word,int round){
    int i,j;
    unsigned char ch=word[0],row,col;
    for(i=0;i<3;i++){
        word[i]=word[i+1];
    }
    word[3]=ch;
    for(i=0;i<4;i++){
        ch=word[i];
        row=ch>>4;
        col=ch&0x0f;
        word[i]=sbox[row][col];
    }
    unsigned char round_word[4];
    round_word[0]=rcons[round];
    round_word[1]=0x00;
    round_word[2]=0x00;
    round_word[3]=0x00;
    for(i=0;i<4;i++){
        word[i]=word[i]^round_word[i];
    }
}