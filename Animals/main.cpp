//
//  main.cpp
//  Animals
//
//  Created by Aj Gill on 8/28/18.
//  Copyright © 2018 Aj Gill. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int>& T){
    int initialCount = T.size();
    int giveAway = 0.5*(T.size());
    
    //initialize vector to copy duplicate numbers into
    vector <int> count;
    
    //first iteration through
    for(int i=0; i<T.size();i++){
        
        //comparison of an element to every element ahead of it searching for dup
        for(int j=i+1; j< T.size(); j++){
            
            //check to see if duplicate
            if(T[i]==T[j]){
                int dupCount = 0;
                //if duplicate, iterate through previous numbers
                for(int k=0; k==j; k++){
                    //check if there has been a previous copy of that number in T
                    if(T[j]==T[k]){
                        dupCount++;
                    }
                }
                
                //if this would be the 2nd number of the same value, go to the next number in T
                if(dupCount > 1){
                    goto label;
                }
                
                //otherwise, it's the first number of it's value, add to count
                else{
                    count.push_back(T[j]);
                }
            label:
                break;
            }
        }
    }
    
    if((T.size() - count.size()) > giveAway){
        return giveAway;
    }
    else{
        return (T.size() - count.size());
    }
}

int main() {
    vector<int> G{2, 4, 6, 8 , 10, 12};
    int answer = solution(G);
    cout << "Entry: " << endl;
    for (int i=0; i< G.size(); i++){
        cout << G[i] << " ";
    }
    cout << "\n";
    cout << "Number of distinct candies is: " << answer << endl;
}
