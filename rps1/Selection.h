/**
 *  RPS selection
 *  interface file
 */

#ifndef RPS1_SELECTION_H
#define RPS1_SELECTION_H

#include "RPS_type.h"

class Selection {
private:

protected:

public:
    virtual selection_t makeSelection() = 0;

};

#endif //RPS1_SELECTION_H