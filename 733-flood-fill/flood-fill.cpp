class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        queue<pair<int,int>> temp;
        temp.push({sr,sc});
        int dx[4]={0,0,-1,1};
        int dy[4]={1,-1,0,0};
        int val=image[sr][sc];
        image[sr][sc]=color;
        if(val == color)
            return image;
        while(!temp.empty()){
            int x=temp.front().first;
            int y=temp.front().second;
            temp.pop();
            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx>=0&&ny>=0&&nx<image.size()&&ny<image[0].size()&&image[nx][ny]==val){
                    image[nx][ny]=color;
                    temp.push({nx,ny});
                }
            }
            

        }
        return image;
        
        
    }
};