#ifndef TRIE_H
#define TRIE_H

template <class DataType>

class Trie
{
    public:
        Trie();
        ~Trie();
        void insert(DataType* ,int);
        bool search(DataType* ,int);



    protected:

    private:

        struct node
        {
            bool endmark;

            node* next[26];
        };

        struct node *getnode()
        {
            node *p = new node;

            p->endmark=false;

            for(int i=0;i<26;i++){

                p->next[i]=nullptr;
            }

            return p;
        }

        void del(node*);



        node* root;
};

#endif // TRIE_H
