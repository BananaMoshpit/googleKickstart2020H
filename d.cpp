#include<iostream>
#include <string> 
#include <vector> 
#include<bits/stdc++.h> 
#include<algorithm> 

using namespace std;
int findAll(char c){
    return 0;
}

int main (){
int  l, r, test, i, j, people, query,k, friends, aux, lChar, rChar, pos;
char rarest;
vector<string> names;
string name, auxChar, common , auxStr;
vector<string>::iterator it;
vector<char>::iterator itChar;

cin >> test;

for(i =0 ; i < test; i++){
    cin >> people;
    cin >> query;
    std::cout  << "\n Case #"<< i+1 << ":";
    for(k = 0 ; k < people; k++){
        cin >> name;
        sort(name.begin(), name.end());
        names.push_back(name);
    }

    for ( j = 0; j < query; j++)
    {
        friends = -1; // PS: can only be -1 if there are no friends
        cin >> l;
        cin >> r;
        l--; r--;

        for (int i = 0; i < names[l]. size() && i < names[r]. size(); i++)
        {
            auxStr = names[l][i];
            if ( find(names[l].begin(), names[l].end(), names[l][i]) != names[l].end())
                common += auxStr;

            auxStr = names[r][i];
            if ( find(names[r].begin(), names[r].end(), names[l][i] ) != names[r].end())
                common += auxStr;
        }// created a string with possible friend chars
        

        //now to decide wich char has least friends
     
       for (int i = 0; i < common.size(); i++) //for each comon char
       {
            aux = 0;
            it = names.begin();
            auxStr = common[i];

            for (int k = 0; k < names.size(); k++)// for each name
            {
                for (int j = 0; j < names[i].size(); j++) // searching char in whole name
                {
                    pos = names[k].find(common[i]);
                    if (pos >= 0){
                        aux++;
                        if( friends == -1 || friends > aux)
                            friends = aux;
                    }
                }
                
               // do {
                       // for (int j = 0; j < names[j].size(); j++)
                       // {

                                            
    //                        itChar = find(names[i].begin(), names[i].end(), names[i][j]);
    //
    //                         if (itChar != names[i].end()){
    //                             itChar++;
    //                             aux++;
    //                             if( friends == -1 || friends > aux)
    //                                 friends = aux;  // get all friends
    //                     //   }

              //     }

               // }while(it != names.end()); 
            }
            
         
       }
       
        cout <<" " << friends;
    }
        
    
 }

return 0;
}