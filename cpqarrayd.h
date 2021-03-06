/*
   CpqArray Deamon, a program to monitor and remotely configure a 
   SmartArray controller.
   Copyright (C) 1999-2003  Hugo Trippaers

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/*
   $Header$
 */

struct opts 
{
  char debug, verbose, syslog, fork;
  char *traphosts[10];
  int nr_traphosts;
};

struct slog_disk
{
  int status;
  float pvalue;
};

#define MAX_CTRLS 16

#define CTRLTYPE_IDA 1
#define CTRLTYPE_CCISS 2

struct controller 
{
  char *ctrl_devicename;
  char *devicefile;
  unsigned int ctrl_type;
  int num_logd_found;
  struct slog_disk log_disk[16];
};

extern const char *statusstr[];
extern const char *controllers[];
extern int ctrls_found_num;
extern struct controller ctrls_found[MAX_CTRLS];
extern unsigned int myip;









