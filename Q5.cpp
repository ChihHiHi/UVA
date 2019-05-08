#include <iostream>
#include <string>

using namespace std;

ostream& bell(ostream& out) {
	out << '\a';
	return out;
}

ostream& skip(ostream& output, int n)
{
    for(int i=0;i<n;i++)
        output<<' ';
    return output;
}

int main() {
	cout << "abc" << skip(3) << "efg" <<bell<< endl;
	return 0;
}
