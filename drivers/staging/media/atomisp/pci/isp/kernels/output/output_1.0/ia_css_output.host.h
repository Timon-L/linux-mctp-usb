/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Support for Intel Camera Imaging ISP subsystem.
 * Copyright (c) 2015, Intel Corporation.
 */

#ifndef __IA_CSS_OUTPUT_HOST_H
#define __IA_CSS_OUTPUT_HOST_H

#include "ia_css_frame_public.h"
#include "ia_css_binary.h"

#include "ia_css_output_types.h"
#include "ia_css_output_param.h"

extern const struct ia_css_output_config default_output_config;

void
ia_css_output_encode(
    struct sh_css_isp_output_params *to,
    const struct ia_css_output_config *from,
    unsigned int size);

int ia_css_output_config(struct sh_css_isp_output_isp_config      *to,
			 const struct ia_css_output_configuration *from,
			 unsigned int size);

int ia_css_output0_config(struct sh_css_isp_output_isp_config       *to,
			  const struct ia_css_output0_configuration *from,
			  unsigned int size);

int ia_css_output1_config(struct sh_css_isp_output_isp_config       *to,
			  const struct ia_css_output1_configuration *from,
			  unsigned int size);

int ia_css_output_configure(const struct ia_css_binary     *binary,
			    const struct ia_css_frame_info *from);

int ia_css_output0_configure(const struct ia_css_binary     *binary,
			     const struct ia_css_frame_info *from);

int ia_css_output1_configure(const struct ia_css_binary     *binary,
			     const struct ia_css_frame_info *from);

void
ia_css_output_dump(
    const struct sh_css_isp_output_params *output,
    unsigned int level);

void
ia_css_output_debug_dtrace(
    const struct ia_css_output_config *config,
    unsigned int level);

#endif /* __IA_CSS_OUTPUT_HOST_H */
