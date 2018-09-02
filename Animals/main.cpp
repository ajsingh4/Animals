//
//  main.cpp
//  Animals
//
//  Created by Aj Gill on 8/28/18.
//  Copyright © 2018 Aj Gill. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int>& T){
    int giveAway = 0.5*(T.size());
    
    unordered_set<int> s;
    for(int i: T){
        s.insert(i);
    }
    T.assign(s.begin(), s.end());
    if(s.size()>giveAway){
        return giveAway;
    }
    else{
        return s.size();
    }
}

int main() {
    vector<int> G{80, 80, 100000000, 80, 80, 80, 80, 80, 80, 123456789};
    cout << "Entry: " << endl;
    for (int i=0; i< G.size(); i++){
        cout << G[i] << " ";
    }
    int answer = solution(G);
    
    cout << "\n";
    cout << "Number of distinct animals is: " << answer << endl;
}
