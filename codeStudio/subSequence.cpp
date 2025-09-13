#include <iostream>
#include <vector>
using namespace std ;

void solve(string str , string output , int index , vector<string>& ans){
	if(index>=str.length()){
		if(output.length()>0){
			ans.push_back(output);
		}
		return;
	}

	// exclude call	
	solve(str,output,index+1 , ans);

	//include call
	char element = str[index];
	output.push_back(element);
	solve(str,output , index+1 , ans);


}
vector<string> subsequences(string str){
	vector<string> ans;
	string output = "";
	int index = 0;
	solve(str , output , index , ans);
	return ans;
	
}

int main(){

}