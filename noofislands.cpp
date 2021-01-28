
//  this is the code which i had done in leetcode so directly I had copied from there


class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
            short island=0;
            for(short i=0; i<grid.size(); i++)
            {
                for(short j=0; j<grid[0].size(); j++)
                {
                    if(grid[i][j]=='1')
                    {
                        coverisland(grid,i,j);
                        island+=1;
                    }
                }
            }
           return island;
    }
    
//     cover island means convert the entered part of the island ( one to zero) of array 
    
    int coverisland(vector<vector<char>>& grid, short i, short j)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]=='0'){
            return 0;
        }

        grid[i][j]='0';
        coverisland(grid,i,j+1);
        coverisland(grid,i-1,j);
        coverisland(grid,i+1,j);
        coverisland(grid,i,j-1);
        return 1;
    }
};




// this is the first approach I had tried but later I had know that it is a dfs problem but this brut force method will also give right answer

//#include<iostream>
//using std::cout;
//using std::cin;
//using std::endl;

//int main(){
//	const char* a[100][100] = {
//  {"1","1","1","1","0"},
//  {"1","1","0","1","0"},
//  {"1","1","0","0","0"},
//  {"0","0","0","0","0"}
//  };
////  find number of islands
//   int row=sizeof(a)/sizeof(a[0]);
//   int col=sizeof(a[0])/sizeof(int);
////   int ref[row][col]={0};
//   int island=0;
//           for(int i=0;i<row;i++){
//              for(int j=0;j<col;j++)
//              {
//                 if(a[i][j]=="1"){
//                    int k=i;
//                    int l=j;
//                    while(a[k][j]=="1" && k<row){
//                    	a[k][l]="0";
//                    	l+=1;
//                        while(a[k][l]=="1" && l<col){
//                             a[k][l]="0";
//                             if((k+1)<row){
//                                  if(a[k+1][l]=="1")
//                                  {
//                                      a[k+1][l]="0";
//                                      cout<<"hello 2"<<endl;
//                                  }
//                             }
//                             l+=1;
//                        } 
//                        l=j;
//                        k+=1;
//                    }
//                 cout<<"grid"<<endl;
//                   island+=1;
//                   
//                }
//              }
//           
//}
//    cout<<"No of islands:"<<island<<endl;
//    for(int i=0;i<row;i++){
//        for(int j=0;j<col;j++)
//        {
//              cout<<a[i][j];	
//        }
//        cout<<"hello"<<endl;
//	
//}
//   cout<<"No of islands:"<<island<<endl;
//
//}





