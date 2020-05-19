struct Pair
{
    char *key;
    void *value;
    struct  Pair *next;
};
typedef struct Pair Pair;
struct DictionaryNode
{
    int size;
    Pair *ptr;
};

