#define NGX_CONFIGURE ""

/* auto/cc/conf */
#define NGX_HAVE_GCC_ATOMIC 1
#define NGX_HAVE_C99_VARIADIC_MACROS 1
#define NGX_HAVE_GCC_VARIADIC_MACROS 1
#define NGX_HAVE_GCC_BSWAP64 1

/* auto/os/linux */
#define NGX_HAVE_EPOLL 1
#define NGX_HAVE_CLEAR_EVENT 1
#define NGX_HAVE_EPOLLRDHUP 1
#define NGX_HAVE_EPOLLEXCLUSIVE 1
#define NGX_HAVE_O_PATH 1
#define NGX_HAVE_SENDFILE 1
#define NGX_HAVE_SENDFILE64 1
#define NGX_HAVE_PR_SET_DUMPABLE 1
#define NGX_HAVE_PR_SET_KEEPCAPS 1
#define NGX_HAVE_CAPABILITIES 1
#define NGX_HAVE_GNU_CRYPT_R 1

/* auto/os/conf */
#define NGX_HAVE_NONALIGNED 1
#define NGX_CPU_CACHE_LINE 64

/* auto/unix */
#define NGX_HAVE_POSIX_FADVISE 1
#define NGX_HAVE_O_DIRECT 1
#define NGX_HAVE_ALIGNED_DIRECTIO 1
#define NGX_HAVE_STATFS 1
#define NGX_HAVE_STATVFS 1
#define NGX_HAVE_DLOPEN 1
#define NGX_HAVE_SCHED_YIELD 1
#define NGX_HAVE_SCHED_SETAFFINITY 1
#define NGX_HAVE_REUSEPORT 1
#define NGX_HAVE_TRANSPARENT_PROXY 1
#define NGX_HAVE_IP_BIND_ADDRESS_NO_PORT 1
#define NGX_HAVE_IP_PKTINFO 1
#define NGX_HAVE_IPV6_RECVPKTINFO 1
#define NGX_HAVE_DEFERRED_ACCEPT 1
#define NGX_HAVE_KEEPALIVE_TUNABLE 1
#define NGX_HAVE_TCP_FASTOPEN 1
#define NGX_HAVE_TCP_INFO 1
#define NGX_HAVE_ACCEPT4 1
#define NGX_HAVE_EVENTFD 1
#define NGX_HAVE_SYS_EVENTFD_H 1
#define NGX_HAVE_UNIX_DOMAIN 1
#define NGX_PTR_SIZE 8
#define NGX_SIG_ATOMIC_T_SIZE 4
#define NGX_HAVE_LITTLE_ENDIAN 1
#define NGX_MAX_SIZE_T_VALUE 9223372036854775807LL
#define NGX_SIZE_T_LEN (sizeof("-9223372036854775808") - 1)
#define NGX_MAX_OFF_T_VALUE 9223372036854775807LL
#define NGX_OFF_T_LEN (sizeof("-9223372036854775808") - 1)
#define NGX_TIME_T_SIZE 8
#define NGX_TIME_T_LEN (sizeof("-9223372036854775808") - 1)
#define NGX_MAX_TIME_T_VALUE 9223372036854775807LL
#define NGX_HAVE_INET6 1
#define NGX_HAVE_PREAD 1
#define NGX_HAVE_PWRITE 1
#define NGX_HAVE_PWRITEV 1
#define NGX_SYS_NERR 1000
#define NGX_HAVE_LOCALTIME_R 1
#define NGX_HAVE_CLOCK_MONOTONIC 1
#define NGX_HAVE_POSIX_MEMALIGN 1
#define NGX_HAVE_MEMALIGN 1
#define NGX_HAVE_MAP_ANON 1
#define NGX_HAVE_MAP_DEVZERO 1
#define NGX_HAVE_SYSVSHM 1
#define NGX_HAVE_POSIX_SEM 1
#define NGX_HAVE_MSGHDR_MSG_CONTROL 1
#define NGX_HAVE_FIONBIO 1
#define NGX_HAVE_FIONREAD 1
#define NGX_HAVE_GMTOFF 1
#define NGX_HAVE_D_TYPE 1
#define NGX_HAVE_SC_NPROCESSORS_ONLN 1
#define NGX_HAVE_OPENAT 1
#define NGX_HAVE_GETADDRINFO 1

/* auto/threads */
#define NGX_THREADS 1

/* auto/modules */
#define NGX_HTTP_CACHE 1
#define NGX_HTTP_GZIP 1
#define NGX_CRYPT 1
#define NGX_HTTP_SSL 1
#define NGX_PCRE 1
#define NGX_HAVE_PCRE_JIT 1
#define NGX_OPENSSL 1
#define NGX_SSL 1
#define NGX_HAVE_OPENSSL_MD5_H 1
#define NGX_OPENSSL_MD5 1
#define NGX_HAVE_MD5 1
#define NGX_HAVE_OPENSSL_SHA1_H 1
#define NGX_HAVE_SHA1 1
#define NGX_ZLIB 1

#define NGX_PREFIX "/run/nginx/"
#define NGX_CONF_PREFIX "/etc/nginx/"
#define NGX_SBIN_PATH "/bin/nginx"
#define NGX_CONF_PATH "/etc/nginx/nginx.conf"
#define NGX_PID_PATH "nginx.pid"
#define NGX_LOCK_PATH "nginx.lock"
#define NGX_ERROR_LOG_PATH "/var/log/nginx/error.log"
#define NGX_HTTP_LOG_PATH "/var/log/nginx/access.log"
#define NGX_HTTP_CLIENT_TEMP_PATH "client_body_temp"
#define NGX_HTTP_PROXY_TEMP_PATH "proxy_temp"
#define NGX_HTTP_FASTCGI_TEMP_PATH "fastcgi_temp"
#define NGX_HTTP_UWSGI_TEMP_PATH "uwsgi_temp"
#define NGX_HTTP_SCGI_TEMP_PATH "scgi_temp"
#define NGX_SUPPRESS_WARN 1
#define NGX_SMP 1
#define NGX_USER "nginx"
#define NGX_GROUP "nginx"
