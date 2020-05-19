struct Pair
{
    char *key;
    void *value;
    struct  Pair *Next;
}; 
typedef struct Pair Pair;
struct DictionaryNode
{
    int size;
    Pair *ptr;
};

