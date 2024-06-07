#include<iostream>
#include<vector>

using namespace std;

int N, M;
int arr[9] = {0,};
bool count[9] = {0,};

void func(int cnt) {
    if(cnt == M) {
        for(int i = 0; i < M; i++) cout << arr[i] << " ";
        cout << endl;
        return;
    }
    for(int i = 1; i <= N; i++) {
        if(!count[i]) {
            count[i] = true;
            arr[cnt] = i;
            func(cnt + 1);
            count[i] = false;
        }
    }
}

int main() {
	cin >> N >> M;
	func(0);
}
