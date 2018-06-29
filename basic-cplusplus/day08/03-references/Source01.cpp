int main() {
	int i = 1;
	int &j = i;
	i = i + 1;
	j = j + 2;
}