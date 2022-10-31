#include<iostream>

using namespace std;

string keypad_arr[]={" ","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string str,string ans){

    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = str[0];
    string code=keypad_arr[ch-'0'];
    string ros=str.substr(1);

    for(int i=0;i<code.length();i++){
        keypad(ros,ans+code[i]);

    }
}

int main(){
    
    keypad("23","");
    return 0;
}