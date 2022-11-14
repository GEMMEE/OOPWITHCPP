# Unit 9 Pointers, Virtual Functions and Polymorphism
## **`Learning Objectives`**

After going through this chapter, you will be able to
+ Explain the concept of pointers
+ Illustrate how pointers to objects are created
+ Know the usage of `this` pointer
+ Discuss polymorphism and its types
+ Interpret how pointers to derived classes work
+ Describe virtual functions and list their various rules
+ Discuss virtual constructors and destructors
**`______________________________________________________________`**

## **`Summary`**

- Polymorphism simply means one name having multiple forms.
- There are two types of polymorphism, namely, compile time polymorphism and run time polymorphism.

- Functions and operators overloading are examples of compile time polymorphism. The overloaded member functions are selected for invoking by matching arguments, both type and number. The compiler knows this information at the compile  time and, therefore, compiler is able to select the appropriate function for a particular call at the compile time itself. This is called early or static binding or static linking. It means that an object is bound to its function call at compile time.

- In run time polymorphism, an appropriate member function is selected while the program is running. C++ supports run time polymorphism with the help of virtual functions. It is called late or dynamic binding because the appropriate function is selected dynamically at run time. Dynamic binding requires use of pointers to objects and is one of the powerful features of C++.

- Object pointers are useful in creating objects at run time. It can be used to access the public members of an object, along with an arrow operator `->`

- A `this` pointer refers to an object that currently invokes a member function. For example, the function call `a.show()` will set the pointer `this` to the address of the object `a`.

- Pointers to objects of a base class type are compatible with pointers to objects of a derived class. Therefore, we can use a single pointer variable to point to objects of base class as well as derived classes.

- When a function is made virtual, C++ determines which function to use at run time based on the type of object pointed to by the base pointer, rather than the type of the pointer. By making the base pointer to point to different objects, we can execute different versions of the virtual function.

- Run time polymorphism is achieved only when a virtual function is accessed through a pointer to the base class. It cannot be achieved using object name along with the dot operator to access virtual function.

- We can have virtual destructors but not virtual constructors.

- If a virtual function is defined in the base class, it need not be necessarily redefined in the derived class. In such cases, the respective calls will invoke the base class function.

- A virtual function, equated to zero is called a pure virtual function. It is a function declared in a base class that has no definition relative to the base class. A class containing such pure function is called an abstract class.



## `© Object oriented programming with C++, 8th ed. E. BALAGURUSAMY`