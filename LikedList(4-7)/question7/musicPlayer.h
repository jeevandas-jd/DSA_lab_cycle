//
// Created by jeevandas on 26/4/24.
//
#include <iostream>
#include <algorithm>
using namespace std;
#ifndef DSA_LAB_CYCLE_MUSICPLAYER_H
#define DSA_LAB_CYCLE_MUSICPLAYER_H
class Node{
public:
    float duration;
    string artist;
    string title;
    Node* next;
    Node(string title,string artist,float duration){
        this->title=title;
        this->duration=duration;
        this->artist=artist;
        this->next=NULL;
    }

};

class musicPlayer {
private:
    int factorial(int n) {
        if (n <= 1) {
            return 1;
        }
        return n * factorial(n - 1);
    }

// Function to find the rank of a word
    int findRank(string word) {
        int n = word.length();
        int rank = 1;
        int fact = factorial(n);

        // Sort the characters of the word
        sort(word.begin(), word.end());

        for (int i = 0; i < n; i++) {
            // Decrease the factorial by (n-i)/number of repeated characters
            fact /= (n - i);

            // Count the number of characters smaller than word[i]
            int smaller = 0;
            for (int j = i + 1; j < n; j++) {
                if (word[j] < word[i]) {
                    smaller++;
                }
            }

            // Update the rank
            rank += smaller * fact;
        }

        return rank;
    }
    void swap(Node* a,Node*b){
        Node*temp;
        temp=a->next;
        a->next=b->next;
        b->next=temp;

    }
public:
    Node* head;
    musicPlayer(){
        this->head=NULL;
    }
    void insertion(string title,string artist,float duration){
       Node* n=new Node(title,artist,duration);
        if(head==NULL){
            head=n;
        }
        else{
            Node*temp=head;
            while(temp->next!=NULL){
                head=head->next;
            }
            temp->next=n;
        }
    }
    void SortByDuration(){
        if(head==NULL || head->next==NULL){
            return;
        }
        else{

        }
    }
    void SortByTitle(){

    }
    void SortByArtist(){

    }
};


#endif //DSA_LAB_CYCLE_MUSICPLAYER_H
