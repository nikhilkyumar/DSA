class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;

        int n=grid.size();
        int m=grid[0].size();

        int min=0;
        int tot=0;
        int cnt=0;
        queue<pair<int,int>> rotten;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    tot++;
                }
                if(grid[i][j]==2){
                    tot++;
                    rotten.push({i,j});
                }
            }
        }
        int dx[4]={0,0,-1,1};
        int dy[4]={1,-1,0,0};
        
        while(!rotten.empty()){
            int k=rotten.size();
            cnt+=k;
            while(k--){
                int x=rotten.front().first;
                int y=rotten.front().second;
                rotten.pop();

                for(int i=0;i<4;i++){
                    int nx=x+dx[i];
                    int ny=y+dy[i];
                    if(nx>=0&&ny>=0&&nx<n&&ny<m&&grid[nx][ny]==1){
                        grid[nx][ny]=2;
                        rotten.push({nx,ny});
                    }
                   
                }
               
               
            }
             if(!rotten.empty())min++;

        }

        return tot==cnt?min:-1;


        
    }
};