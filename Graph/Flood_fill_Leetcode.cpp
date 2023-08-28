class Solution {
public:
void dfs(int i, int j, int initColor, int color, vector<vector<int>>& image){
    int n = image.size();
    int m = image[0].size();
    if(i<0 || j<0)return;
    if(i>=n || j>=m)return;
    if(image[i][j] != initColor)return;
    image[i][j] = color;

    dfs(i+1, j, initColor, color, image);
    dfs(i-1, j, initColor, color, image);
    dfs(i, j+1, initColor, color, image);
    dfs(i, j-1, initColor, color, image);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initColor = image[sr][sc];
        if(initColor != color){
            dfs(sr, sc, initColor, color, image);
        }
        return image;
    }
};
/*
https://leetcode.com/problems/flood-fill/submissions/
*/