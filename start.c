#include "general.h"
#include "main.h"
#include "text.h"

/**
 * start - Handle the mode
 * Description: Mode can be INTERACTIVE or NON_INTERACTIVE
 *
 * @info: Structure of info about the shell
 **/

void start(general_t *info)
{
	start_prompt(info);
}
