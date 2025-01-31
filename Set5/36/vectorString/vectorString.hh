#ifndef vectorstring_hh
#define vectorstring_hh

#include <string>
#include <vector>
#include <fstream>

class VectorString
{
    std::vector<std::string> vector_d;
    
    public:
        VectorString(std::string filename);
        VectorString(VectorString const &other);
        
        std::size_t size() const;
        std::size_t capacity() const;
        
        void swap(VectorString &other);
        
};

inline std::size_t VectorString::size() const
{
    return vector_d.size();
}

inline std::size_t VectorString::capacity() const
{
    return vector_d.capacity();
}



#endif
