#include "regamemaster.h"

static cell AMX_NATIVE_CALL amx_product(AMX *amx, cell *params)
{
	int i = 0;
	int sum = 1;
	cell *addr = NULL;
	int numParams = *params/sizeof(cell);
	for (i=1; i<=numParams; i++)
	{
		addr = MF_GetAmxAddr(amx, params[i]);
		sum *= (int)(*addr);
	}
	return sum;
}