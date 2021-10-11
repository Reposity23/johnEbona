
#include <iostream>
#include <string>
#include <bitset>
using namespace std;
    string convertLetterToBinary(string text);
char convertBinaryToLetter(string binary) {
    int decimal = 0;
    // convert binary to decimal
    for (int i = 0; i < binary.length(); i++) {
        decimal *= 2;
        if (binary[i] == '1')
            decimal += 1;
    }
    // return the decimal value as a character (ASCII value is converted to letter)
    return (char) decimal;
}

string convertLetterToBinary(string text) {
string result = "";
for (char& _char : text) {
 result += bitset<8>(_char).to_string() + "  ";
}
return result;
}

int main () {
while (true){
 cout <<"hi  What do you want to do?" << endl;
 cout << "  [1] Translate Binary to Text" << endl;
 cout << "  [2] Translate Text to Binary" << endl;
 cout << " Your choice is: ";
 string ch = "";
 cin >> ch;
 if (ch == "1")
 {
 cout << "Enter a word in binary(end the word with a space and a dot): ";
    string word, binary;
    // keep reading binary strings
    while (cin >> binary && binary != ".") {
        // convert the binary string to a letter and add it to word String
        word += convertBinaryToLetter(binary);
    }
    cout<<"the Entered word is: " << word << endl;
   break;
  }
 else if (ch == "2"){
  cout << "Enter a text (don't include spaces and special character): ";
  string txt = "";
  cin >>txt;
  cout <<" the result are: "<< convertLetterToBinary(txt);
  cout <<"\n" << endl;
  break;
 }
 else{
  cout<<"sorry I didn't quite get that."<<endl;
  }
  break;
 }


 cout<<"convert again? (y/n): ";
 string ask_user;
 cin>>ask_user;
 if (ask_user =="y") {
   main();
 }
 else{
  cout<<"have a good day!"<<endl;
 }

 return 0;
}
