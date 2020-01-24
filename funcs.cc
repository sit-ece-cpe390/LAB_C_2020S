/*
	Lab1 Team Programming
	Author: Dov Kruger

	For a description of each function, see:
	https://docs.google.com/document/d/1eTLecRiJJdQkS6OWDgNIhECLfIvyYP_-EdfwistiT8U/edit?usp=sharing
*/
#include <iostream>
#include <cstdint>
using namespace std;
uint64_t sum(uint32_t a, uint32_t b) {
  uint64_t sum = 0;
  for (int i = a; i <= b; i++) {
    sum+=i;
  }
  return sum;
  ======================
 int c = 0;
   int num = 0;
   int sum = 0;
   if (a < b){ 
     num = a;
     c = b;
   }
   else if (b < a){
     num = b;
     c = a;
   }
   for(sum = 0;num <= c; num++){
     sum = sum + num;
   }

   cout << sum << endl;
   >>>>>>>>>>>>>>>>>>>

uint64_t prod(uint32_t a, uint32_t b) {
	uint64_t product = 1;

	while (a <= b) {
		product *= a;
		a++;
	}

	return product;
	========================
          uint64_t z = 1;
	  for (a; a <= b; a++){
	    z *= a ;
	  }
	  return z;
	  
}
uint32_t sumsq(uint32_t a, uint32_t b);
uint32_t countPrimes(uint32_t a, uint32_t b);
bool isPrime(uint32_t p)
{
    for(i = 2; i<=p/2;i++)
      {
	if(p%i == 0)
	  {
	    isPrime = false;
	    break;
	  }
      }
    return isPrime;
}
void swap(uint32_t& a, uint32_t& b);
uint32_t gcd(uint32_t a, uint32_t b)
{ if (b == 0)
    return a;
  return gcd(b, a % b);
}
uint32_t lcm(uint32_t a, uint32_t b);
double fact(uint32_t n);
uint64_t sum(uint32_t n);
double hypot(double a, double b);
double diffsq(double a, double b);
double mean(int a, int b);
double mean(int a, int b, int c);
bool pythagoreantriple(double a, double b);
double trigIdentity(double x);
/*
	note: this function uses pass by reference. Compute the answer and assign
	to x1 and x2 and the roots will be sent back to main and printed
*/
void quadraticEquation(double a, double b, double c, double& x1, double& x2);

double area(double x1, double y1, double x2, double y2, double x3, double y3);
double area(double x1, double y1,
						double x2, double y2,
						double x3, double y3,
						double x4, double y4);
double perimeter(double x1, double y1, double x2, double y2, double x3, double y3) {
	float A = sqrt((double)(x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float B = sqrt((double)(x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	float C = sqrt((double)(x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));

	float s = 0;
	s = A + B + C;
	return s;
}


double perimeter(double x1, double y1,
								 double x2, double y2,
								 double x3, double y3,
								 double x4, double y4);

double dot(double v1x, double v1y, double v1z,
					 double v2x, double v2y, double v2z);
void rect2polar(double x, double y, double &r, double &theta);
void polar2rect(double r, double theta, double &x, double &y);

class Vec3d {
public:
	double x,y,z;
	Vec3d(double x, double y, double z) : x(x), y(y), z(z) {}
	friend ostream& operator<<(ostream& s, const Vec3d& v) {
		return s << v.x << "," << v.y << "," << v.z;
	}
};

double dot(Vec3d v1, Vec3d v2);

Vec3d cross(Vec3d v1, Vec3d v2);
{

    int v1[] = { x, y, z };
    int v2[] = { x, y, z }; 
    int cross_P[n];
    cout << "Cross product:";
    crossProduct(v1, v2, cross_P);
    for (int i = 0; i < n; i++)
        cout << cross_P[i] << " ";
    return 0;
}
double grav(double m1, Vec3d v1, double m2, Vec3d v2);


// array problems
double mean(int x[], int n){
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum+=x[i];
  }
  return double(sum)/double(n);
}
int max(int x[], int n) {
	int maxValue = 0;

	for (int i = 0; i < n; i++) {
		if ( x[i] > maxValue ) {
			maxValue = x[i];
		}
	}

	return maxValue;
}
int min(int x[], int n);
double prod(int x[], int n){
  uint32_t product = 0;
  for (int i = 0; i < n; i++){
    product = product * [i];
  }
  return double(product);
}
int sum(int x[], int n);
void demean(double x[], int n){
double findMean(int x[], int n)
  int sum = 0;
 for (int i = 0; i < n; i++){
   sum += x[i];
 }
   

      
  }
void normalize(double x[], int n);
void round(double x[], int n);
void square(double x[], int n);
void squareRoot(double x[], int n);
uint32_t strip(double x[], uint32_t n, double a, double b);
void reverse(int x[], int n);
uint32_t randomElement(const int x[], int n);
uint32_t countEvens(const int x[],int n){
  uint32_t Even = 0;
  for(int i = 0; i < n; i++){
    if((x[i]%2)==0){
      Even +=1;
    }
  }
    return Even;
}
void addToEach(int x[], int n, int delta);

void removeVowels(char s[]);
{char str1[50], str2[50];
      int length = 0, count, a = 0;
      printf("\nEnter A String:\t");
      scanf("%s", str1);
      length = strlen(str1);
      for(count = 0; count <= length; count++)
      {
            if((str1[count] == 97 || str1[count] == 101 || str1[count] == 105 || str1[count] == 111 || str1[count] == 117) ||(str1[count] == 65 || str1[count] == 69 || str1[count] == 73 || str1[count] == 79 || str1[count] == 85 ))
            {
                  str1[count] = ' ';
            }
            else
            {
                  str2[a++] = str1[count];
            }
      }
      str2[a] = '\0';
      printf("\nString After Removing Vowels:\t%s\n\n", str2);
      return 0;
    }
void reverse(char s[]);
bool isPalindrome(const char s[]);
uint32_t checksum(const char s[]);
uint32_t myhash(const char s[]);
void lowercase(char s[]);

double taylorSeriesSine(double x);
double taylorSeriesCosine(double x);
double taylorSeriesE(double x);


void print(const double x[], int n) {
	for (int i = 0; i < n; i++)
		cout << x[i] << ' ';
	cout << '\n';
}

void print(const int x[], int n) {
	for (int i = 0; i < n; i++)
		cout << x[i] << ' ';
	cout << '\n';
}

int main() {
	cout << sum(1, 3) << ' ' << sum(1, 100) << '\n'; // should work no problem, right?
	cout << sum(1, 1000000) << '\n'; // what should this be? Don't assume it's right, check!

	cout << prod(2, 5) << '\n'; // 2*3*4*5 = 120
	cout << prod(3, 10) << '\n';
	cout << prod(3, 20) << '\n'; // just note whether you think these are right
	cout << prod(3, 30) << '\n'; // if it overflows, you don't have to fix it
	cout << prod(3, 100) << '\n';
	cout << sumsq(1, 5) << '\n';
	cout << "countPrimes(1,100): " << countPrimes(1, 100) << '\n';
	cout << "countPrimes(1,1000000): " << countPrimes(1, 1000000) << '\n';
	cout << "isPrime(1001)=" << isPrime(1001) << '\n';
	int a = 2, b = 3;
	swap(a, b);
	cout << "after swap a=" << a << " b=" << b << '\n';
	cout << "gcd(12, 18)=" << gcd(12, 18) << '\n';
	cout << "gcd(1025, 3025)=" << gcd(1025, 3025) << '\n';
	cout << "lcm(12, 18)=" << lcm(12, 18) << '\n';
	cout << "fact(10)=" << fact(10) << '\n';
	cout << "sum(1..100) = " << sum(100) << '\n';
	cout << "hypot(3,4)=" << hypot(3,4) << '\n';
	cout << "hypot(4,5)=" << hypot(4,5) << '\n';
	cout << "diffsq(3,4)=" << diffsq(3,4) << '\n';
	cout << "mean(1,4)=" << mean(1,4) << '\n';
	cout << "mean(1,4,5)=" << mean(1,4,5) << '\n';
	cout << "pythagoreantriple(3,4)=" << pythagoreantriple(3,4) << '\n';
	cout << "trig identity sin^2+cos^2 =" << trigIdentity(0.0);
	cout << "trig identity sin^2+cos^2 =" << trigIdentity(1.0); // for 1 radian
	double root1, root2; // these will contain the answers after calling
	quadraticEquation(1.0, 3.0, 2.0, root1, root2);
	cout << "roots=" << root1 << ", " << root2 << '\n';

	cout << "area of tri=" << area(0,0, 3,0, 3,3) << '\n';
	cout << "area of tri=" << area(0,0, -4,3, 3,5) << '\n';

	cout << "area of quad=" << area(0,0, 3,0, 4,3, -1,3);
	cout << "perimeter of tri=" << perimeter(0,0, 3,0, 3,3) << '\n';

	cout << "perimeter of quad=" << perimeter(0,0, 3,0, 3,4, 0,4) << '\n';

	cout << "dot product=" << dot(3.0, 2.0, 1.5,  2.0, 1.5, -3.0) << '\n';
	cout << "dot product=" << dot(2.0, 1.0, 1.0,  -3.0, 2.0, 4.0) << '\n';
	Vec3d v1(1.0, 2.0, 0.0), v2(1.0, 5.0, 0.0);
	cout << dot(v1, v2) << '\n';
	Vec3d c = cross(v1, v2);
	cout << c << '\n';

	double x = 3, y = 4;
	double r, theta;
	rect2polar(x, y, r, theta);
	cout << "r=" << r << " theta=" << theta << '\n';
	polar2rect(r, theta, x, y); // should get back the original values!
	cout << "x=" << x << " y=" << y << '\n';

	double earthMass=5.92e+24, moonMass = 7.348e23;
	Vec3d earthPos(0,0,0), moonPos(384400000, 0,0);
	double F = grav(earthMass, earthPos, moonMass, moonPos);
	cout << "Force between earth and moon=" << F << '\n';


  // array problems
	int arr[] = {1, 4, 3, 2};
	cout << "arr avg=" << mean(arr, 4) << '\n'; // should be 2.5
	cout << "arr max=" << max(arr, 4) << '\n'; // should be 4
	cout << "arr max=" << min(arr, 4) << '\n'; // should be 1
	cout << "arr prod=" << prod(arr, 4) << '\n'; // should be 24
	cout << "arr sum=" << sum(arr, 4) << '\n'; // should be 10

	int arr2[] = {5, 6, 7, 8, 9, 10, 2, 1};
	cout << "arr avg=" << mean(arr2, 8) << '\n';
	cout << "arr max=" << max(arr2, 8) << '\n';
	cout << "arr max=" << min(arr2, 8) << '\n';
	cout << "arr prod=" << prod(arr2, 8) << '\n';
	cout << "arr sum=" << sum(arr2, 8) << '\n';

	double arr3[6] = {1, 2, 3, 4, 5, 6};
	demean(arr3, sizeof(arr3)/sizeof(double));
	print(arr3, 6);

	double arr4[6] = {1, 2, 3, 4, 5, 6};
	normalize(arr4, 6);
	print(arr4, 6);

	double arr5[] = { 1.5, 3, 9, 4, 16, 8.2, 5.9, 15.2};
	int size = strip(arr5, 8, 3.0, 8.5);
	print(arr5, size);

	int arr6[] = {6, 1, 9, 2, 5, 3, 7};
	for (int i = 0; i < 4; i++) {
		uint32_t pos = randomElement(arr6, 7);
		cout << arr6[pos] << ' ' ;
	}

	double arr7[] = { 2.5, 2.8, 3.1, 4.2, 9.6, 7.1, -7.3, -7.6};
	round(arr7, sizeof(arr7)/sizeof(double));
	print(arr7, sizeof(arr7)/sizeof(double));

	cout << "countevens=" << countEvens(arr6, 7) << '\n';
	addToEach(arr6, 7, 3);
	print(arr6, sizeof(arr6)/sizeof(double));

	double arr8[] = {1.0, 2.5, 3.0, 3.5};
	square(arr8, sizeof(arr8)/sizeof(double));
	print(arr8, sizeof(arr8)/sizeof(double));
	squareRoot(arr8, sizeof(arr8)/sizeof(double));
	print(arr8, sizeof(arr8)/sizeof(double)); // should be back to orinal values

	int r1[] = {1, 2, 3, 4, 5, 6, 7};
	reverse(r1, 7);
	print(r1, 7);

	int r2[] = {1, 2, 3, 4, 5, 6, 7, 8};
	reverse(r2, 8);
	print(r2, 8);

	char s1[] = "this is a test";
	removeVowels(s1);
	cout << s1 << '\n';

	char s2[] = "testing testing 123";
	reverse(s2);
	cout << s2 << '\n';

	char s3[] = "a toyota. able was i ere i saw elba";
	reverse(s3);
	cout << s3 << '\n';

	cout << "isPalindrome(atoyota)=" << isPalindrome("atoyota") << '\n';
	cout << "isPalindrome(testing)=" << isPalindrome("testing") << '\n';
	cout << "checksum=" << checksum("ABC") << '\n'; // should be 65 + 66 + 67
	cout << "checksum=" << checksum("abcdefghijklmnopqrstuvwxyz") << '\n';

	cout << myhash("ABC") << '\n'; // (65 * 26 + 66) * 26 + 67
	cout << myhash("hash this!") << '\n';
	cout << myhash("hash a longer string") << '\n';

}
