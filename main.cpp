#include <iostream>

using namespace std;

int main()
{
    int x = 78;
    int b =1;
    bool y = 1;
    cout <<"#####NUMBER GUESSING GAME#####"<<endl;
    while (y == 1){

        cout <<"enter your number"<<endl;
        cin >> b ;
        if (x == b){
            cout<<"you are right"<<"\n";
            y = 0;
        }
        else{
            cout<<"you are wrong. try again"<<"\n";
        }
    }
    return 0;
}
