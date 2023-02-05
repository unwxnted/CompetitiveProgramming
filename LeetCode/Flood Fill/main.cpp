#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>>& image, int sr, int sc, int color, int Icolor){

    if(image[sr][sc]==Icolor){
        image[sr][sc]= color;
        if(sr>=1)
            dfs(image, sr-1, sc, color, Icolor);

        if(sc>=1)
            dfs(image, sr, sc-1, color, Icolor);

        if(sr+1<image.size())
            dfs(image, sr+1, sc, color, Icolor);

        if(sc+1<image[0].size())
            dfs(image, sr, sc+1, color, Icolor);
    }


}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

    int Icolor = image[sr][sc];
    if(color != Icolor){
        dfs(image, sr, sc, color, Icolor);
    }
    return image;

}







