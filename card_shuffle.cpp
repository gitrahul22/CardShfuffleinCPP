// CARD shuffle
/* It is the basic implementation that object is used as a array*/
/*Whole code is in C++ ; I can use the graphics header to the same thing but anyhow \n
didnot find any graphics.h online and Uploading in hurry in My GIThub(Placements ahead :) );
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
enum Suit{
	clubs, diamonds, hearts, spades
};
const int jack=11;
const int queen=12;
const int king=13;
const int ace=14;
 class card{
 	private:
 		int number;
 		Suit suit;
 		public:
 			card(){
			 }
			void set(int n,Suit s){
				suit =s;
				number=n;
			}
		void display();
 };
 //----------------------------------------//
 void card::display(){
 	if(number>=2 && number<=10){
 		cout<<number;
	 }
	 else{
	 	switch(number){
	 		case jack: cout<<"J"; break;
	 		case queen: cout<<"Q"; break;
	 		case king: cout<<"K"; break;
	 		case ace: cout<<"A"; break;
		 }
	 }
	 
	 switch(suit){
	 	case clubs: cout<<"@C"; break;
	 	case diamonds: cout<<"@D"; break;
	 	case hearts: cout<<"@H"; break;
	 	case spades: cout<<"@S"; break;
	 }
 }
 int main(){
 	card deck[52];
 	int j;
 	cout<<endl;
 	for(int j=0;j<52;j++){
 		int  num=(j%13)+2;
 		Suit su=Suit(j/13);
 		deck[j].set(num,su);
	 }
	 cout<<"\n Ordered DECK\n";
	 for(j=0;j<52;j++){
	 	deck[j].display();
	 	cout<<" ";
	 	if(!((j+1)%13)){
	 		cout<<endl;
		 }
	}
		 srand(time(NULL));
		 for(j=0;j<52;j++){
		 	int k=rand()%52;
		 	card temp=deck[j];
		 	deck[j]=deck[k];
		 	deck[k]=temp;
		 }
		 cout<<"\n Shuffled Deck\n";
		 for(j=0;j<52;j++){
		 	deck[j].display();
		 	cout<<" ";
		 	if(!((j+1)%13)){
	 		cout<<endl;
			 }
		 }
	 return 0;
 }
 //EOP
