#include <iostream>
#include <vector>

using namespace std;

vector <int> pairSum(vector <int> nums, int target){
    int n= nums.size();
int st=0, end=n-1;
int currSum=0;





}

int main(){

    vector <int> nums = {2,7,11,15,22,76,80};

   

    //:) try with for loop

    int n =nums.size();
    int target=87;

   int st=0;
   int end=n-1;
   int currsum=0;


for(int i=0;i<n;i++){
    currsum = nums[st]+nums[end];
    if(currsum==target){
        cout<<st<<" "<<end;
        break;

        
    }else if(currsum>target){
        end--;
    }else{
        st++;
    }
}



    return 0;
  
}