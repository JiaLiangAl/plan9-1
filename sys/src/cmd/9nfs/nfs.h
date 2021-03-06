/* 
 * This file is part of the UCB release of Plan 9. It is subject to the license
 * terms in the LICENSE file found in the top-level directory of this
 * distribution and at http://akaros.cs.berkeley.edu/files/Plan9License. No
 * part of the UCB release of Plan 9, including this file, may be copied,
 * modified, propagated, or distributed except according to the terms contained
 * in the LICENSE file.
 */

/*
 *	Cf. /lib/rfc/rfc1094
 */

enum NFS_stat
{
	NFS_OK		= 0,
	NFSERR_PERM	= 1,
	NFSERR_NOENT	= 2,
	NFSERR_IO	= 5,
	NFSERR_NXIO	= 6,
	NFSERR_ACCES	= 13,
	NFSERR_EXIST	= 17,
	NFSERR_NODEV	= 19,
	NFSERR_NOTDIR	= 20,
	NFSERR_ISDIR	= 21,
	NFSERR_FBIG	= 27,
	NFSERR_NOSPC	= 28,
	NFSERR_ROFS	= 30,
	NFSERR_NAMETOOLONG	= 63,
	NFSERR_NOTEMPTY	= 66,
	NFSERR_DQUOT	= 69,
	NFSERR_STALE	= 70,
	NFSERR_WFLUSH	= 99
};

enum NFS_ftype
{
	NFNON	= 0,
	NFREG	= 1,
	NFDIR	= 2,
	NFBLK	= 3,
	NFCHR	= 4,
	NFLNK	= 5
};

enum NFS_mode
{
	S_IFMT	= 0170000,	/* mask */
	S_IFDIR	= 0040000,	/* directory */
	S_IFREG	= 0100000	/* regular */
};

#define	NOATTR	0xffffffff
