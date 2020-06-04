//Ex:3->def,4->ghi.Then "34" will give output: {"dg","dh","di","eg","eh","ei","fg","fh","fi"}
//#include<unorderd_map>
unordered_map<char,string>dict{
    {'1',""},
    {'2',"abc"},
    {'3',"def"},
    {'4',"ghi"},
    {'5',"jkl"},
    {'6',"mno"},
    {'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"},{'0'," "},{'#',"#"},{'*',"*"}
    };
void solve(string digits,vector<string> &result,string codeshr ,int index)
 {
    if(index==digits.length()){
      result.push_back(codeshr);  
    return ;
    }
    char c=digits[index];
    string ps=dict[c];
    for(int i=0;i<ps.length();i++)
      {
         solve(digits,result,codeshr+ps[i],index+1);
      }
 }
class Solution {
public:
    vector<string> letterCombinations(string digits) {
     vector<string>result;
      string codeshr="";  
        if(digits.length()==0)
        {
            return result;
        }
        solve(digits,result,codeshr,0); 
        return result; 
    }
};
//"56"
