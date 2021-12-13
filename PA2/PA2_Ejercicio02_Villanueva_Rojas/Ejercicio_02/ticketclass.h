#ifndef TICKETCLASS_H
#define TICKETCLASS_H

#include "butacaclass.h"


class ticketClass
{
private:
    butacaClass *butaca;
public:
    ticketClass();
    butacaClass *getButaca() const;
    void setButaca(butacaClass *value);
};

#endif // TICKETCLASS_H
