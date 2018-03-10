#ifndef rectagle_h
# define rectangle_h

class Rectangle{
	private:
		float	width;
		float	height;
	public:
		Rectangle();
		Rectangle(float, float);
		
		void	setHeight(float);
		void	setWidth(float);
		void	area(void);
		void	displayMenu();
		float	getHeight();
		float	getWidth();
};

#endif
