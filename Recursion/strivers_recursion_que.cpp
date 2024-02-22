// print name 5 times

// #include <iostream>
// using namespace std;

// int printname(int n, string s)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     printname(n - 1, "riyank");
//     cout << s << endl;
// }

// int main()
// {
//     printname(5, "riyank");
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// sum of first n numbers using recursion

// #include <iostream>
// using namespace std;
// int sumofn(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }

//     return n + sumofn(n - 1);
// }

// int main()
// {
//     cout << sumofn(5);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// reverse array using recursion

// #include <iostream>
// using namespace std;
// int reverse1(int arr[], int l, int r)
// {
//     if (l >= r)
//     {
//         return 0;
//     }
//     swap(arr[l], arr[r]);

//     reverse(arr, l + 1, r - 1);
// }

// int reverse2(int arr[], int n, int i)
// {
//     if (i >= n / 2)
//     {
//         return 0;
//     }
//     swap(arr[i], arr[n - i - 1]);

//     reverse2(arr, n, i + 1);
// }
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     //  reverse1(arr, 0, n - 1);
//     int i = 0;
//     reverse2(arr, n, i);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// palindrome string using recursion and using only one parameter

// #include <iostream>
// using namespace std;

// bool palindrome(string s, int i)
// {
//     if (i > s.size() / 2)
//     {
//         return true;
//     }
//     if (s[i] != s[s.size() - i - 1])
//     {
//         return false;
//     }
//     return palindrome(s, i + 1);
// }

// int main()
// {
//     string s = "madam";
//     int i = 0;
//     cout << palindrome(s, i);
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
