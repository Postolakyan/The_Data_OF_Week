#include "head.hpp"
int Switch(int n) {/*This function prints the corresponding day of the week depending on the response received */
switch(n) {
			case 01:
				cout<<"Monday";
				break;
			case 02:
				cout<<"Thuesday";
				break;
			case 03:
				cout<<"Wednesday";
				break;

			case 04:
				cout<<"Thursday";
				break;

			case 05:
				cout<<"Friday";
				break;

			case 06:
				cout<<"Saturday";
				break;

			case 0:
			cout<<"Sunday";
			break;


}
	return 0;
}

