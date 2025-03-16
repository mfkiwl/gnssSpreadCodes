#include <algorithm>
#include <vector>
#include <iterator>
#include "Constellation.h"
#include "GLO_CDMA.h"

class GLO_CDMA_L3 : public Constellation {
public:
    GLO_CDMA_L3() {}
	void l3ocd(int prn);
	void l3ocp(int prn);

private:

	int getSpreadCodeSize() override { return GLO_CDMA_LENGTH; }
	int getSpreadCodeSize2() override { return 0; }
	std::string getConstellationName() override { return "GLONASS CDMA L3"; }
	int getNumberOfSats() override { return GLO_CDMA_NUMBER_OF_SATS; }

	void l3oc(int prn, int d_or_p);
};




