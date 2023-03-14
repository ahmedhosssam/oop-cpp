"ANSWERING CHAPTER 6 (OBJECTS AND CLASSES) QUESTIONS " --> P.283

1. What is the purpose of a class definition ?
--> is to create a blueprint for objects , and define the main data ( Attributes ) that objects need and functions to manipulate this data .

2. A " Class " has the same relation to an " Object " that a basic data type has to a variable of that type .

3. In a class definition , data or functions designated "private" are accesible to --> Member functions of that class.

4. Write a class definition that creates a class called "leverage" with: 
--> one private data member "crowbar" of type "int"
--> one public function whose declaration is void pry().

	" ANSWER "
// leverage.cpp
class leverage {
	private:
		int crowbar;
	public:
		void pry();
};



5. True or false: Data items in a class must be private --> False ( Because it depends )

6. Write a statement that defines an objects called "lever1" of the "leverage" class described in Q.4

// leverage.cpp
--> leverage lever1;

7. The dot operator (or class member access oparator) connects the following two entites :
--> A Class object with a member of that class		" lever1.pry(); "

9. Member function defined insiede a class definition are "PUBLIC" by default

10. 
class leverage {
	private:
		int crowbar;
	public:
		void pry();
		int getcrow() { return crowbar; }
};

11. A constructor is executed automatically when an object is "defined or created"

12. A constructor's name is the name as "Class"

----------------------------------------------------------------------

13. Write a constructor that initializes to 0 the crowbar data, a memer of the "leverage" class . Assume that the constructor is define within the class definition.

	"ANSWER"
class leverage {
	private:
		int crowbar;
	public:
		leverage() : crowbar(0) { }
		void pry();
		int getcrow() { return crowbar; }
};

----------------------------------------------------------------------

14. True --> You can have more than one constructor with the same name.

15. A member function can always access the data --> a. in the object of which it is a member.

16.
class leverage {
	private:
		void pry();
		int getcrow(); // function declaration
};

17. int leverage::getcrow() { return crowbar; }

18. The only technical difference between structures and classes in C++ is:
--> Members in structures is "public" by default
--> Members in classes is "private" by default

19. There are 3 copies of data items ( A copy for each object ) , and one copy of member function

20. Sending a message to an object is the same as "calling a member function".

21. Classes are useful because they --> bring together all aspects of an entity in one place.

22. Ture

---------------------------------------------------------------------
23. For the object for which it was called , a c++ const member function -->
b. CAN MODIFY ONLY CONST MEMBER DATA

example :

class Foo {
	public:
		int getValue() const
			{
			// implementation that doesn't modify object state
			}
};
---------------------------------------------------------------------

24. True

25. class Foo {
	private:
		const float jerry;
	private:
		void aFunc(const float jerry) const;	
};
