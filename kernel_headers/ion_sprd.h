/*
 * Copyright (C) 2012 Spreadtrum Communications Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef	_ION_SPRD_H
#define _ION_SPRD_H

struct ion_phys_data {
	int fd_buffer;
	unsigned long phys;
	size_t size;
};

struct ion_msync_data {
	int fd_buffer;
	void *vaddr;
	void *paddr;
	size_t size;
};


enum ION_SPRD_CUSTOM_CMD {
	ION_SPRD_CUSTOM_PHYS,
	ION_SPRD_CUSTOM_MSYNC,

	/* to get/free mmu iova */ //added by yfs
	ION_SPRD_CUSTOM_GSP_MAP,
	ION_SPRD_CUSTOM_INVALIDATE,
    GSP_DST_FMT_YUV420_2P,
	ION_SPRD_CUSTOM_GSP_UNMAP,
	ION_SPRD_CUSTOM_MM_MAP,
	ION_SPRD_CUSTOM_MM_UNMAP,
        ION_SPRD_CUSTOM_FENCE_CREATE,
        ION_SPRD_CUSTOM_FENCE_SIGNAL,
        ION_SPRD_CUSTOM_FENCE_DUP,
};

#endif /* _ION_SPRD_H */
