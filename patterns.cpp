#include<iostream>
using namespace std;
void rect(int n){
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout << "*" << "";
		}
		cout << "\n";
	}
}

void hollow_rect(int n){
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			if (i==1 || i==n || j==1 || j==n){
				cout << " * " << " ";
			}
			else{
				cout << "    ";
			}
		}
		cout << "\n";
	}
}

void right_pyramid(int n){
	for (int i=1; i<=n; i++){
		for (int j=0; j<i; j++){
			cout << "*" << " ";
		}
		cout << "\n";
	}
}

void inverted_right_pyramid(int n){
	for (int i=0; i<n; i++){
		for (int j=n-i; j>0; j--){
			cout << "*" << " ";
		}
		cout << "\n";
	}
}

void left_pyramid(int n){
	int space = n-1;
	for (int i=1; i<=n; i++){
		for (int j=0; j<space; j++){
			cout << " ";
		}
		for (int j=0; j<i; j++){
			cout << "*" << "";
		}
		cout << "\n";
		space--;
	}
}

void number_right_pyramid(int n){
	for (int i=1; i<=n; i++){
		for (int j=1; j<=i; j++){
			cout << j << " ";
		}
		cout << "\n";
	}
}

void number_reverse_pyramid(int n){
	for (int i=n; i>=1; i--){
		for (int j=1; j<=i; j++){
			cout << j << " ";
		}
		cout << "\n";
	}
}

void number_cnt_pyramid(int n){
	int num = 1;
	for (int i=1; i<=n; i++){
		for (int j=0; j<i; j++){
			cout << num << " ";
			num++;
		}
		cout << "\n";
	}
}

void binary_right_pyramid(int n){
	int flag = 1;
	for (int i=1; i<=n; i++){
		if (i%2==0)flag = 0;
		else{
			flag = 1;
		}
		cout << flag << " ";
		for (int j=0; j<i-1; j++){
			if (flag==0) flag = 1;
			else{
				flag = 0;
			}
			cout << flag << " ";
		}
		cout << "\n";
	}
}


void pattern_2(int n){
	int space = 2*n-1;
	for (int i=0; i<n; i++){
		for (int j=0; j<=i; j++){
			cout << "*" << "";
		}
		for (int j=0; j<space; j++){
			cout << " ";
		}
		space-=2;
		for (int j=0; j<=i; j++){
			cout << "*" << "";
		}
		cout << "\n";
	}
	space += 2;
	for (int i=n-1; i>=0; i--){
		for (int j=0; j<=i; j++){
			cout << "*" << "";
		}
		for (int j=0; j<space; j++){
			cout << " ";
		}
		space+=2;
		for (int j=0; j<=i; j++){
			cout << "*" << "";
		}
		cout << "\n";
	}
}

void parrellelogram(int n){
	for (int i=0; i<n; i++){
		for (int j=0; j<n-1-i; j++){
			cout << " ";
		}
		for (int j=0; j<n; j++){
			cout << "*" << "";
		}
		cout << "\n";
	}
}

void number_central_pyramid(int n){
	for (int i=1; i<=n; i++){
		for (int j=0; j<n-i; j++){
			cout << " ";
		}
		for (int j=0; j<i; j++){
			cout << i << " ";
		}
		cout << "\n";
	}
}

void palindrome_pattern(int n){
	for (int i=1; i<=n; i++){
		for (int j=0; j<n-i; j++){
			cout << " ";
		}
		for (int j=i; j>=1; j--){
			cout << j << "";
		}
		for (int j=2; j<=i; j++){
			cout << j << "";
		}
		cout << "\n";
	}
}

void diamond(int n){
	for (int i=0; i<n; i++){
		for (int j=0; j<n-i; j++){
			cout << " ";
		}
		for (int j=0; j<2*i+1; j++){
			cout << "*" << "";
		}
		cout << "\n";
	}
	for (int i=n-2; i>=0; i--){
		for (int j=0; j<n-i; j++){
			cout << " ";
		}
		for (int j=0; j<2*i+1; j++){
			cout << "*" << "";
		}
		cout << "\n";
	}
}

void number_rectangle(int n){
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			cout << j << " ";
		}
		cout << "\n";
	}
}

void number_rectangle_2(int n){
	for (int i=1; i<=n; i++){
		for (int j=n*i-n+1; j<=n*i; j++){
			cout << j << " ";
		}
		cout << "\n";
	}
}

void reverse_number_triangle(int n){
	for (int i=1; i<=n; i++){
		for (int j=i; j>=1; j--){
			cout << j << " ";
		}
		cout << "\n";
	}
}

void number_pattern_1(int n){
	for (int i=1; i<=n; i++){
		for (int j=i; j<=n+i-1; j++){
			cout << j << " ";
		}
		cout << "\n";
	}
}

void continous_number_right_pyramid(int n){
	int num = 1;
	for (int i=1; i<=n; i++){
		for (int j=0; j<i; j++){
			cout << num << " ";
			num++;
		}
		cout << "\n";
	}
}

void continous_number_right_pyramid_reverse(int n){
	for (int i=n; i>=1; i--){
		for (int j=i; j<=n; j++){
			cout << j << " ";
		}
		cout << "\n";
	}
}

void star_left_reverse(int n){
	for (int i=n; i>=1; i--){
		for (int j=1; j<=n-i; j++){
			cout << " ";
		}
		for (int j=0; j<i; j++){
			cout << "*" << "";
		}
		cout << "\n";
	}
}

void rectangular_mix_number_star_pattern(int n){
	for (int i=0; i<n; i++){
		for (int j=1; j<=n-i; j++){
			cout << j << " ";
		}
		for (int j=0; j<2*i; j++){
			cout << "*" << " ";
		}
		for (int j=n-i; j>=1; j--){
			cout << j << " ";
		}
		
		
		cout << "\n";
	}
}

void alpha_triangle_dummy(int n){
	for (int i=1; i<=n; i++){
		char a = 65;
		for (int j=0;j<i; j++){
			cout << a << "";
			a++;
		}
		a--;
		for (char j=a-1; j>=65; j--){
			cout << j << "";
		}
		cout << "\n";
	}
}

void diamond_boundary(int n){
	for (int i=n; i>=1; i--){
		for (int j=0; j<i; j++){
			cout << "*" << "";
		}
		for (int j=0; j<2*(n-i); j++){
			cout << " ";
		}
		for (int j=0; j<i; j++){
			cout << "*" << "";
		}
		cout << "\n";
	}
	for (int i=1; i<=n; i++){
		for (int j=0; j<i; j++){
			cout << "*" << "";
		}
		for (int j=0; j<2*(n-i); j++){
			cout << " ";
		}
		for (int j=0; j<i; j++){
			cout << "*" << "";
		}
		cout << "\n";
	}
}

void number_square(int n){
	for (int i=n; i>=1; i--){
		for (int j=n; j>=i; j--){
			cout << j << " ";
		}
		for (int j=0; j<i-1; j++){
			cout << i << " ";
		}
		for (int j=0; j<i-1; j++){
			cout << i << " ";
		}
		for (int j=i+1; j<=n; j++){
			cout << j << " ";
		}
		cout << "\n";
	}
	for (int i=2; i<=n; i++){
		for (int j=n; j>=i; j--){
			cout << j << " ";
		}
		for (int j=0; j<i-1; j++){
			cout << i << " ";
		}
		for (int j=0; j<i-1; j++){
			cout << i << " ";
		}
		for (int j=i+1; j<=n; j++){
			cout << j << " ";
		}
		cout << "\n";
	}
}

int main(){
	int n; cin >> n;
	number_square(n);
		
	return 0;
}