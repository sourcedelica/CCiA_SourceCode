#include "work_stealing_thread_pool.h"

// static
thread_local work_stealing_queue* thread_pool::local_work_queue = nullptr;
thread_local unsigned thread_pool::my_index;