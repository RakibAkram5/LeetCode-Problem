#include <iostream>
using namespace std;
class solution{
	public:
		bool ispalindrome(int x){
			if(x<0||(x%10==0)&&x!=0){
				return false;
			}
			int reversed=0;
			int original=x;
			while(x>0){
				int digit=x%10;
				reversed=reversed*10+digit;
				x/=10;
			}
			return original==reversed;
		}
};
int main(){
	solution sol;
	int x1=121;
	int x2=-121;
	int x3=0;
	int x4=10;
	cout<<"Input: "<<x1<<" ->Output: "<<(sol.ispalindrome(x1)?"True":"False")<<endl;
	cout<<"Input: "<<x2<<" ->Output: "<<(sol.ispalindrome(x2)?"True":"False")<<endl;
	cout<<"Input: "<<x3<<" ->Output: "<<(sol.ispalindrome(x3)?"True":"False")<<endl;
	cout<<"Input: "<<x4<<" ->Output: "<<(sol.ispalindrome(x4)?"True":"False")<<endl;
	return 0;
	
	
}
