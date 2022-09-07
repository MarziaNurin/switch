#include<iostream>
using namespace std;
int main(){

    char letter;

    cout<<endl<<"Please enter a chracter :";
    cin>>letter;

      switch(letter){

          case 'A': cout<<endl<<"It is a Vowel.";
          break;
          case 'a': cout<<endl<<"It is a Vowel.";
          break;

          case 'E': cout<<endl<<"It is a Vowel.";
          break;
          case 'e': cout<<endl<<"It is a vowel.";
          break;

          case 'I': cout<<endl<<"It is a Vowel.";
          break;
          case 'i': cout<<endl<<"It is a Vowel.";
          break;

          case 'O': cout<<endl<<"It is a Vowel.";
          break;
          case 'o': cout<<endl<<"It is a Vowel.";
          break;

          case 'U': cout<<endl<<"It is a Vowel.";
          break;
          case 'u': cout<<endl<<"It is a Vowel.";
          break;

          default: cout<<endl<<"It is a consonant.";
          break;
    }
    return 0;

}