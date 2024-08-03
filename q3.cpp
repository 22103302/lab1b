#include<iostream>
#include<map>
#include<sstream>
#include<string>

using namespace std;

int main(){
    map<string, int> freq;
    string paragraph, word;

    cout<<"Enter a paragraph (Press enter twice to end): ";
    getline(cin, paragraph);

    istringstream stream(paragraph);

    while(stream >> word){
        ++freq[word];
    }

    for(const auto& pair: freq){
        cout<< pair.first<< ": "<<pair.second<<endl;
    }

    return 0;
}