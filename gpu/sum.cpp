#include <iostream>
#include <amp.h>
#include <time.h>
using namespace concurrency;

const int size = 50000001;

int A[size];
int B[size];
int sum[size];
int  main() {

	
	srand(time(NULL));

	for (long long i = 0; i < size; ++i)
	{
		A[i] = rand() % 10000;
		B[i] = rand() % 10000;
	}
	auto t = clock();

	 array_view<const int, 1> a(size, A);
	 array_view<const int, 1> b(size, B);
	 array_view<int, 1> s(size, sum);
	 s.discard_data();

	 parallel_for_each(
		 s.extent,
		 [=](index<1> i) restrict(amp)
	 {
		 s[i] = a[i] + b[i];
	 }
	 );

	/*for (long long i = 0; i < size; ++i)
	{
		sum[i] = A[i] + B[i];
	}*/

	std::cerr << clock() - t;
	return 0;
}
