#include <iostream>
#include "trie.h"

#include "string"

using namespace std;

int main()
{

    Trie <char>t;

    string st;

    char* o;

    for(int i=0;i<3;i++){

    getline(cin,st);

     o=&st.at(0);

    t.insert(o,st.length());
    }

    for(int j=0;j<3;j++){

    getline(cin,st);

    o=&st.at(0);

    if(t.search(o,st.length())==true){

        cout << "found" <<endl;
    }

    else

        cout <<"not found" <<endl;}



    return 0;
}
