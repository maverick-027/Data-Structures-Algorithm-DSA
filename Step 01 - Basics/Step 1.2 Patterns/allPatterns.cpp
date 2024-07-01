#include<iostream>
using namespace std;

void printPattern1(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << "* ";
        }
        cout << endl;
   }
}

void printPattern2(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void printPattern3(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
   }
}

void printPattern4(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
   }
}

void printPattern5(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (n-i+1); j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void printPattern6(int n){
    for(int i = 1; i <= n; i++){
        int num = 1;
        for(int j = 1; j <= (n-i+1); j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void printPattern7(int n){
    for(int i = 1; i <= n; i++){
        // printing space
        for(int j = 1; j <= (n-i); j++){
            // cout << "_";
            cout << " ";
        }

        // printing stars
        for(int k = 1; k <= (2*i-1); k++){
            cout << "*";
        }

        // printing space
        for(int l = 1; l <= (n-i); l++){
            // cout << "_";
            cout << " ";
        }
        cout << endl;
    }
}

void printPattern8(int n){
    for(int i = 1; i <= n; i++){
        // printing space
        for(int j = 1; j <= (i-1); j++){
            // cout << "_";
            cout << " ";
        }

        // printing stars
        for(int k = 1; k <= 2*(n-i)+1; k++){
            cout << "*";
        }

        // printing space
        for(int l = 1; l <= (i-1); l++){
            // cout << "_";
            cout << " ";
        }
        cout << endl;
    }
}

void printPattern9(int n){
    // Above half pattern (1 to <= n/2 row)
    for(int i = 1; i <= n/2; i++){
        // printing space
        for(int j = 1; j <= (n-i); j++){
            cout << " ";
        }

        // printing stars
        for(int k = 1; k <= (2*i-1); k++){
            cout << "*";
        }

        // priting space
        for(int l = 1; l <= (n-i); l++){
            cout << " ";
        }
        cout << endl;
    }

    // Next Half pattern (start from n/2 + 1 row to n)
    for(int i = n/2 + 1; i <= n; i++){
        // printing space
        for(int j = 1; j <= (i-1); j++){
            cout << " ";
        }

        // printing stars
        for(int k = 1; k <= 2*(n-i)+1; k++){
            cout << "*";
        }

        // printing space
        for(int l = 1; l <= (i-1); l++){
            cout << " ";
        }
        cout << endl;
    }
}

void printPattern10(int n){
    int a = n/2 +1; // spitting the pattern into two parts

    // above half pattern (middle line included)
    for(int i = 1; i <= a; i++){
        // printing stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }

        // printing space
        for(int k = 1; k <= (n/2 - i + 1); k++){
            cout << " ";
        }
        cout << endl;
    }

    // below half pattern (middle line not included)
    for(int i = a+1; i <= n; i++){
        // printing stars
        for(int j = 1; j <= (n-i+1); j++){
            cout << "*";
        }

        // printing space
        for(int k = 1; k <= (i-a); k++){
            cout << " ";
        }
        cout << endl;
    }
}

void printPattern11(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if((i+j)%2 == 0) cout << "1 ";
            else cout << "0 ";
        }
        cout << endl;
   }
}

void printPattern12(int n){
    for(int i = 1; i <= n; i++){
        // printing numbers
        for(int j = 1; j <= i; j++){
            cout << j;
        }

        // printing space
        for(int k = 1; k <=2*(n-i); k++){
            cout << " ";
        }

        // printing numbers from end
        for(int l = i; l >= 1; l--){
            cout << l;
        }
        cout << endl;
    }
}

void printPattern13(int n){
    int num = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void printPattern14(int n){
    for(int i = 1; i <= n; i++){
        char ch = 'A';
        for(int j = 1; j <= i; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void printPattern15(int n){
    for(int i = 1; i <= n; i++){
        char ch = 'A';
        for(int j = 1; j <= (n-i+1); j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void printPattern16(int n){
    char ch = 'A';
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

void printPattern17(int n){
    for(int i = 1; i <= n; i++){
        char ch = 'A';
        // printing space
        for(int j = 1; j <= (n-i); j++){
            cout << " ";
        }

        // printing characters
        int breakpoint = (2*i-1)/2;
        for(int k = 1; k <= (2*i-1); k++){
            cout << ch;
            if(k <= breakpoint) ch++;
            else ch--;
        }

        // printing space
        for(int l = 1; l <= (n-i); l++){
            cout << " ";
        }
        cout << endl;
    }
}

void printPattern18(int n){
    for(int i = 0 ; i < n; i++){
          // Inner loop for printing the alphabets from
          // A + N -1 -i (i is row no.) to A + N -1 ( E in this case).
          for(char ch = ('A'+n-1)-i; ch <= ('A'+n-1); ch++){
              cout << ch << " ";
          }
          cout << endl;
      }
}

void printPattern19(int n){
    // printing the upper half
    for(int i = 1; i <= n; i++){
        // printing stars
        for(int j = 1; j <= (n-i+1); j++){
            cout << "*";
        }

        // printing space
        for(int k = 1; k <= 2*(i-1); k++){
            cout << " ";
        }

        // printing stars
        for(int l = 1; l <= (n-i+1); l++){
            cout << "*";
        }
        cout << endl;
    }

   // printing the lower half
   for(int i = 1; i <= n; i++){
        // printing stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }

        // printing space
        for(int k = 1; k <= 2*(n-i); k++){
            cout << " ";
        }
        
        // printing stars
        for(int l = i; l >= 1; l--){
            cout << "*";
        }
        cout << endl;
    }
}

void printPattern20(int n){
    // printing the upper half to middle
    for(int i = 1; i <= n; i++){
        // printing stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }

        // printing spaces
        for(int k = 1; k <= 2*(n-i); k++){
            cout << " ";
        }

        // printing stars
        for(int l = i; l >= 1; l--){
            cout << "*";
        }
        cout << endl;
    }

   // printing the lower half
   for(int i = 1; i <= n; i++){
        // printing stars
        for(int j = 1; j <= (n-i); j++){
            cout << "*";
        }

        // printing spaces
        for(int k = 1; k <= (2*i); k++){
            cout << " ";
        }

        // printing stars
        for(int l = 1; l <= (n-i); l++){
            cout << "*";
        }
        cout << endl;
    }
}

void printPattern21(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || i == n || j == 1 || j == n){
                cout << "*";
            } else cout << " ";
        }
        cout << endl;
    }
}

void printPattern22(int n){
    for(int i = 0; i < (2*n-1); i++){
         for(int j = 0; j < (2*n-1); j++){
        
             // Initialising the top, down, left and right indices of a cell.
             int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
             
             // Min of 4 directions and then we subtract from n
             // because previously we would get a pattern whose border
             // has 0's, but we want with border N's and then decreasing inside.
             cout << (n- min(min(top,bottom), min(left,right))) << " ";
         }
         cout << endl;
     }
}

void printPattern23(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (n-i); j++){
            cout << " ";
        }

        for(int k = i; k >= 1; k--){
            cout << k;
        }
        cout << endl;
    }
}

void printPattern24(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (i-1); j++){
            cout << " ";
        }
        for(int k = 1; k <= (n-i+1); k++){
            cout << "*";
        }

        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;

    printPattern1(n);
    return 0;
}