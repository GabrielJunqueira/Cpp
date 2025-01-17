#ifndef GET_MAX_H
#define GET_MAX_H

#include <iostream>

/**
 * \brief This class represents a bit set, that is, a set represented as a map
 * of bits. The set has capacity to store 32 elements. For instance, the set
 * <||||----------------------------> is the binary representation of the number
 * 15, and it means that the elements 1, 2, 3 and 4 are in the set. Similarly,
 * the set <--||----------------------------> is the binary representation of
 * the number 12, and it means that the elements 3 and 4 are in the set.
 */
struct BitSet {
	BitSet(unsigned value) :
			_set(value) {
	}
	const unsigned _set;
	friend std::ostream& operator<<(std::ostream &os, const BitSet &i) {
		const int limit = sizeof(unsigned) * 8;
		os << '<';
		for (int aux = 0; aux < limit; aux++) {
			unsigned mask = 1 << aux;
			if (i._set & mask) { //AND bin�rio - se 'i' e mask forem 1
				os << "|";
			} else { //se qualquer um dos dois ('i' ou 'set') n�o for 1
				os << "-";
			}
		}
		os << '>';
		return os;
	}
	/**
	 * \brief compares two bit sets. A bit set b1 is greater than or equal to
	 * another bit set b2 if b1 contains all the bits in b2. For instance, the
	 * bit set represented by 15 is greater than the bit set represented by 12.
	 * However, the bit set 6 is not greater than the bit set 3, because the
	 * former does not contain the first element, which is in the latter.
	 * \return true if bit_set1 is greater than bit_set2
	 */
	// TODO: implement this operator.
	bool operator >=(const BitSet &obj) {
		const int limit = sizeof(unsigned) * 8;
		for (int aux = 0; aux < limit; aux++) {
			unsigned mask = 1 << aux;
			if (obj._set & mask && !(this->_set & mask)) {
				return false;
			}
		}
		return true;

	}

	bool operator >(const BitSet &obj) {
		const int limit = sizeof(unsigned) * 8;
		for (int aux = 0; aux < limit; aux++) {
			unsigned mask = 1 << aux;
			if (obj._set & mask && !(this->_set & mask)) {
				return false;
			}
		}
		return true;

	}
};

/**
 * \brief The representation of an integer interval. An integer interval has a
 * lower bound (a left side), and an upper bound (a right side). For instance,
 * the interval (2, 6) contains all the elements from 2 to 6, including these
 * two.
 */
struct Interval {
	Interval(int left, int right) :
			_l(left), _r(right) {
	}
	const int _l;
	const int _r;
	friend std::ostream& operator<<(std::ostream &os, const Interval &i) {
		os << '(' << i._l << ", " << i._r << ')';
		return os;
	}
	bool operator >=(const Interval &obj) {
		if (this->_l <= obj._l && this->_r >= obj._r)
			return true;
		else {
			return false;
		}
	}

	bool operator >(const Interval &obj) {
		if (this->_l <= obj._l && this->_r >= obj._r)
			return true;
		else {
			return false;
		}
	}
	/**
	 * \brief compares two intervals to see if the first is greater than or equal
	 * the second. An interval (a1, a2) is greater than or equal another interval
	 * (b1, b2) if a1 <= b1 and a2 >= b2.
	 * \return true if interval1 is greater than or equal interval2
	 */
	// TODO: implement this operator.OK
};

/**
 * \brief Returns the greatest of two elements, or a default, if neither of
 * them is the greatest.
 */
template<class T>
T GetMaxDefault(T a, T b, T dflt) {
	// TODO: implement this generic function.
	if (a >= b) {
		if (a > b)
			return a;
	}
	if (b >= a) {
		if (b > a)
			return b;
	}
	return dflt;

}
#endif
