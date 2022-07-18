#include "trie.h"

template <class DataType>
Trie <DataType>::Trie()
{
    root=getnode();
}


template <class DataType>
void Trie <DataType>::insert(DataType* str, int len)
{
    node* curr = root;

    int id;

    for (int i = 0; i < len; i++) {

            id = str[i];

            if(id>='a' && id<='z'){
         id = str[i] - 'a';
        if (curr->next[id] == nullptr)
            curr->next[id] = getnode();
        curr = curr->next[id];



    }


    if(id>='0' && id<='9'){
         id = str[i] - '0';
        if (curr->next[id] == nullptr)
            curr->next[id] = getnode();
        curr = curr->next[id];


    }


}

curr->endmark=true;}

template <class DataType>

bool Trie <DataType>::search(DataType* str, int len)
{
   node* curr = root;
    int id;

    for (int i = 0; i < len; i++) {

        id = str [i] ;

        if(id>='a' && id<='z'){
        id = str[i] - 'a';
        if (curr->next[id] == nullptr)
            return false;
        curr = curr->next[id];
    }
     if(id>='0' && id<='9'){
        id = str[i] - '0';
        if (curr->next[id] == nullptr)
            return false;
        curr = curr->next[id];
    }}
    return curr->endmark;
}
template <class DataType>
void Trie <DataType> ::del(node* cur)
{
    for (int i = 0; i < 26; i++){
        if (cur->next[i])
            del(cur->next[i]);}

    delete (cur);
}
template <class DataType>
Trie <DataType>::~Trie()
{
    del(root);

}


template class Trie<char>;


