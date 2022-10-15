#include <iostream>
using namespace std;

void permutation(char *input, char *output, int i, int j) {
    if (input[i] == '\0') {
        output[j] = '\0';
        cout << output << endl;
        return;
    }

    int k = i;
    do {
        swap(input[i], input[k]);
        output[j] = input[i];
        permutation(input, output, i + 1, j + 1);
        swap(input[i], input[k]);
        k++;
    } while (input[k] != '\0');
}

int main()
{
    char input[100];
    cin >> input;
    char output[100];
    permutation(input, output, 0, 0);
    return 0;
}