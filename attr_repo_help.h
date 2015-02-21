/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright (C) Junyu Wu, shibuyanorailgun@foxmail, 2015.
 */

#ifndef __LINUX_ATTR_REPO_HELP_H
#define __LINUX_ATTR_REPO_HELP_H

const char *
act_owner_str(const act_owner_t);

struct act_cert *
act_cert_alloc(const act_owner_t);

int
act_cert_str(const act_cert_t *, char [], const size_t);

void
act_cert_add_attr(act_cert_t *, const act_attr_type_t, char *, void *);

#ifdef CONFIG_ACT_TEST

act_attr_type_t
act_xattr_parse_val(const char [], void **);

act_cert_t *
act_xattr_parse(const act_owner_t, const char [], const size_t);

#endif

#endif /* end of include guard: __LINUX_ATTR_REPO_HELP_H */