#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int game_width,max_height;
	std::cin >> game_width;
	std::cin >> max_height;
	int stack_height[game_width];
	for(int i=0;i<game_width;i++){
	    std::cin >> stack_height[i];
	}
	int command;
	std::cin >> command;      //Initial command.
	int position = 0;         //Initial position.
	int crane_status = 0;     //Iniial crane status.
	while(command!=0){
	    
	    
	//Considering critical cases. Start point.
	    //Crane is at start. It will go no left.
	    if(position==0 && command==1){
	        std::cin >> command;
	    }
	    
	    //Crane is at end. It will go no right.
	    else if(position==game_width-1 && command==2 ){
	        std::cin >> command;
	    }
	    
	    //Crane is already holding a box or There is no box in stack. Can't pick.
	    else if((stack_height[position]==0 || crane_status==1) && command==3){
	        std::cin >> command;
	    }
	    
	    //Crane is not holding a box or Stack height has reached max. Can't drop.
	    else if((stack_height[position]==max_height || crane_status==0) && command==4){
	        std::cin >> command;
	    }
	// Considering critical cases. End point.
	    else{
	        if(command == 1){
	            position -=1;
	             std::cin >> command;
	        }
	        else if(command == 2){
	            position+=1;
	             std::cin >> command;
	        }
	        else if(command == 3 ){
	            crane_status = 1;
	            stack_height[position]-=1;
	             std::cin >> command;
	        }
	        else if(command == 4){
	            crane_status=0;
	            stack_height[position]+=1;
	             std::cin >> command;
	        }
	        else{
	            std::cin >> command;
	        }
	    }
	    
	}
	for(int i=0;i<game_width;i++){
	    std::cout << stack_height[i] << " ";
	}
	return 0;
}

