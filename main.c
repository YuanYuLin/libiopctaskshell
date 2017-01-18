#include <stdio.h>

#include "iopcdefine.h"
#include "iopcops_misc.h"

uint8_t* get_name_shell()
{
    return "SHELL_TASK";
}

uint8_t* get_help_shell()
{
    return "this is for debug";
}

void* task_handler_shell(void* ptr)
{
    GET_INSTANCE(ops_misc)->execute_cmd("/bin/busybox ash", "/var/log/iopc_ash.log");
}


struct task_desc_t task_descs[] = {
    {"get_name_shell", "get_help_shell", "task_handler_shell"},
    {"", "", ""},
};
