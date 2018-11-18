/*
Copyright (c) 2018 gchihiha

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.

*/
 

#pragma once
#include <string>
#include <stdexcept>
#include <type_traits>

#include <vector>
#include <array>
#include <initializer_list>

#include "spdlog/spdlog.h"
#include "current_function.hpp"
#include "assert.h"

#define DH ,
#define FH ;
#define ZK (
#define YK )

#define init_show \
auto console = spdlog::get("console");  \
auto file_log = spdlog::get("file_log");

#define show_debug(...) console->debug(__VA_ARGS__); file_log->debug(__VA_ARGS__);
#define show_info(...) console->info( __VA_ARGS__); file_log->info(__VA_ARGS__); 
#define show_err(...) console->error( __VA_ARGS__); file_log->error(__VA_ARGS__); 
#define show_wrn(...) console->warn(__VA_ARGS__); file_log->warn(__VA_ARGS__); 
#define critical_show(...) console->critical(__VA_ARGS__); file_log->critical(__VA_ARGS__); 

#define write_info(...) 
#define write_err(...)
#define write_wrn(...)
#define critical_write(...)

#define show_function_name show_info("{}",CURRENT_FUNCTION)

#define code_location \
( \
	CURRENT_FUNCTION  + \
	[]()->std::string \
	{ \
		std::string s(" : "); \
		s += __FILE__; s += " : ";\
		s += std::to_string(__LINE__); s +=" ��";\
		return s;\
	}()\
)

#define if_show(exp__, ...) \
if( exp__ ) {show_debug(__VA_ARGS__);} else { show_wrn(__VA_ARGS__ );}

#define expect_if(expect_if_exp__,expect_if_msg__)\
if(!(expect_if_exp__))\
{\
	std::string expect_if_s__; \
	expect_if_s__ += (expect_if_msg__); \
	expect_if_s__ += code_location();\
	throw std::runtime_error(expect_if_s__);\
}


#define catch_final(catch_final_a__,...) \
catch(std::runtime_error& e){\
__VA_ARGS__; \
show_err(#catch_final_a__ "{}", code_location());\
show_err("{}",e.what() );\
}

#define catch_relay(catch_relay_msg__ , ...) \
catch(std::runtime_error& e){ \
__VA_ARGS__; \
std::string catch_relay_s__(#catch_relay_msg__); catch_relay_s__ += "\n"; \
catch_relay_s__ += code_location(); catch_relay_s__ += "\n"; \
catch_relay_s__ += e.what( ); \
throw std::runtime_error(catch_relay_s__); \
}

#define check_exp(check_exp_exp__,check_exp_msg__)\
if (!(exp))\
{\
    show_wrn(msg);\
}


#if defined(__ANDROID__)
#   define LAKA_ANDROID
#elif defined(TARGET_OS_IPHONE)
#   define LAKA_IPHONE
#elif defined(__APPLE__)
#   define LAKA_APPLE
#elif defined(_POSIX_VERSION)
#   define LAKA_POSIX
#endif

//��κ�����QT qglobal.h �жϱ���Ŀ�껷���Ĳ���ϵͳ
#if defined(__DARWIN_X11__)
#  define LAKA_DARWIN
#elif defined(__APPLE__) && (defined(__GNUC__) || defined(__xlC__))
#  define LAKA_MACX
#elif defined(__MACOSX__)
#  define LAKA_MACX
#elif defined(macintosh)
#  define LAKA_MAC9
#elif defined(__CYGWIN__)
#  define LAKA_CYGWIN
#elif defined(MSDOS) || defined(_MSDOS)
#  define LAKA_MSDOS
#elif defined(__OS2__)
#  if defined(__EMX__)
#    define LAKA_OS2EMX
#  else
#    define LAKA_OS2
#  endif
#elif !defined(SAG_COM) && (defined(WIN64) || defined(_WIN64) || defined(__WIN64__))
#  define LAKA_WIN32
#  define LAKA_WIN64
#elif !defined(SAG_COM) && (defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__))
#  define LAKA_WIN32
#elif defined(__MWERKS__) && defined(__INTEL__)
#  define LAKA_WIN32
#elif defined(__sun) || defined(sun)
#  define LAKA_SOLARIS
#elif defined(hpux) || defined(__hpux)
#  define LAKA_HPUX
#elif defined(__ultrix) || defined(ultrix)
#  define LAKA_ULTRIX
#elif defined(sinix)
#  define LAKA_RELIANT
#elif defined(__linux__) || defined(__linux)
#  define LAKA_LINUX
#elif defined(__FreeBSD__) || defined(__DragonFly__)
#  define LAKA_FREEBSD
#  define LAKA_BSD4
#elif defined(__NetBSD__)
#  define LAKA_NETBSD
#  define LAKA_BSD4
#elif defined(__OpenBSD__)
#  define LAKA_OPENBSD
#  define LAKA_BSD4
#elif defined(__bsdi__)
#  define LAKA_BSDI
#  define LAKA_BSD4
#elif defined(__sgi)
#  define LAKA_IRIX
#elif defined(__osf__)
#  define LAKA_OSF
#elif defined(_AIX)
#  define LAKA_AIX
#elif defined(__Lynx__)
#  define LAKA_LYNX
#elif defined(__GNU_HURD__)
#  define LAKA_HURD
#elif defined(__DGUX__)
#  define LAKA_DGUX
#elif defined(__QNXNTO__)
#  define LAKA_QNX6
#elif defined(__QNX__)
#  define LAKA_QNX
#elif defined(_SEQUENT_)
#  define LAKA_DYNIX
#elif defined(_SCO_DS)                   /* SCO OpenServer 5 + GCC */
#  define LAKA_SCO
#elif defined(__USLC__)                  /* all SCO platforms + UDK or OUDK */
#  define LAKA_UNIXWARE
#  define LAKA_UNIXWARE7
#elif defined(__svr4__) && defined(i386) /* Open UNIX 8 + GCC */
#  define LAKA_UNIXWARE
#  define LAKA_UNIXWARE7
#elif defined(__MAKEDEPEND__)
#else
#  error "Qt has not been ported to this OS - talk to qt-bugs@trolltech.com"
#endif

#if defined(LAKA_WIN32) || defined(LAKA_WIN64)
#  define LAKA_WIN
#endif

#if defined(LAKA_MAC9) || defined(LAKA_MACX)
#  define LAKA_MAC
#endif

#if defined(LAKA_MAC9) || defined(LAKA_MSDOS) || defined(LAKA_OS2) || defined(LAKA_WIN)
#  undef LAKA_UNIX
#elif !defined(LAKA_UNIX)
#  define LAKA_UNIX
#endif

#if defined(LAKA_MACX)
#  ifdef MAC_OS_X_VERSION_MIN_REQUIRED
#    undef MAC_OS_X_VERSION_MIN_REQUIRED
#  endif
#  define MAC_OS_X_VERSION_MIN_REQUIRED MAC_OS_X_VERSION_10_2
#  include <AvailabilityMacros.h>
#  if !defined(MAC_OS_X_VERSION_10_3)
#     define MAC_OS_X_VERSION_10_3 MAC_OS_X_VERSION_10_2 + 1
#  endif
#  if !defined(MAC_OS_X_VERSION_10_4)
#       define MAC_OS_X_VERSION_10_4 MAC_OS_X_VERSION_10_3 + 1
#  endif
#  if (MAC_OS_X_VERSION_MAX_ALLOWED > MAC_OS_X_VERSION_10_4)
#    error "This version of Mac OS X is unsupported"
#  endif
#endif

typedef HMODULE Module_handle;

template <typename	Execute_function>
Module_handle load_moudule(const char* module_name_, Execute_function execute_function_)
{
    init_show;
    show_debug("����{}ģ��", module_name_);

    Module_handle moudle_handle = LoadLibrary(module_name_);
    if (moudle_handle == NULL)
    {
        show_err("����{}ʧ��", module_name_);
        execute_function_();
    }
    else
    {
        show_debug("���سɹ�:{}", size_t(moudle_handle));
    }
    return moudle_handle;
}

template <typename Execute_function>
void* load_module_function(Module_handle module_handle_, const char* function_name_, Execute_function execute_function_)
{
    init_show;
    show_debug("��ģ��:{0} ���غ���:{1}", (size_t)module_handle_, function_name_);
    auto fp = (void*)GetProcAddress(module_handle_, (LPCSTR)function_name_);
    if (fp != NULL)
    {
        show_debug("�ɹ���ú�����ַ:{}", (size_t)fp);
    }
    else
    {
        show_err("��ȡ������ַʧ��");
    }
    return fp;
}


Module_handle load_moudule(const char* module_name_);

Module_handle load_module_must(const char* module_name_);

void* load_module_function(Module_handle module_handle_, const char* function_name_);

void* load_module_function_must(Module_handle module_handle_, const char* function_name_);






/*
https://zh.cppreference.com/w/cpp/utility/initializer_list
(C++14 ǰ)
�ײ����鲻��֤��ԭʼ initializer_list ����������ڽ�����������ڡ�
std::initializer_list �Ĵ洢��δָ���ģ������������Զ�����ʱ��ֻ̬���ڴ棬�������ϣ���
(C++14 ��)
�ײ������� const T[N] ���͵���ʱ���飬
����ÿ��Ԫ�ض���ԭʼ��ʼ�����б�Ķ�ӦԪ�ظ��Ƴ�ʼ��������խ��ת���Ƿ�����
�ײ���������������κ�������ʱ������ͬ��
���˴������ʼ�� initializer_list ������ӳ�����������ڣ�
ǡ������õ���ʱ���������⣬������ڳ�ʼ���Ǿ�̬���Ա�����ײ�������Է�����ֻ���ڴ档

��ζ��C++14ǰ δ����������洢������Ϊ�����ں���ִ�����ڼ�������?

ѧϰ�˹ٷ�Vk-Hpp�е�ArrayProxy (�״�
������Ϊapi����������ṩ���������ʹ�� ��ʡ��������غ���
����Ϊһ���ԵĶ��� �ڷ�װ�������ڲ���һ��
*/
//��������ԭ��,������ֻ�ʺ�֧��C++14�������Եı�����.
template<typename T>
class Array_value {
private:
    const uint32_t value_count;
    const T* first_value_ptr;
public:
    const T* first_value()
    {
        return first_value_ptr;
    }
    const T* last_value()
    {
        return first_value_ptr + value_count - 1;
    }
    const T* data()
    {
        return value_count > 0 ? first_value_ptr : nullptr;
    }
    uint32_t size()
    {
        return value_count;
    }

    Array_value()
        :value_count(0)
        , first_value_ptr(nullptr)
    {}

    Array_value(T* only_value_ptr_)
        : value_count(1)
        , first_value_ptr(only_value_ptr_)
    {}

    Array_value(uint32_t count_, T* first_value_ptr_)
        : value_count(count_)
        , first_value_ptr(first_value_ptr_)
    {}

    Array_value(std::initializer_list<T> data)
        : value_count(static_cast<uint32_t>(data.size()))
        , first_value_ptr(data.begin())
    {}

    Array_value(std::vector<T>& vector_)
        :value_count(static_cast<uint32_t>(vector_.size()))
        , first_value_ptr(vector_.data())
    {}

    template<size_t N>
    Array_value(std::array<T, N>& array_)
        : value_count(static_cast<uint32_t>(array_.size()))
        , first_value_ptr(array_.data())
    {}

    /*operator std::vector<T>&& ()
    {
        std::vector<T> v(value_count);
        memcpy(&v[0], first_value_ptr, sizeof(T)*value_count);
    }*/

};



