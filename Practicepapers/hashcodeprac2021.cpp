#include <bits/stdc++.h>
#define MAX_SIZE 10000
using namespace std;
int main()
{
    /*Number of pizzas*/
    int number_of_pizzas;
    cin >> number_of_pizzas; //5

    /*I take an array which will store the team members*/
    int teamarr[3];
    for (int i = 0; i < 3; i++){
        cin >> teamarr[i];
    }
    int total_team[3]={2,3,4};

    /*Total members in three team*/
    int totaltwomem = teamarr[0] * 2;   //2
    int totalthreemem = teamarr[1] * 3; //6
    int totalfourmem = teamarr[2] * 4;  //4

    /*I store number of ingrediants in an array and take ingrediants in string*/
    int first=0;
    string table[MAX_SIZE];
    int ingrediants_size[number_of_pizzas];
    for (int j = 0; j < number_of_pizzas; j++){
        int ingrediants;
        cin >> ingrediants;
        ingrediants_size[j] = ingrediants;
        int second = first;//0//3//6
        first = second + ingrediants;//0+3=3//3+3//6+3
        for (int k=second;k<first;k++){
            string item;
            cin>>item;
            table[k] = item;
        }
        
    }

    /* For checking i just run these loops*/
    for(int j=0;j<number_of_pizzas;j++){
        cout<<ingrediants_size[j]<<" ";
    }
    cout<<endl;
    for(int j = 0;j<first;j++){
        cout<<table[j]<<" ";
    }
    /*Output*/
    //2 3 4           5
    //teamlen      teammems
    // |             |
    //(2)2(1) + (3)6(2) = 8 = 2/1 + 6/2 = 5 - 5 = -1
    //(2)2(1) + (4)4(1) = 6 = 2/1 + 4/1 = 6 - 5 = 1
    //(3)6(2) + (4)4(1) = 10 = 6/2 + 4/1 = 7 - 5 = 2
    //(2)2(1) + (3)6(2) + (4)4(1) = 12 = 2/1 + 6/2 + 4/1 = 9 - 5 = 4
    
    return 0;
}