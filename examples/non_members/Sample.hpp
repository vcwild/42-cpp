#ifndef SAMPLE_CLASS_H

# define SAMPLE_CLASS_H

class Sample {
	public:
		Sample(void);
		~Sample(void);

		static int	getNumberOfInstances(void);

	private:
		static int	_instanceCounter;
};

#endif
