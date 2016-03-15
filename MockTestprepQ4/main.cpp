// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM.

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

class Animal{
protected: string nameOfAnimal, action;

public: Animal(){
			nameOfAnimal = "Some Animal";
}
		~Animal(){

		}
	    virtual void name() = 0;
		virtual void does() = 0;  //abstract class with 2 pure virtual functions to be overridden by sub class

};

class Bird : public Animal{
public: Bird(){
			nameOfAnimal = "Bird";
			action = "Tweets";
}
		~Bird(){

		}

		void name(){
			cout << nameOfAnimal << endl;
		}

		void does(){
			cout << action << endl;
		}
};

class Dog : public Animal{
public:
	Dog(){
		nameOfAnimal = "Dog";
		action = "Barks";
	}

	~Dog(){

	}

	void name(){
		cout << nameOfAnimal << endl;
	}

	void does(){
		cout << action << endl;
	}


};

