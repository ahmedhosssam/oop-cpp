Class Name: "ContactBook"

Description:
This class represents a contact book that stores information about contacts. It has methods to display all contacts, add a new contact, and clear the screen. The contacts are stored as objects of the Contact class in the static Contact array.

Attributes:

option: an integer variable to choose one of the options to display contacts, add a new contact or exit the program.

arr: a static Contact array that contains all the contact objects that were created by the Contact class.

--

Methods:

ContactBook(): A constructor that initializes the ContactBook object, clears the screen, and gets the options.

clearScreen(): A method that clears the screen. It uses different system commands based on the operating system.

getOptions(): A method that displays all the options to the user and calls the appropriate method based on the user's choice.

displayContacts(): A method that displays all the contacts in the Contact array.

addNewContact(): A method that creates a new Contact object by getting the contact's name, email, gender, and phone number. It then adds this object to the Contact array.

-------------------

Class Name: "Contact"

Description:
This class represents a contact that contains information about a person's name, gender, email, and phone number. It has methods to set and get the contact's name, gender, email, and phone number. It also has methods to display the contact's information and count the total number of contacts.

Attributes:

name: a string variable that stores the contact's name.

gender: a string variable that stores the contact's gender.

email: a string variable that stores the contact's email.

number: a PhoneNumber object that stores the contact's phone number.

--

Methods:

Contact(): A constructor that creates a new Contact object with the specified name, gender, email, and phone number. It also adds the contact to the ContactBook array.

setName(string newName): A method that sets the contact's name to a new value.

setGender(string newGender): A method that sets the contact's gender to a new value.

setEmail(string newEmail): A method that sets the contact's email to a new value.

getInfo(): A method that displays the contact's name, gender, email, and phone number.

getCount(): A method that displays the total number of contacts that have been created. It uses the currentContact static variable to keep track of the number of contacts.

-------------------

Class Name: "PhoneNumber"

Description:

This class represents a phone number object that contains the phone number and its type. It provides functionality to get and set the phone number and its type.

Attributes:

num: a string representing the phone number.

type: a string representing the type of the phone number (e.g., mobile, home, work).

--

Methods:

PhoneNumber(): a default constructor that initializes an empty PhoneNumber object.

PhoneNumber(string num, string type): a constructor that initializes a PhoneNumber object with a phone number and its type.

getPhone(): a method that returns the phone number of the PhoneNumber object.

getType(): a method that returns the type of the phone number of the PhoneNumber object.

setPhone(string newPhone): a method that sets the phone number of the PhoneNumber object to a new value.

setType(string newType): a method that sets the type of the phone number of the PhoneNumber object to a new value.

-----

Thanks you!