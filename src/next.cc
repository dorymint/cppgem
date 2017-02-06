
// from: cpplover.blogspot.jp


// TODO: Do it
 
#include <iterator>

template < typename T >
    struct X
    {
      X( T t ) {}
      template < typename Iterator >
        X( Iterator first, Iterator last ) {}
    };
// deduction gide
template < typename Iterator >
    X( Iterator, Iterator ) -> X< typename std::iterator_traits<Iterator>::value_type >;

int main()
{
  // X<int>
  X x1(0);

  int a[] = {1,2,3};
  // X<int>
  X x2(std::begin(a), std::end(a));
}
