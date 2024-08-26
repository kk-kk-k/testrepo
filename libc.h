#ifdef __LIB
#error "multiple include"
#else
#define __LIB
class c
{
public:
	c(int);
	~c(int);
private:
	int i;
}
#endif
