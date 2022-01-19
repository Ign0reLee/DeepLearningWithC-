#ifndef _VARIABLE_
#define _VARIABLE_

#include <list>
#include <random>
#include <memory>
#include <boost/intrusive_ptr.hpp>
#include <boost/archive/text_oarchive.hpp>

using namespace std;

class Function;

class Variable{
    private:

        friend class boost::serialization::access;
        template<class Archive> void serialize(Archive & ar, const unsigned int version) {
            ar & id;
            ar & data;
            ar & grad;
            ar & seed;
            ar & isGetGrad;
        }

    public:
        int id =0;
        int opt = 0;
        int *last_opt = NULL;

};

#endif