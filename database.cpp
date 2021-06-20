#include "database.h"

database::database()
{

}


database::~database()
{
    db.close();
}
