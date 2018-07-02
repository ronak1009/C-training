void f(int &a) //int &a = i  i.e. in arguments, I am creating a local scoped reference variable for i
{
	a = 5;
}

int main() {
	int i = 1;
	f(i);
}