//lang::CwC 
#pragma once
#include "string.h"
#include "object.h"

/*
* ArrayObject: This class represents a list of Objects.
* author: shetty.y@husky.neu.edu, eldrid.s@husky.neu.edu
*/
class ArrayObject : public Object {
public:
    Object **arr_; //owned. array of array of pointers to Objects
    size_t length_; //the length of the array.
    size_t last_idx_;  //the first unassigned idx in the array, from left to right.

    /**
	 * Constructor.
	*/
    ArrayObject() {
    }

    /**
     * Appends e to end of the list.
     * @arg e: the Object to be appended.
    */
    virtual void push_back(Object* e) {
    }

    /**
     * Inserts e at i. All Objects from i right, are moved a position to the right.
     * @arg i: the index where you want to add the Object.
     * @arg e: the Object to be appended.
    */
    virtual void add(size_t i, Object* e) {
    }
    
    /**
     * Inserts all of elements in c into this list at i
     * @arg i: the index starting where you want to add the string.
     * @arg e: the List of Objects to be appended.
    */
    virtual void add_all(size_t i, ArrayObject* c) {
    }

    /**
     * Removes all of elements from this list
    */
    virtual void clear() {
    }

    /**
     * Compares o with this list for equality.
     * arg o: the Object you're testing equality against.
    */
    virtual bool equals(Object* o) {
    }

    /**
     * Returns the element at index
     * arg index: the index of the element that you want.
    */
    virtual Object* get(size_t index) {
    }

    /**
     * Returns the hash code value for this list.
    */
    virtual size_t hash() {
    }

    /**
     * Returns the index of the first occurrence of o, or >size() if not there
     * arg o: the Object that you want the index for.
    */
    virtual size_t index_of(Object* o) {
    }

    /**
     * Removes the element at i
     * arg i: the index of the element you want to remove. 
    */
    virtual Object* remove(size_t i) {
    }

    /**
     * Replaces the element at i with e
     * arg i: the index of the element you want to replace. 
     * arg e: the element that you're replacing it with.
    */
    virtual Object* set(size_t i, String* e) {
    }

    /**
     * Return the number of elements in the collection
    */
    virtual size_t size() {
    }

    /**
     * Destructor.
    */
    virtual ~ArrayObject() {
    } 

    /**
     * Tests whether this list contains an Object, with the same value as e.
     * @arg e: The Object you want to test for containment.
    */
    virtual bool contains(Object* e) {
    }

    /**
     * Private helper. resizes the internally owned char array, arr_.
    */
    void resize_() {
    }
};


/*
* ArrayString: This class represents a list of String objects.
* author: shetty.y@husky.neu.edu, eldrid.s@husky.neu.edu
*/
class ArrayString : public Object {
public:
    String **arr_; //owned. array of array of pointers to strings
    size_t length_; //the length of the array.
    size_t last_idx_;  //the first unassigned idx in the array, from left to right.

    /**
	 * Constructor.
	*/
    ArrayString() {
    }

    /**
     * Appends e to end of the list.
     * @arg e: the String to be appended.
    */
    virtual void push_back(String* e) {
    }

    /**
     * Inserts e at i. All strings from i right, are moved a position to the right.
     * @arg i: the index where you want to add the string.
     * @arg e: the String to be appended.
    */
    virtual void add(size_t i, String* e) {
    }
    
    /**
     * Inserts all of elements in c into this list at i
     * @arg i: the index starting where you want to add the string.
     * @arg e: the List of Strings to be appended.
    */
    virtual void add_all(size_t i, ArrayString* c) {
    }

    /**
     * Removes all of elements from this list
    */
    virtual void clear() {
    }

    /**
     * Compares o with this list for equality.
     * arg o: the Object you're testing equality against.
    */
    virtual bool equals(Object* o) {
    }

    /**
     * Returns the element at index
     * arg index: the index of the element that you want.
    */
    virtual String* get(size_t index) {
    }

    /**
     * Returns the hash code value for this list.
    */
    virtual size_t hash() {
    }

    /**
     * Returns the index of the first occurrence of o, or >size() if not there
     * arg o: the Object that you want the index for.
    */
    virtual size_t index_of(Object* o) {
    }

    /**
     * Removes the element at i
     * arg i: the index of the element you want to remove. 
    */
    virtual String* remove(size_t i) {
    }

    /**
     * Replaces the element at i with e
     * arg i: the index of the element you want to replace. 
     * arg e: the element that you're replacing it with.
    */
    virtual String* set(size_t i, String* e) {
    }

    /**
     * Return the number of elements in the collection
    */
    virtual size_t size() {
    }

    /**
     * Destructor.
    */
    virtual ~ArrayString() {
    } 

    /**
     * Tests whether this list contains a String, with the same value as e.
     * @arg e: The string you want to test for containment.
    */
    virtual bool contains(String* e) {
    }

    /**
     * Private helper. resizes the internally owned char array, arr_.
    */
    void resize_() {
    }
};