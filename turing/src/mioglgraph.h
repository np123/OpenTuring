#ifndef _MIOGLGRAPH_H_
#define _MIOGLGRAPH_H_

/*******************/
/* System includes */
/*******************/

/******************/
/* Other includes */
/******************/
#include "miotypes.h"

/**********/
/* Macros */
/**********/

/*************/
/* Constants */
/*************/

/*********/
/* Types */
/*********/

/**********************/
/* External variables */
/**********************/

/***********************/
/* External procedures */
/***********************/
/*
extern void	MIOGLGraph_NewContext (OOTint width,OOTint height);
extern void	MIOGLGraph_FreeContext();
extern void	MIOGLGraph_CopyToWin (OOTint x,OOTint y);
*/
extern void	MIOGLGraph_InitRun ();
extern BOOL	MIOGLGraph_NewWin (OOTint width,OOTint height);
extern void	MIOGLGraph_CloseWin ();
extern BOOL MIOGLGraph_Status();
extern void	MIOGLGraph_Update ();
extern void	MIOGLGraph_Cls ();

extern void	MIOGLGraph_SetLight (OOTint lighting);

// matrix stack
extern void	MIOGLGraph_PushMatrix ();
extern void	MIOGLGraph_PopMatrix ();
extern void MIOGLGraph_ClearMatrix ();
// matrix manipulation
extern void	MIOGLGraph_Translate (OOTreal x,OOTreal y,OOTreal z);
extern void	MIOGLGraph_Rotate (OOTreal angle,OOTreal x,OOTreal y,OOTreal z);
extern void	MIOGLGraph_Scale (OOTreal x,OOTreal y,OOTreal z);

extern void	MIOGLGraph_Line (
								OOTreal x1,OOTreal y1,OOTreal z1, 
								OOTreal x2,OOTreal y2,OOTreal z2,
								OOTint r, OOTint g, OOTint b);
extern void	MIOGLGraph_FillTriangle (
								OOTreal x1,OOTreal y1,OOTreal z1, 
								OOTreal x2,OOTreal y2,OOTreal z2,
								OOTreal x3,OOTreal y3,OOTreal z3,
								OOTint r, OOTint g, OOTint b);
extern void	MIOGLGraph_Triangle (
								OOTreal x1,OOTreal y1,OOTreal z1, 
								OOTreal x2,OOTreal y2,OOTreal z2,
								OOTreal x3,OOTreal y3,OOTreal z3,
								OOTint r, OOTint g, OOTint b);

extern void MIOGLGraph_MouseWhere(OOTint *pmX, OOTint *pmY);
extern BOOL MIOGLGraph_ButtonWait(OOTint *pmX, OOTint *pmY, OOTint *btn);

#endif // #ifndef _MIOGLGRAPH_H_
