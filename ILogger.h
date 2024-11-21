#include <string>
using namespace std;
class Ilogger{
  public:
    virtual void write(const string& msg)=0;
}
