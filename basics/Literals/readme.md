# Literals
##  What are Literals?
<p>Values such as numbers, characters, or strings of characters whose values are self-evident are known as literals.</p>

<p> 23, "Hello World", 3.145, ' S ', True, these are literals having fixed values.</p>

<img align="center" src="https://read.learnyard.com/content/images/2023/10/FigJam-basics--1-.png"/>

### 1. Integer
It includes all positive and negative numbers including zero without decimal places.

Examples:10, -13, 760, 0, -1113.

### 2. Floating point number (float / double) 
It includes all numbers with decimal places and it can also be negative or positive.

Examples:98.21, 10.222, 11.000, -18.23.
### 3. Character (char)
Character literals represent single characters enclosed in single quotes. The character can be any alphabet, number, or special character.

Examples: 'X', ' &', ' _', ' p', '6'.

### 4. String (string)
String literals are the combination of two or more single-character literals enclosed in double quotes.

Examples: "Learn yard", "Programming", "Hello"

### 5. Boolean (bool)
Boolean literals include only two logical values true and false.

<hr/>

## How to print these literals in C++?
```cpp
cout << "Hello learners"; 
```
This "cout" statement is the one that helps us to print anything on the screen. We will learn more about "cout" statement later.

Now use the "cout" statement to print all the literals we have learned so far.

### 1. Printing a string
```c++
#include <iostream>
using namespace std;
 
int main() {
 
    cout << "Hi I am a String ..!";
 
    return 0;
}
```

Output:
``` bash
Hi I am a String ..!
```

### 2. Printing multiple strings
We can print multiple strings in a single statement by separating them with the `<<` operator.

```C++
#include <iostream>
using namespace std;
 
int main() {
 
    cout << "Hi ..!" << " " << "Are you enjoying the course ?";
 
    return 0;
}
```

Output:
```bash
Hi ..! Are you enjoying the course ?
```

This includes three strings :

1. "Hi ..!"
2. " "
3. "Are you enjoying the course"

### 3. Printing an integer
```cpp
#include <iostream>
using namespace std;
 
int main() {
 
    cout << 189 ;
 
    return 0;
}
```

Output:
```bash
189
```

### 4. Printing multiple integers
```cpp
#include<iostream>
using namespace std;

int main(){

  cout << 18 << 9 ;

  return 0;
}
```
Output:

```bash
189
```
But wait, Why the output is similar to printing number 189? It is because we have not given a space between them.

Try using:
```cpp
cout << 18 << " " << 9;
```
Now we have introduced an empty string in between both numbers.

Below code blocks below show, how we can print the other types of literals using the same `cout` statement.

``` cpp
#include<iostream>
using namespace std;

int main(){

  cout << "Float Literal : " << 12.32 << endl;
  
  cout << "Character Literal : " << 'T' << endl;

  cout << "Boolean Literal : " << true << endl;
  
  return 0;
}
```
Output:
```bash
Float Literal : 12.32
Character Literal : T
Boolean Literal : 1
```

Don't get overwhelmed by seeing `endl` , I will explain what it means next.

Also, can you see, how the boolean true is printed as 1? It is because true is stored as 1 and false as 0 in the system internally.

## Multiple Print Statements
``` cpp
#include<iostream>
using namespace std;

int main(){

  cout << "Namaste";
  cout << "I am from Bharat";

  return 0;
}
```

Output:
```bash
NamasteI am from Bharat
```

Are you surprised by the answer, expecting it to be printed in two separate lines?

It is because the `cout` statement goes by flow and since there is no line separating characters in between.

Now come our saviors `endl` and `/n` statements.

``` cpp
#include<iostream>
using namespace std;

int main(){

  cout << "Namaste" << endl;

  cout << "Friends \n" ;
  
  cout << "I am from Bharat";

  return 0;
}
```
Output:
``` bash
Namaste 
Friends
I am from Bharat
```

Here both "endl" and "\n" statements add a new line after the first and second statement, it nearly works as if an ENTER key is being pressed after the first and second print statement.

Both work similarly but their performance is slightly different. In short "\n" is more efficient than endl".

One piece of advice from my side. If you are getting TLE and you feel everything else is correct, try replacing "endl" with "\n".

<hr/>
<div align="center" style="border:1px solid yellow; padding: 5px 10px;">
    <p><i>"Never forget to add a semicolon, else be ready for sleepless nights debugging the error." </i></p>
</div>
<div align="right" >
    
<a style="text-decoration:none;" href="../Comments/">Next: Comments</a>
</div>