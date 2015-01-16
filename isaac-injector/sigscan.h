#pragma once
#include <Windows.h>
class CSigScan {
private:
	/* Private Variables */
	/* Base Address of the server module in memory */
	//static unsigned char *base_addr;
	/* The length to the module's ending address */
	static size_t base_len;

	/* The signature to scan for */
	unsigned char *sig_str;
	/* A mask to ignore certain bytes in the signature such as addresses
	The mask should be as long as all the bytes in the signature string
	Use '?' to ignore a byte and 'x' to check it
	Example: "xxx????xx" - The first 3 bytes are checked, then the next 4 are
	ignored, then the last 2 are checked */
	char *sig_mask;
	/* The length of sig_str and sig_mask (not including a terminating null for sig_mask) */
	size_t sig_len;

	/* Private Functions */
	void* FindSignature(void);
	size_t GetBaseLen();

public:
	/* Public Variables */

	/* If the scan was successful or not */
	char is_set;
	/* Starting address of the found function */
	void *sig_addr;

	/* Public Functions */
	CSigScan(void) : sig_str(NULL), sig_mask(NULL), sig_len(0), sig_addr(NULL) {}
	~CSigScan(void);

	//static bool GetDllMemInfo(void);
	void Init(unsigned char *sig, char *mask, size_t len);
};

/* Sigscanned member functions are casted to member function pointers of this class
and called with member function pointer syntax */
class EmptyClass { };