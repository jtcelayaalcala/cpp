#include <iostream>

int main(){
	int y,answer;
	char op;

	std::cin >> answer;
	std::cin >> op;

	while(std::cin >> y){	
	
		switch(op){
			case '+': answer = answer + y; break;	
			case '-': answer = answer - y; break;	
			case '/': answer = answer/y  ; break;	
			case '*': answer = answer*y  ; break;	
			default : break;
		}
		std::cin >> op;
	}
	
	std::cout << "Answer is: " << answer << "\n";
}
