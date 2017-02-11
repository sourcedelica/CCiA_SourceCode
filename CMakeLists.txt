cmake_minimum_required(VERSION 3.5)
project(CCiA)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(THREAD_POOL_QUICK_SORT_SOURCES
        function_wrapper.h
        join_threads.h
        parallel_quick_sort.h
        thread_pool_quick_sort.cpp
        threadsafe_queue.h
        work_stealing_queue.h
        work_stealing_thread_pool.cpp)

add_executable(thread_pool_quick_sort ${THREAD_POOL_QUICK_SORT_SOURCES})