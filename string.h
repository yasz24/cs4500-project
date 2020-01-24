//lang::CwC 
#pragma once
#include "object.h"

/**
 * String: a class that represents a string as a character array.
 * author: shetty.y@husky.neu.edu, eldrid.s@husky.neu.edu
*/
class String : public Object {
public:
	char* val_; //val_ is to be owned by string, no one else has a pointer to it.
	size_t size_; 

	/**
	 * Constructor.
	 * @arg c: the character array.  
	*/
	String(char* c) {
	}

	/**
	 * Overriding the hash from Object class. Generates a unique hash for this String.
	*/
	virtual size_t hash() {
	}

	/**
	 * Overriding the equals from Object class. Tests is this String is equal to other.
	 * @arg other: the Object you're testing equality against. 
	*/
	virtual bool equals(Object * other) {
	}

	/**
	 * Compare this string to another to determine order.
	 * Returns a negative value if this comes before, 0 if they're the same, 
	 * positive value if it comes after.
	 * @arg s: the String you're comparing against. 
	*/
    virtual int compare(String *s) {
    }

	/**
	 * Concatenate the value of this String to the value of the given String.
	 * Return the concatenated char array wrapped in a new String object.
	 * @arg s: the String you want to concatenate. 
	*/
    virtual String* concat(String *s) {
    }

	/**
	 * Destructor for this String class.
	*/
	virtual ~String() {
	}
};