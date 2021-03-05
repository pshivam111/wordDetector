#include<stdio.h>
struct  s
{
    int x;
    int  (*sf)(int ,int);
    void  (*s)(struct s *k,int);
};
void
int  (*func)(int ,int);
int add(int a,int g)
{
    return a+g;
}

int main()
{
    struct s asd;
    asd.x=99;
    asd.sf=add;
    printf("%d\n",add(4,5));
    func=add;
    printf("%d\n",asd.sf(6,7));
    return 0;
}