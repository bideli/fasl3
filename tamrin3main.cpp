#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
    string words,word1,word2,word3,word4;
    cout<<"\n enter 4 word that between them there are * like: one*two*three*four :";
    cin>>words;
    cout<<words<<endl;

    word1=words.substr(0,words.find("*"));
    words.erase(0,words.find("*")+1);

    word2=words.substr(0,words.find("*"));
    words.erase(0,words.find("*")+1);

    word3=words.substr(0,words.find("*"));
    words.erase(0,words.find("*")+1);

    word4=words;

    word1.insert(0,"*");
    word1.insert(0,word2);
    word1.insert(0,"*");
    word1.insert(0,word3);
    word1.insert(0,"*");
    word1.insert(0,word4);

    cout<<word1;
    getch();
    return 0;
}
