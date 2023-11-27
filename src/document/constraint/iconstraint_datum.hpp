#pragma once
#include <string>
#include "util/datum_unit.hpp"

namespace dune3d {
class Document;
class IConstraintDatum {
public:
    virtual double get_datum() const = 0;
    virtual void set_datum(double d) = 0;
    virtual std::pair<double, double> get_datum_range() const = 0;
    virtual std::string get_datum_name() const = 0;
    virtual DatumUnit get_datum_unit() const = 0;
};
} // namespace dune3d
