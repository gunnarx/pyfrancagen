
// For lazyness sake, here are the built in Franca types typedef:ed

// Of course in a better future version code generator will translate to
// native C/C++ types directly.

#include <stdint.h>
#include <vector>
#include <map>
#include <string>

typedef int8_t Int8;
typedef int16_t Int16;
typedef int32_t Int32;
typedef int64_t Int64;
typedef uint8_t UInt8;
typedef uint16_t UInt16;
typedef uint32_t UInt32;
typedef uint64_t UInt64;
typedef bool Boolean;
typedef float Float;
typedef double Double;
typedef std::string String;
typedef std::vector<char> ByteBuffer;

