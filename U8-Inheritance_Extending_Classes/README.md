# Inheritance: Extending Classes

### Learning Objectives

After going through this chapter, you will be able to
* Provide an overview of extending classes through inheritance
* Explain single inheritance
* Know the use of protected modifier
* Illustrate the concept of multilevel inheritance
* Explain multiple inheritance
* Describe hierarchical and hybrid inheritance
* Discuss the concepts of abstract and virtual base classes
* Illustrate how constructors are used in derived classes for initializing objects
* Discuss nesting of classes

## SUMMARY
* The mechanism of deriving a new class from and old class is called inheritance. Inheritance provides the concept of reusability. The C++ classes can be reused using inheritance.

* The derived class inherits some or all of the properties of the base class.

* A derived class with only one base class is called single inheritance.

* A class can inherit properties from more than one class which is known as multiple inheritance.

* A class can be derived from another derived class which is known as multilevel inheritance.

* When the properties of one class are inherited by more than one class, it is called hierarchical
inheritance.

* A private member of a class cannot be inherited either in public mode or in private mode.

* A protected member inherited in public mode becomes protected, whereas inherited in private mode
becomes private in the derived class.

* A public member inherited in public mode becomes public, whereas inherited in private mode becomes private in the derived class.

* The friend functions and the member functions of a friend class can directly access the private
 and protected data.

 * The member functions of a derived class can directly access only the protected and public data. 
 However, they can access the private data through the member functions of the base class.

 * Multipath inheritance may lead to duplication of inherited members from a 'grandparent' base class.
 This may be avoided by making the common base class a virtual base class.

 * In multiple inheritance, the base classes are constructed in the order in which they appear in 
 the declaration of the derived class.
 
 * In multilevel inheritance, the constructors are executed in the order of inheritance.

 * A class can contain objects of other classes. This is known as containership or nesting.
 