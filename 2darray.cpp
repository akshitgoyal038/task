#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> movie_ratings{
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5},
    };
    cout<<"\n Ratings"<<endl;
    cout<<movie_ratings[0][0]<<endl;
     cout<<movie_ratings[0][1]<<endl;
      cout<<movie_ratings[0][2]<<endl;
       cout<<movie_ratings[0][3]<<endl;

       cout<<"\n Ratings"<<endl;
       cout<<movie_ratings.at(0).at(0)<<endl;
       cout<<movie_ratings.at(0).at(1)<<endl;
       cout<<movie_ratings.at(0).at(2)<<endl;
       cout<<movie_ratings.at(0).at(3)<<endl;

    cout<<endl;
    return 0;
       

}