#define STDOUT_FILENO 1
#define SIG_DFL -1
#define SIGINT 2
#define SIGTERM 15

typedef void (*__sighandler_t)(int);
typedef __sighandler_t _sig_func_ptr;
#define SIG_IGN	((__sighandler_t)1)	/* ignore signal */

#define SIG_BLOCK 0
#define SIG_SETMASK        2	/* for setting the signal mask */
#define	EINTR		 4	/* Interrupted system call */
#define F_GETFL		3	/* Get file status flags.  */
#define O_NONBLOCK	  04000
#define F_SETFL		4	/* Set file status flags.  */
#define	EAGAIN		11	/* Try again */
#define	EWOULDBLOCK	EAGAIN	/* Operation would block */
#define SIGHUP		 1
#define SIGQUIT		 3
#define SIGALRM		14
#define SIGUSR1		10
#define SIGUSR2		12
#define SIGPIPE		13
#define O_CREAT		00000100	/* not fcntl */
#define O_RDWR		00000002
#define O_APPEND	00002000
#define S_IRUSR 00400
#define S_IWUSR 00200
#define S_IRGRP 00040
#define S_IWGRP 00020
#define S_IROTH 00004
#define O_NONBLOCK	00004000
#define O_NOCTTY	00000400	/* not fcntl */
#define	STDERR_FILENO	2	/* Standard error output.  */
#define	STDIN_FILENO	0	/* Standard input.  */
#define	LOCK_UN	8	/* Unlock.  */
#define	LOCK_EX	2 	/* Exclusive lock.  */
#define	LOCK_NB	4	/* Don't block when locking.  */
#define CRTSCTS 020000000000 /* Flow control.  */
#define IXANY	0004000  /* Enable any character to restart output.  */
#define _POSIX_PATH_MAX 256
