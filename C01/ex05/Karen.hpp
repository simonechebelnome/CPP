#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>

class Karen;
typedef void (Karen::*fpointer)(void);

class Karen
{
public:
	Karen( void );
	~Karen( void );

	void complain(std::string level);

private:
	fpointer func[4];
	std::string levels[4];
	void debug( void );
	void info( void );
	void warning ( void );
	void error ( void );
};

#endif