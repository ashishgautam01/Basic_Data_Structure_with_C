#include<iostream>
#include<stack>

int main(){
	std::stack<std::string> s;
	s.push("orange"); s.push("mango");
	std::cout<<"First pop: " <<s.top();
	s.pop();
	s.push("banaanaa");
	std::cout<<"second pop "<<s.top();
	return 0;

}