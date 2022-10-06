# Unit 7 Operator Overloading and Type Conversions

## **`Learning Objectives`**

After going through this chapter, you will be able to
+ Provide an overview of operator overloading
+ Demonstrate how unary and binary operators are overloaded
+ Illustrate how strings are manipulated using overloaded operators
+ Identify the rules for overloading operators
+ Discuss type conversion

**`______________________________________________________________`**

## **`Summary`**

- Operator overloading is one of the important features of C++ language that enhances its exhaustibility.

- Using overloading feature we can add two user defined data types such as objects, with the same syntax, just as basic data types.

- We can overload almost all the C++ operators except the following:
  + class member access operators(`.`  and `.*`)
  + scope resolution operator(`::`)
  + size operator(`sizeof`)
  + conditional operator(`?:`)

- Operator overloading is done with the help of a special function, called operator function, which describes the special task to an operator.

- There are certain restrictions and limitations in overloading operators. Operator functions must either be member functions (nonstatic) or friend functions. The overloading operator must have at least one operand that is of user-defined type.

- The compiler does not support automatic type conversions for the user defined data types. We can use casting operator functions to achieve this.

- The casting operator function should satisfy the following conditions:
  * It must be a class member
  * It must not specify a return type
  * It must not have any arguments