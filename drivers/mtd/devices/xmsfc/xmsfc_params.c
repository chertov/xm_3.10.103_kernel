#include <linux/mtd/mtd.h>                  
#include "xmsfc_v2.h"

const struct xmsfc_params xmsfc_params_table[] = { 
	{"W25Q64CV", 	0xef4017, _8M,  _64K,  	0xD8, 0x02, 0x03, 0x32, 0x6B, 0},  
	{"MX25L6405D", 	0xc22017, _8M,  _64K,  	0xD8, 0x02, 0x03, 0x00, 0x00, 0},  
	{"W25Q128BV",	0xef4018, _16M,	_64K,  	0xD8, 0x02, 0x03, 0x00, 0x00, 0}, 
	{"MX25L12835F",	0xc22018, _16M,	_64K,  	0xD8, 0x02, 0x03, 0x00, 0x00, 0},  
	{"EN25QH64A", 	0x1c7017, _8M,  _64K,  	0xD8, 0x02, 0x03, 0x32, 0x6B, 0},  
	{"XM25Q64AHIG", 0x207017, _8M,  _64K,  	0xD8, 0x02, 0x03, 0x32, 0x6B, 0},  
};
const struct xmsfc_params xmsfc_params_default = { 
	"DEFAULT", 0x000000, _8M,  _64K,  0xD8,  0x02, 0x03, 0x00, 0x00, 0 
};
