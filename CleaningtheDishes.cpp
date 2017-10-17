//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int>unwash, wash, finish;
    int n;
    int i;
    
    cin >> n;
    for(i=0;i<n;i++){
        unwash.push(n-i);
    }
    while(true){
        int command, num;
        cin >> command >> num;
        if(cin.eof())
            break;
        if(command==1){
            for(i=0;i<num;i++){
                wash.push(unwash.top());
                unwash.pop();
            }
        }
        else{
            for(i=0;i<num;i++){
                finish.push(wash.top());
                wash.pop();
            }
        }
    }
    
    for(i=0;i<n;i++){
        cout << finish.top() << endl;
        finish.pop();
    }
    
    return 0;
}
