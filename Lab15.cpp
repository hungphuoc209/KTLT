#include<iostream>
#include<vector>
#include<algorithm>
#include<time.h>
#include<iomanip>
using namespace std;

class Card{
    public:
    string suit;
    std::string rank;
    Card();
    Card(string suit,string rank);
};
Card::Card(){}
Card::Card(string suit,string rank){
    this->suit = suit;
    this->rank = rank;
}

class Deck : public Card{
    string suit[4] = {"C","D","H","S"};
    string rank[13] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    vector<Card> *deckOfCard;
    public:
    Deck();
    void show();
    void shuffle();
    ~Deck();
};
Deck::Deck(){
    deckOfCard =  new vector<Card>();
    deckOfCard->reserve(52);
    for(int i = 0;i<4;++i){
        for(int j=0;j<13;++j){
            deckOfCard->emplace_back(Card(suit[i],rank[j]));
        }
    }
}
void Deck::show(){
    for(int i =0;i<52;i++){
        if(i%13==0) cout<<endl;
        cout<<setw(4)<<deckOfCard->at(i).suit<<deckOfCard->at(i).rank;
    }

}
void Deck::shuffle(){
    srand(time(0));
    random_shuffle(deckOfCard->begin(),deckOfCard->end());

}
Deck::~Deck(){
    delete deckOfCard;
}
int main(int argc, char const *argv[])
{
    Deck d;
    cout<<"Init:";
    d.show();
    cout<<endl;
    d.shuffle();
    cout<<"\nShuffled:";
    d.show();
    return 0;
}
