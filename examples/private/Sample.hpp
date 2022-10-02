#ifndef SAMPLE_CLASS_H

# define SAMPLE_CLASS_H

class Sample {
	public:
		Sample(int value);
		~Sample(void);

		int		getFoo(void) const;
		bool	setFoo(int value);
		int		compare(Sample *other) const;

	private:
		int		_foo;
};

#endif
