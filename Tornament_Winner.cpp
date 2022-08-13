#include <bits/stdc++.h>
using namespace std;
void upgrade_scores(string team, int points, unordered_map<string,int>&teams_and_scores);


string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results) {
  // Write your code here.
  // one function for upgrading the score and checking the team
  // use the ternary function
  string win_team = "";
  unordered_map<string,int> teams_and_scores = {{win_team,0}};
  for(int i =0 ; i< results.size(); i++){
    upgrade_scores(competitions[i][!results[i]],3,teams_and_scores);
    if(teams_and_scores[competitions[i][!results[i]]] > teams_and_scores[win_team]){
        win_team = competitions[i][!results[i]];
    }
  }
  return win_team;
}

void upgrade_scores(string team, int points, unordered_map<string,int>&teams_and_scores){
    if(teams_and_scores.find(team) == teams_and_scores.end()){
        teams_and_scores[team] = 0;
    }
    teams_and_scores[team] += points;
}
