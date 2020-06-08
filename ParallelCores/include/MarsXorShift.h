///////////////////////////////////////////////////////
// BC++ book
///////////////////////////////////////////////////////
// by Boguslaw Cyganek, Wiley, 2019
///////////////////////////////////////////////////////


// System headers in < >
#include <time.h>


// ------------------------------------
// A helper simple random generator

// Marsaglia's Xorshift random numbers
struct MarsXorShift
{
	// Start value - must be different from 0
	unsigned long r_a_n_d { (unsigned long) time( nullptr ) & 0xFF };

	// These values were found by G. Marsaglia
	// to generate quite good random values
	unsigned long GetNext( void )
	{
		r_a_n_d ^= r_a_n_d << 13;	// << is bit left shift
		r_a_n_d ^= r_a_n_d >> 17;	// ^= is XOR 
		r_a_n_d ^= r_a_n_d << 5;

		return r_a_n_d;
	}
};


