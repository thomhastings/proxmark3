//-----------------------------------------------------------------------------
// Copyright (C) 2010 iZsh <izsh at fail0verflow.com>
//
// This code is licensed to you under the terms of the GNU GPL, version 2 or,
// at your option, any later version. See the LICENSE.txt file for the text of
// the license.
//-----------------------------------------------------------------------------
// Graph utilities
//-----------------------------------------------------------------------------

#ifndef GRAPH_H__
#define GRAPH_H__
#include <stdint.h>

void AppendGraph(int redraw, int clock, int bit);
int ClearGraph(int redraw);
//int DetectClock(int peak);
size_t getFromGraphBuf(uint8_t *buff);
int GetClock(const char *str, int peak, int verbose);
int GetNRZpskClock(const char *str, int peak, int verbose);
void setGraphBuf(uint8_t *buff, size_t size);

bool HasGraphData();
void DetectHighLowInGraph(int *high, int *low, bool addFuzz); 

#define MAX_GRAPH_TRACE_LEN (1024*128)
extern int GraphBuffer[MAX_GRAPH_TRACE_LEN];
extern int GraphTraceLen;
#endif
