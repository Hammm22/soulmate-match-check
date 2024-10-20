#include <iostream>
#include <cstdlib> // for rand() and srand() function
#include <ctime> // for time() function
using namespace std;

int SoulmatePredict(){
	//made match score between 0 to 100
	
	return rand()%101;
	
}
int main() {
	//initialization random seed
	srand(time(0));
	
	//declare the variabel for user input (your name and your GF/BF)
	string YourName, SoulmateName;
	
	//Request user input
	cout << "Welcome to Soulmate match score test!! "<<endl;
	cout<< "Input Your name: ";
	getline(cin,YourName);
	cout << "Input your GF/BF: ";
	getline(cin,SoulmateName);
	
	//getting match score
	int MatchScore = SoulmatePredict();
	
	//show the match score
	cout << endl;
	cout << "Soulmate match score of " << YourName << " and " << SoulmateName << " are: " << endl;
	cout << "match score : " << MatchScore << "%" << endl;
	
	//interpretasi hasil
	
	if(MatchScore > 80) {
		cout << "You're very suitable, maybe your name was written in the stars." << endl;
	} else if(MatchScore >50) {
		cout << "You're quite suitable, maybe you need to keep your connection tight!" << endl;
	} else {
		cout << "Low match, but you can give more attention to him/her and communicate frequently "<< endl;
	}
	return 0;
}

//made by Hamm22 

