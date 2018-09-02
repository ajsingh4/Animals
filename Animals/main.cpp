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
#include <string>

using namespace std;

int solution(vector<int>& Animals){
    //giveAway will represent the amount of animals given and left
    int giveAway = 0.5*(Animals.size());
    
    //Initializing a hash table and adding in every element from the vector
    unordered_set<int> hTable;
    for(int i: Animals){
        hTable.insert(i);
    }
    
    //Assigns new contents to the vector, resizes accordingly
    //Vector now only has unique elements in it
    Animals.assign(hTable.begin(), hTable.end());
    
    //If more than half are unique animals, then return half
    //Otherwise return the size of the vector
    if(Animals.size()>giveAway){
        return giveAway;
    }
    else{
        return Animals.size();
    }
}

int main() {
    //Take in the number of elements that will be used for the input
    cout << "Please enter an even number for amount of animals " << endl;
    int initialCount;
    cin >> initialCount;
    //Initialize a vector of that size
    vector <int> Animals;
    cout << "Please enter " << initialCount << " numbers seperated by spaces" << endl;
    //Take in elements and add them into a vector
    for(int i=0;i<initialCount;i++){
        int temp;
        cin >> temp;
        Animals.push_back(temp);
    }
    int answer = solution(Animals);
    
    cout << "\n";
    cout << "Maximum number of distinct animals is: " << answer << endl;
}
