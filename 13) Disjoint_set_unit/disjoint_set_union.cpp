/*
            ****Disjoint Set Union*******
#disjoint set union er 2 ta part ase:
1) Find: Find er kaj parent of set /set representative khuje bar kora;
2) Union: Union er kaj 2 ta disjoint set jog kore 1 ta set kora.

*/

#include <bits/stdc++.h>
#define LIM 100005

using namespace std;

int par[LIM], sz[LIM];

int Find(int u)
{
    if(par[u] == u)
        return u;
    return par[u] = Find(par[u]);
    /* ami ager ta preant[u] te set korsi.Ate kore pore jodi
    find ke call kori taile prothom bar n time call korle
    o tarpor 2nd time r n bar call korte hoy na karon
    save thake .R aita ke bola hoy path compression. */
}

void Union(int u, int v)
{
    u = Find(u);
    v = Find(v);

    if(u == v)
        return;

    if(sz[u] < sz[v])
        swap(u,v);
    sz[u] += sz[v];
    par[v] = u;

}

bool isFriend(int u, int v)
{
    return Find(u) == Find(v);
}

int main()
{

    int  m, q;
    cin>>m>>q;
    for(int i=0; i<LIM; i++)
        par[i] = i, sz[i] = 1; ///suru te sobai alada alada set.

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin>>u>>v;
        Union(u,v);
        /*
        input/
        7 3
        1 2
        2 3  //Akhon {1,2,3} ai 3 tar representative hoitase 1;
        3 4
        4 5
        5 6
        6 7
        7 8
        */
    }

    for(int i=0; i<q; i++)
    {
        int u,v;
        cin>>u>>v;
        if(isFriend(u,v))
            cout << "They are friend" << endl;
        else
            cout << "They are not friend" << endl;
    }

}
