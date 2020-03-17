#include<iostream>

using namespace std;

#define MAP_LEFT 20
#define MAP_RIGHT 20
#define MAP_UP 20
#define MAP_DOWN 20

int i;
int j;


int main(){

    for(i=0; i<MAP_DOWN; i++){
        for(j=0; j<MAP_RIGHT; j++){
            if(j==0 || j==MAP_RIGHT-1)
                cout<<"¡Ú";
            else if(i==MAP_DOWN-1)
                cout<<"¡Ú";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}