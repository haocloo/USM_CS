// 16.6 When does the compiler actually generate code for a function template?
when it is instantiated. This happens when the template is used with a specific set of template arguments.

// 16.7 The following function accepts an int argument and returns half of its value as a 
// double:
// double half(int number)
// {
//  return number / 2.0;
// }
// Write a template that will implement this function to accept an argument of any type.
template <typename T>
T half(T number){
    return number/ static_cast<T>(2);
}

// 16.8 What must you be sure of when passing a class object to a function template that 
// uses an operator, such as * or >?
ensure that the class has the operator overloaded.

// 16.9 What is the best method for writing a function template?
using clear and concise code, 
making use of template parameters and arguments effectively, 
and ensuring that the template can handle different data types appropriately.

// 16.10 Suppose your program uses a class template named List, which is defined as
// template<class T>
// class List
// {
//  // Members are declared here...
// };
// Give an example of how you would use int as the data type in the definition of 
// a List object. (Assume the class has a default constructor.)
List<int> myList;

// 16.11 As the following Rectangle class is written, the width and length members are
// doubles. Rewrite the class as a template that will accept any data type for these
// members.
// class Rectangle
// {
//  private:
//  double width;
//  double length;
//  public:
//  void setData(double w, double l)
//  { width = w; length = l;}
//  double getWidth()
//  { return width; }
//  double getLength()
//  { return length; }
//  double getArea()
//  { return width * length; }
// };

template <class T>
class Rectangle
{
private:
    T width;
    T length;
    T area;

public:
    void setData(T w, T l)
    {
        width = w;
        length = l;
    }
    void calcArea() { area = width * length; }
    T getWidth() { return width; }
    T getLength() { return length; }
    T getArea() { return area; }
};

// Review Questions and Answers
// Short answer
// 8. Why is it more convenient to write a function template than a series of overloaded 
// functions?
because function templates allow you to write a single function definition that works with many different data types,
instead of having to write a separate function for each data type used.

// 9. Why must you be careful when writing a function template that uses operators such 
// as [] with its parameters?
 a class object passed to a function template must support all the operators the function will use on the object.

// Fill-in-the-Blank
// 13. When writing function or class templates, you use a(n) __________ to specify a generic 
// data type.
template parameter

// 14. The beginning of a template is marked by a(n) __________.
template keyword

// 15. When defining objects of class templates, the __________ you wish to pass into the 
// type parameter must be specified.
type

// 16. A(n) __________ template works with a specific data type
class

// 20. Write a function template that interchanges two values of variables of any type
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}


// True or False
// 25. All type parameters defined in a function template must appear at least once 
// in the function parameter list.
T

// 26. The compiler creates an instance of a function template in memory as soon 
// as it encounters the template.
F

// 27. A class object passed to a function template must overload any operators 
// used on the class object by the template.
T

// 28. A template class is a class that generates identical objects.
F

// 29. In the function template definition, it is not necessary to use each type 
// parameter declared in the template prefix.
T

// 30. Function templates support overriding but not overloading.
F, support both

// 31. It is possible to overload a function template and an ordinary (nontemplate) 
// function.
T

// 32. Class templates cannot be publicly inherited. 
F, it can be publicly inherited

// 33. A class template may not be used as a base class.
F, may be use as base class

// 34. Specialized templates work with a specific data type.
T


// Find the Error
// Each of the following declarations or code segments has errors. Locate as many as possible.
// 37. template <class T>
void functionName(T number) // void (T number)
// {
cout << number; //  cout << T;
// }

// 38. template <class T>
T square(T number) // int square(int number)
// {
//  return number * number;
// }

// 39. template <class T1, class T2>
T1 sum(T1 x, T2 y) // T1 sum(T1 x, T1 y)
// {
//  return x + y;
// }

// 40. Assume the following definition appears in a program that uses the SimpleVector class template presented in this chapter.
SimpleVector<int> array(25); // int <SimpleVector> array(25);

// 41. Assume the following statement appears in a program that has defined valueSet as an object of the SimpleVector class presented in this chapter. Assume valueSet is a 
// vector of ints, and has 20 elements.

cout << valueSet[2] << endl;
// cout << valueSet<int>[2] << endl;

// Programming Challenges
// 3. Multiple Parameter Templates
// Write a template function named showValues. The function should accept two arguments of two different generic data types. It should then display the value of each 
// argument and the amount of memory space it occupies in bytes. Design a simple driver 
// program that demonstrates the templates with the following data types: int, float, 
// char, char *, and long double.
template <typename T1, typename T2>
void showValues(T1 arg1, T2 arg2) {
    cout << "Value of first argument: " << arg1 << endl;
    cout << "Size of first argument: " << sizeof(arg1) << " bytes" << endl;
    cout << "Value of second argument: " << arg2 << endl;
    cout << "Size of second argument: " << sizeof(arg2) << " bytes" << endl;
}

int main() {
    int a = 5;
    float b = 3.14f;
    char c = 'x';
    char *d = "Hello";
    long double e = 123.456L;

    showValues(a, b);
    showValues(c, d);
    showValues(e, a);

    return 0;
}

// 4. Function Template arrange
// Write a function template named arrange. The function should accept three reference 
// variables as arguments and arrange them in ascending order. Design a simple driver 
// program that demonstrates the template with int, double, and char data types.
template <typename T>
void arrange(T &a, T &b, T &c) {
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
}

int main() {
    int a = 3, b = 1, c = 2;
    arrange(a, b, c);
    cout << a << " " << b << " " << c << endl;

    double x = 3.3, y = 1.1, z = 2.2;
    arrange(x, y, z);
    cout << x << " " << y << " " << z << endl;

    char p = 'c', q = 'a', r = 'b';
    arrange(p, q, r);
    cout << p << " " << q << " " << r << endl;

    return 0;
}

// 5. Function Template to Return Sum of Squares of an Array
// Write a function template that computes the sum of squares of all the elements in an 
// array. The function should accept the array and its size as arguments. The elements 
// and size of the array should be of generic and integer data types, respectively. Test the 
// template in a simple driver program that sends values of various types as arguments 
// and displays the results.
template <typename T>
T sumOfSquares(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i] * arr[i];
    }
    return sum;
}

int main() {
    int arr1[] = {1, 2, 3};
    cout << "Sum of squares of int array: " << sumOfSquares(arr1, 3) << endl;

    double arr2[] = {1.1, 2.2, 3.3};
    cout << "Sum of squares of double array: " << sumOfSquares(arr2, 3) << endl;

    return 0;
}

// 9. SearchableVector Modification
// Modify the SearchableVector class template presented in this chapter so it performs 
// a binary search instead of a linear search. Test the template in a driver program.
template <class T>
class SearchableVector {
    private:
        T *arr;
        int size;
    public:
        SearchableVector(int size) {
            this->size = size;
            arr = new T[size];
        }
        ~SearchableVector() {
            delete[] arr;
        }
        void setElement(int index, T value) {
            arr[index] = value;
        }
        int findItem(T value) {
            int left = 0, right = size - 1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (arr[mid] == value) return mid;
                else if (arr[mid] < value) left = mid + 1;
                else right = mid - 1;
            }
            return -1;
        }
};

int main() {
    SearchableVector<int> sv(5);
    sv.setElement(0, 1);
    sv.setElement(1, 2);
    sv.setElement(2, 3);
    sv.setElement(3, 4);
    sv.setElement(4, 5);

    cout << sv.findItem(3) << endl; // should output 2
    cout << sv.findItem(6) << endl; // should output -1

    return 0;
}

// 10. Class Template Cuboid
// Design a class template Cuboid that should have member variables length, breadth,
// and height. It should have the member functions getVolume and getSurfaceArea. 
// Test the class using a driver program. Note that a cuboid of sides a, b, and c has volume 
// V 5 a 3 b 3 c and surface area A 5 2(ab 1 bc 1 ca). 
template <typename T>
class Cuboid {
    public:
        T length, breadth, height;
        Cuboid(T l, T b, T h) : length(l), breadth(b), height(h) {}
        T getVolume() {
            return length * breadth * height;
        }
        T getSurfaceArea() {
            return 2 * (length * breadth + breadth * height + height * length);
        }
};

int main() {
    Cuboid<int> c1(2, 3, 4);
    cout << "Volume of int cuboid: " << c1.getVolume() << endl;
    cout << "Surface area of int cuboid: " << c1.getSurfaceArea() << endl;

    Cuboid<double> c2(2.5, 3.5, 4.5);
    cout << "Volume of double cuboid: " << c2.getVolume() << endl;
    cout << "Surface area of double cuboid: " << c2.getSurfaceArea() << endl;

    return 0;
}


