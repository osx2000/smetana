#line 1 "graphviz-2.38.0\\lib\\common\\htmlparse.c" 1
/* A Bison parser, made by GNU Bison 2.6.1.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with html or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */


/* Bison version.  */


/* Skeleton name.  */


/* Pure parsers.  */


/* Push parsers.  */


/* Pull parsers.  */





/* Copy the first part of user declarations.  */
/* Line 336 of yacc.c  */



#line 1 "graphviz-2.38.0\\lib\\common\\render.h" 1


/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/









#line 1 "graphviz-2.38.0\\lib\\common\\render.h" 1


















#line 1 "graphviz-2.38.0\\lib\\common\\types.h" 1
/* lib/common/types.h.  Generated from types.h.in by configure.  */
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/




/* Define if you want CGRAPH */


#line 1 "graphviz-2.38.0\\lib\\common\\types.h" 1
#line 1 "graphviz-2.38.0\\lib\\common\\types.h" 1
#line 1 "graphviz-2.38.0\\lib\\common\\types.h" 1

typedef unsigned char boolean;












#line 1 "graphviz-2.38.0\\lib\\common\\geom.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/

/* geometric types and macros (e.g. points and boxes) with application to, but
 * no specific dependance on graphs */





#line 1 "graphviz-2.38.0\\lib\\common\\arith.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/

/* geometric functions (e.g. on points and boxes) with application to, but
 * no specific dependance on graphs */




/* for sincos */




#line 1 "graphviz-2.38.0\\lib\\common\\arith.h" 1



#line 1 "graphviz-2.38.0\\lib\\common\\arith.h" 1

































































    











#line 20 "graphviz-2.38.0\\lib\\common\\geom.h" 2





    
typedef struct { int x, y; } point;

typedef struct pointf_s { double x, y; } pointf;

/* tell pathplan/pathgeom.h */


typedef struct { point LL, UR; } box;

typedef struct { pointf LL, UR; } boxf;




























































#line 28 "graphviz-2.38.0\\lib\\common\\types.h" 2
#line 1 "graphviz-2.38.0\\lib\\gvc\\gvcext.h" 1

/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/

/* Common header used by both clients and plugins */








/*
 * Define an apis array of name strings using an enumerated api_t as index.
 * The enumerated type is defined here.  The apis array is
 * inititialized in gvplugin.c by redefining ELEM and reinvoking APIS.
 */


/*
 * Define api_t using names based on the plugin names with API_ prefixed.
 */

    typedef enum { API_render, API_layout, API_textlayout, API_device, API_loadimage, _DUMMY_ELEM_=0 } api_t; /* API_render, API_layout, ... */
    			/* Stupid but true: The sole purpose of "_DUMMY_ELEM_=0"
			 * is to avoid a "," after the last element of the enum
			 * because some compilers when using "-pedantic"
			 * generate an error for about the dangling ","
			 * but only if this header is used from a .cpp file!
			 * Setting it to 0 makes sure that the enumeration
			 * does not define an extra value.  (It does however
			 * define _DUMMY_ELEM_ as an enumeration symbol,
			 * but its value duplicates that of the first
			 * symbol in the enumeration - in this case "render".)
			 */

    			/* One could wonder why trailing "," in:
			 * 	int nums[]={1,2,3,};
			 * is OK, but in:
			 * 	typedef enum {a,b,c,} abc_t; 
			 * is not!!!
			 */


    typedef struct GVJ_s GVJ_t;
    typedef struct GVG_s GVG_t;
    typedef struct GVC_s GVC_t;

    typedef struct {
	const char *name;
	void* address;
    } lt_symlist_t;

    typedef struct gvplugin_available_s gvplugin_available_t;

/*visual studio*/








/*end visual studio*/




	


	extern lt_symlist_t lt_preloaded_symbols[];












#line 29 "graphviz-2.38.0\\lib\\common\\types.h" 2
#line 1 "graphviz-2.38.0\\lib\\pathplan\\pathgeom.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/










    typedef struct pointf_s Ppoint_t;
    typedef struct pointf_s Pvector_t;

    
	
    

    
    


    typedef struct Ppoly_t {
	Ppoint_t *ps;
	int pn;
    } Ppoly_t;

    typedef Ppoly_t Ppolyline_t;

    typedef struct Pedge_t {
	Ppoint_t a, b;
    } Pedge_t;

/* opaque state handle for visibility graph operations */
    typedef struct vconfig_s vconfig_t;

    void freePath(Ppolyline_t* p);




#line 30 "graphviz-2.38.0\\lib\\common\\types.h" 2
#line 1 "graphviz-2.38.0\\lib\\common\\textspan.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/








/* Bold, Italic, Underline, Sup, Sub, Strike */
/* Stored in textfont_t.flags, which is 7 bits, so full */
/* Probably should be moved to textspan_t */








    typedef struct _PostscriptAlias {
        char* name;
        char* family;
        char* weight;
        char* stretch;
        char* style;
        int xfig_code;
	char* svg_font_family;
	char* svg_font_weight;
	char* svg_font_style;
    } PostscriptAlias;

    /* font information
     * If name or color is NULL, or size < 0, that attribute
     * is unspecified. 
     */
    typedef struct {
	char*  name;
	char*  color;
	PostscriptAlias *postscript_alias;
	double size;
	unsigned int flags:7;  /* HTML_UL, HTML_IF, HTML_BF, etc. */
	unsigned int cnt:(sizeof(unsigned int) * 8 - 7);   /* reference count */
    } textfont_t;

    /* atomic unit of text emitted using a single htmlfont_t */
    typedef struct {
	char *str;      /* stored in utf-8 */
	textfont_t *font;
	void *layout;
	void (*free_layout) (void *layout);   /* FIXME - this is ugly */
	double yoffset_layout, yoffset_centerline;
 	pointf size;
	char just;	/* 'l' 'n' 'r' */ /* FIXME */
    } textspan_t;





#line 31 "graphviz-2.38.0\\lib\\common\\types.h" 2
#line 1 "graphviz-2.38.0\\lib\\cgraph\\cgraph.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/




#line 1 "graphviz-2.38.0\\lib\\cdt\\cdt.h" 1



/*	Public interface for the dictionary library
**
**      Written by Kiem-Phong Vo
*/











#line 1 "graphviz-2.38.0\\lib\\cdt\\cdt.h" 1
#line 1 "graphviz-2.38.0\\lib\\cdt\\cdt.h" 1






















typedef struct _dtlink_s	Dtlink_t;
typedef struct _dthold_s	Dthold_t;
typedef struct _dtdisc_s	Dtdisc_t;
typedef struct _dtmethod_s	Dtmethod_t;
typedef struct _dtdata_s	Dtdata_t;
typedef struct _dt_s		Dt_t;
typedef struct _dt_s		Dict_t;	/* for libdict compatibility */
typedef struct _dtstat_s	Dtstat_t;
typedef void*			(*Dtmemory_f)(Dt_t*,void*,size_t,Dtdisc_t*);
typedef void*			(*Dtsearch_f)(Dt_t*,void*,int);
typedef void* 		(*Dtmake_f)(Dt_t*,void*,Dtdisc_t*);
typedef void 			(*Dtfree_f)(Dt_t*,void*,Dtdisc_t*);
typedef int			(*Dtcompar_f)(Dt_t*,void*,void*,Dtdisc_t*);
typedef unsigned int		(*Dthash_f)(Dt_t*,void*,Dtdisc_t*);
typedef int			(*Dtevent_f)(Dt_t*,int,void*,Dtdisc_t*);

struct _dtlink_s
{	Dtlink_t*	right;	/* right child		*/
	union
	{ unsigned int	_hash;	/* hash value		*/
	  Dtlink_t*	_left;	/* left child		*/
	} hl;
};

/* private structure to hold an object */
struct _dthold_s
{	Dtlink_t	hdr;	/* header		*/
	void*		obj;	/* user object		*/
};

/* method to manipulate dictionary structure */
struct _dtmethod_s 
{	Dtsearch_f	searchf; /* search function	*/
	int		type;	/* type of operation	*/
};

/* stuff that may be in shared memory */
struct _dtdata_s
{	int		type;	/* type of dictionary			*/
	Dtlink_t*	here;	/* finger to last search element	*/
	union
	{ Dtlink_t**	_htab;	/* hash table				*/
	  Dtlink_t*	_head;	/* linked list				*/
	} hh;
	int		ntab;	/* number of hash slots			*/
	int		size;	/* number of objects			*/
	int		loop;	/* number of nested loops		*/
	int		minp;	/* min path before splay, always even	*/
				/* for hash dt, > 0: fixed table size 	*/
};

/* structure to hold methods that manipulate an object */
struct _dtdisc_s
{	int		key;	/* where the key begins in an object	*/
	int		size;	/* key size and type			*/
	int		link;	/* offset to Dtlink_t field		*/
	Dtmake_f	makef;	/* object constructor			*/
	Dtfree_f	freef;	/* object destructor			*/
	Dtcompar_f	comparf;/* to compare two objects		*/
	Dthash_f	hashf;	/* to compute hash value of an object	*/
	Dtmemory_f	memoryf;/* to allocate/free memory		*/
	Dtevent_f	eventf;	/* to process events			*/
};













/* the dictionary structure itself */
struct _dt_s
{	Dtsearch_f	searchf;/* search function			*/
	Dtdisc_t*	disc;	/* method to manipulate objs		*/
	Dtdata_t*	data;	/* sharable data			*/
	Dtmemory_f	memoryf;/* function to alloc/free memory	*/
	Dtmethod_t*	meth;	/* dictionary method			*/
	int		type;	/* type information			*/
	int		nview;	/* number of parent view dictionaries	*/
	Dt_t*		view;	/* next on viewpath			*/
	Dt_t*		walk;	/* dictionary being walked		*/
	void*		user;	/* for user's usage			*/
};

/* structure to get status of a dictionary */
struct _dtstat_s
{	int	dt_meth;	/* method type				*/
	int	dt_size;	/* number of elements			*/
	int	dt_n;		/* number of chains or levels		*/
	int	dt_max;		/* max size of a chain or a level	*/
	int*	dt_count;	/* counts of chains or levels by size	*/
};

/* flag set if the last search operation actually found the object */


/* supported storage methods */










/* asserts to dtdisc() */



/* types of search */















/* events */








1	/* public data */







extern Dtmethod_t* 	Dtset;
extern Dtmethod_t* 	Dtbag;
extern Dtmethod_t* 	Dtoset;
extern Dtmethod_t* 	Dtobag;
extern Dtmethod_t*	Dtlist;
extern Dtmethod_t*	Dtstack;
extern Dtmethod_t*	Dtqueue;
extern Dtmethod_t*	Dtdeque;

/* compatibility stuff; will go away */

extern Dtmethod_t*	Dtorder;
extern Dtmethod_t*	Dttree;
extern Dtmethod_t*	Dthash;
extern Dtmethod_t	_Dttree;
extern Dtmethod_t	_Dthash;
extern Dtmethod_t	_Dtlist;
extern Dtmethod_t	_Dtqueue;
extern Dtmethod_t	_Dtstack;





1	/* public functions */




extern Dt_t*		dtopen (Dtdisc_t*, Dtmethod_t*);
extern int		dtclose (Dt_t*);
extern Dt_t*		dtview (Dt_t*, Dt_t*);
extern Dtdisc_t*	dtdisc (Dt_t* dt, Dtdisc_t*, int);
extern Dtmethod_t*	dtmethod (Dt_t*, Dtmethod_t*);

extern Dtlink_t*	dtflatten (Dt_t*);
extern Dtlink_t*	dtextract (Dt_t*);
extern int		dtrestore (Dt_t*, Dtlink_t*);

extern int		dttreeset (Dt_t*, int, int);

extern int		dtwalk (Dt_t*, int(*)(Dt_t*,void*,void*), void*);

extern void*		dtrenew (Dt_t*, void*);

extern int		dtsize (Dt_t*);
extern int		dtstat (Dt_t*, Dtstat_t*, int);
extern unsigned int	dtstrhash (unsigned int, void*, int);











/* internal functions for translating among holder, object and key */












/* special search function for tree structure only */

























































#line 17 "graphviz-2.38.0\\lib\\cgraph\\cgraph.h" 2
























/* forward struct type declarations */
typedef struct Agtag_s Agtag_t;
typedef struct Agobj_s Agobj_t;	/* generic object header */
typedef struct Agraph_s Agraph_t;	/* graph, subgraph (or hyperedge) */
typedef struct Agnode_s Agnode_t;	/* node (atom) */
typedef struct Agedge_s Agedge_t;	/* node pair */
typedef struct Agdesc_s Agdesc_t;	/* graph descriptor */
typedef struct Agmemdisc_s Agmemdisc_t;	/* memory allocator */
typedef struct Agiddisc_s Agiddisc_t;	/* object ID allocator */
typedef struct Agiodisc_s Agiodisc_t;	/* IO services */
typedef struct Agdisc_s Agdisc_t;	/* union of client discipline methods */
typedef struct Agdstate_s Agdstate_t;	/* client state (closures) */
typedef struct Agsym_s Agsym_t;	/* string attribute descriptors */
typedef struct Agattr_s Agattr_t;	/* string attribute container */
typedef struct Agcbdisc_s Agcbdisc_t;	/* client event callbacks */
typedef struct Agcbstack_s Agcbstack_t;	/* enclosing state for cbdisc */
typedef struct Agclos_s Agclos_t;	/* common fields for graph/subgs */
typedef struct Agrec_s Agrec_t;	/* generic runtime record */
typedef struct Agdatadict_s Agdatadict_t;	/* set of dictionaries per graph */
typedef struct Agedgepair_s Agedgepair_t;	/* the edge object */
typedef struct Agsubnode_s Agsubnode_t;

/* Header of a user record.  These records are attached by client programs
dynamically at runtime.  A unique string ID must be given to each record
attached to the same object.  Cgraph has functions to create, search for,
and delete these records.   The records are maintained in a circular list,
with obj->data pointing somewhere in the list.  The search function has
an option to lock this pointer on a given record.  The application must
be written so only one such lock is outstanding at a time. */

struct Agrec_s {
    char *name;
    Agrec_t *next;
    /* following this would be any programmer-defined data */
};

/* Object tag for graphs, nodes, and edges.  While there may be several structs
for a given node or edges, there is only one unique ID (per main graph).  */
struct Agtag_s {
    unsigned objtype:2;		/* see literal tags below */
    unsigned mtflock:1;		/* move-to-front lock, see above */
    unsigned attrwf:1;		/* attrs written (parity, write.c) */
    unsigned seq:(sizeof(unsigned) * 8 - 4);	/* sequence no. */
    unsigned long id;		/* client  ID */
};

	/* object tags */








	/* a generic graph/node/edge header */
struct Agobj_s {
    Agtag_t tag;
    Agrec_t *data;
};










/* This is the node struct allocated per graph (or subgraph).  It resides
in the n_dict of the graph.  The node set is maintained by libdict, but
transparently to libgraph callers.  Every node may be given an optional
string name at its time of creation, or it is permissible to pass NIL(char*)
for the name. */

struct Agsubnode_s {		/* the node-per-graph-or-subgraph record */
    Dtlink_t seq_link;		/* must be first */
    Dtlink_t id_link;
    Agnode_t *node;		/* the object */
    Dtlink_t *in_id, *out_id;	/* by node/ID for random access */
    Dtlink_t *in_seq, *out_seq;	/* by node/sequence for serial access */
};

struct Agnode_s {
    Agobj_t base;
    Agraph_t *root;
    Agsubnode_t mainsub;	/* embedded for main graph */
};

struct Agedge_s {
    Agobj_t base;
    Dtlink_t id_link;		/* main graph only */
    Dtlink_t seq_link;
    Agnode_t *node;		/* the endpoint node */
};

struct Agedgepair_s {
    Agedge_t out, in;
};

struct Agdesc_s {		/* graph descriptor */
    unsigned directed:1;	/* if edges are asymmetric */
    unsigned strict:1;		/* if multi-edges forbidden */
    unsigned no_loop:1;		/* if no loops */
    unsigned maingraph:1;	/* if this is the top level graph */
    unsigned flatlock:1;	/* if sets are flattened into lists in cdt */
    unsigned no_write:1;	/* if a temporary subgraph */
    unsigned has_attrs:1;	/* if string attr tables should be initialized */
    unsigned has_cmpnd:1;	/* if may contain collapsed nodes */
};

/* disciplines for external resources needed by libgraph */

struct Agmemdisc_s {		/* memory allocator */
    void *(*open) (Agdisc_t*);	/* independent of other resources */
    void *(*alloc) (void *state, size_t req);
    void *(*resize) (void *state, void *ptr, size_t old, size_t req);
    void (*free) (void *state, void *ptr);
    void (*close) (void *state);
};

struct Agiddisc_s {		/* object ID allocator */
    void *(*open) (Agraph_t * g, Agdisc_t*);	/* associated with a graph */
    long (*map) (void *state, int objtype, char *str, unsigned long *id,
		 int createflag);
    long (*alloc) (void *state, int objtype, unsigned long id);
    void (*free) (void *state, int objtype, unsigned long id);
    char *(*print) (void *state, int objtype, unsigned long id);
    void (*close) (void *state);
    void (*idregister) (void *state, int objtype, void *obj);
};

struct Agiodisc_s {
    int (*afread) (void *chan, char *buf, int bufsize);
    int (*putstr) (void *chan, const char *str);
    int (*flush) (void *chan);	/* sync */
    /* error messages? */
};

struct Agdisc_s {		/* user's discipline */
    Agmemdisc_t *mem;
    Agiddisc_t *id;
    Agiodisc_t *io;
};

	/* default resource disciplines */

/*visual studio*/







/*end visual studio*/

extern Agmemdisc_t AgMemDisc;
extern Agiddisc_t AgIdDisc;
extern Agiodisc_t AgIoDisc;

extern Agdisc_t AgDefaultDisc;


struct Agdstate_s {
    void *mem;
    void *id;
    /* IO must be initialized and finalized outside Cgraph,
     * and channels (FILES) are passed as void* arguments. */
};

typedef void (*agobjfn_t) (Agraph_t * g, Agobj_t * obj, void *arg);
typedef void (*agobjupdfn_t) (Agraph_t * g, Agobj_t * obj, void *arg,
			      Agsym_t * sym);

struct Agcbdisc_s {
    struct {
	agobjfn_t ins;
	agobjupdfn_t mod;
	agobjfn_t del;
    } graph, node, edge;
};

struct Agcbstack_s {		/* object event callbacks */
    Agcbdisc_t *f;		/* methods */
    void *state;		/* closure */
    Agcbstack_t *prev;		/* kept in a stack, unlike other disciplines */
};

struct Agclos_s {
    Agdisc_t disc;		/* resource discipline functions */
    Agdstate_t state;		/* resource closures */
    Dict_t *strdict;		/* shared string dict */
    unsigned long seq[3];	/* local object sequence number counter */
    Agcbstack_t *cb;		/* user and system callback function stacks */
    unsigned char callbacks_enabled;	/* issue user callbacks or hold them? */
    Dict_t *lookup_by_name[3];
    Dict_t *lookup_by_id[3];
};

struct Agraph_s {
    Agobj_t base;
    Agdesc_t desc;
    Dtlink_t link;
    Dict_t *n_seq;		/* the node set in sequence */
    Dict_t *n_id;		/* the node set indexed by ID */
    Dict_t *e_seq, *e_id;	/* holders for edge sets */
    Dict_t *g_dict;		/* subgraphs - descendants */
    Agraph_t *parent, *root;	/* subgraphs - ancestors */
    Agclos_t *clos;		/* shared resources */
};












extern void agpushdisc(Agraph_t * g, Agcbdisc_t * disc, void *state);
extern int agpopdisc(Agraph_t * g, Agcbdisc_t * disc);
extern int agcallbacks(Agraph_t * g, int flag);	/* return prev value */

/* graphs */
extern Agraph_t *agopen(char *name, Agdesc_t desc, Agdisc_t * disc);
extern int agclose(Agraph_t * g);
extern Agraph_t *agread(void *chan, Agdisc_t * disc);
extern Agraph_t *agmemread(const char *cp);
extern void agreadline(int);
extern void agsetfile(char *);
extern Agraph_t *agconcat(Agraph_t * g, void *chan, Agdisc_t * disc);
extern int agwrite(Agraph_t * g, void *chan);
extern int agisdirected(Agraph_t * g);
extern int agisundirected(Agraph_t * g);
extern int agisstrict(Agraph_t * g);
extern int agissimple(Agraph_t * g);

/* nodes */
extern Agnode_t *agnode(Agraph_t * g, char *name, int createflag);
extern Agnode_t *agidnode(Agraph_t * g, unsigned long id, int createflag);
extern Agnode_t *agsubnode(Agraph_t * g, Agnode_t * n, int createflag);
extern Agnode_t *agfstnode(Agraph_t * g);
extern Agnode_t *agnxtnode(Agraph_t * g, Agnode_t * n);
extern Agnode_t *aglstnode(Agraph_t * g);
extern Agnode_t *agprvnode(Agraph_t * g, Agnode_t * n);

extern Agsubnode_t *agsubrep(Agraph_t * g, Agnode_t * n);

/* edges */
extern Agedge_t *agedge(Agraph_t * g, Agnode_t * t, Agnode_t * h,
			char *name, int createflag);
extern Agedge_t *agidedge(Agraph_t * g, Agnode_t * t, Agnode_t * h,
			  unsigned long id, int createflag);
extern Agedge_t *agsubedge(Agraph_t * g, Agedge_t * e, int createflag);
extern Agedge_t *agfstin(Agraph_t * g, Agnode_t * n);
extern Agedge_t *agnxtin(Agraph_t * g, Agedge_t * e);
extern Agedge_t *agfstout(Agraph_t * g, Agnode_t * n);
extern Agedge_t *agnxtout(Agraph_t * g, Agedge_t * e);
extern Agedge_t *agfstedge(Agraph_t * g, Agnode_t * n);
extern Agedge_t *agnxtedge(Agraph_t * g, Agedge_t * e, Agnode_t * n);

/* generic */
extern Agraph_t *agraphof(void* obj);
extern Agraph_t *agroot(void* obj);
extern int agcontains(Agraph_t *, void *);
extern char *agnameof(void *);
extern int agrelabel(void *obj, char *name);	/* scary */
extern int agrelabel_node(Agnode_t * n, char *newname);
extern int agdelete(Agraph_t * g, void *obj);
extern long agdelsubg(Agraph_t * g, Agraph_t * sub);	/* could be agclose */
extern int agdelnode(Agraph_t * g, Agnode_t * arg_n);
extern int agdeledge(Agraph_t * g, Agedge_t * arg_e);
extern int agobjkind(void *);

/* strings */
extern char *agstrdup(Agraph_t *, char *);
extern char *agstrdup_html(Agraph_t *, char *);
extern int aghtmlstr(char *);
extern char *agstrbind(Agraph_t * g, char *);
extern int agstrfree(Agraph_t *, char *);
extern char *agcanon(char *, int);
extern char *agstrcanon(char *, char *);
extern char *agcanonStr(char *str);  /* manages its own buf */

/* definitions for dynamic string attributes */
struct Agattr_s {		/* dynamic string attributes */
    Agrec_t h;			/* common data header */
    Dict_t *dict;		/* shared dict to interpret attr field */
    char **str;			/* the attribute string values */
};

struct Agsym_s {		/* symbol in one of the above dictionaries */
    Dtlink_t link;
    char *name;			/* attribute's name */
    char *defval;		/* its default value for initialization */
    int id;			/* its index in attr[] */
    unsigned char kind;		/* referent object type */
    unsigned char fixed;	/* immutable value */
    unsigned char print;	/* always print */
};

struct Agdatadict_s {		/* set of dictionaries per graph */
    Agrec_t h;			/* installed in list of graph recs */
    struct {
	Dict_t *n, *e, *g;
    } dict;
};

extern Agsym_t *agattr(Agraph_t * g, int kind, char *name, char *value);
extern Agsym_t *agattrsym(void *obj, char *name);
extern Agsym_t *agnxtattr(Agraph_t * g, int kind, Agsym_t * attr);
extern int      agcopyattr(void *oldobj, void *newobj);

extern void *agbindrec(void *obj, char *name, unsigned int size,
		       int move_to_front);
extern Agrec_t *aggetrec(void *obj, char *name, int move_to_front);
extern int agdelrec(void *obj, char *name);
extern void aginit(Agraph_t * g, int kind, char *rec_name, int rec_size,
		   int move_to_front);
extern void agclean(Agraph_t * g, int kind, char *rec_name);

extern char *agget(void *obj, char *name);
extern char *agxget(void *obj, Agsym_t * sym);
extern int agset(void *obj, char *name, char *value);
extern int agxset(void *obj, Agsym_t * sym, char *value);
extern int agsafeset(void* obj, char* name, char* value, char* def);

/* defintions for subgraphs */
extern Agraph_t *agsubg(Agraph_t * g, char *name, int cflag);	/* constructor */
extern Agraph_t *agidsubg(Agraph_t * g, unsigned long id, int cflag);	/* constructor */
extern Agraph_t *agfstsubg(Agraph_t * g), *agnxtsubg(Agraph_t * subg);
extern Agraph_t *agparent(Agraph_t * g);

/* set cardinality */
extern int agnnodes(Agraph_t * g), agnedges(Agraph_t * g), agnsubg(Agraph_t * g);
extern int agdegree(Agraph_t * g, Agnode_t * n, int in, int out);
extern int agcountuniqedges(Agraph_t * g, Agnode_t * n, int in, int out);

/* memory */
extern void *agalloc(Agraph_t * g, size_t size);
extern void *agrealloc(Agraph_t * g, void *ptr, size_t oldsize,
		       size_t size);
extern void agfree(Agraph_t * g, void *ptr);
extern struct _vmalloc_s *agheap(Agraph_t * g);

/* an engineering compromise is a joy forever */
extern void aginternalmapclearlocalnames(Agraph_t * g);




/* error handling */
typedef enum { AGWARN, AGERR, AGMAX, AGPREV } agerrlevel_t;
typedef int (*agusererrf) (char*);
extern agerrlevel_t agseterr(agerrlevel_t);
extern char *aglasterr(void);
extern int agerr(agerrlevel_t level, const char *fmt, ...);
extern void agerrorf(const char *fmt, ...);
extern void agwarningf(const char *fmt, ...);
extern int agerrors(void);
extern int agreseterrors(void);
extern agusererrf agseterrf(agusererrf);

/* data access macros */
/* this assumes that e[0] is out and e[1] is inedge, see edgepair in edge.c  */


























extern Agdesc_t Agdirected, Agstrictdirected, Agundirected,
    Agstrictundirected;



/* fast graphs */
void agflatten(Agraph_t * g, int flag);
typedef Agsubnode_t	Agnoderef_t;
typedef Dtlink_t	Agedgeref_t;


































#line 32 "graphviz-2.38.0\\lib\\common\\types.h" 2





    typedef int (*qsort_cmpf) (const void *, const void *);
    typedef int (*bsearch_cmpf) (const void *, const void *);
    typedef struct Agraph_s graph_t;
    typedef struct Agnode_s node_t;
    typedef struct Agedge_s edge_t;
    typedef struct Agsym_s attrsym_t;



    typedef struct htmllabel_t htmllabel_t;

    typedef union inside_t {
	struct {
	    pointf* p;
	    double* r;
	} a;
	struct {
	    node_t* n;
	    boxf*    bp;
	} s;
    } inside_t;

    typedef struct port {	/* internal edge endpoint specification */
	pointf p;		/* aiming point relative to node center */
	double theta;		/* slope in radians */
	boxf *bp;		/* if not null, points to bbox of 
				 * rectangular area that is port target
				 */
	boolean	defined;        /* if true, edge has port info at this end */
	boolean	constrained;    /* if true, constraints such as theta are set */
	boolean clip;           /* if true, clip end to node/port shape */
	boolean dyna;           /* if true, assign compass point dynamically */
	unsigned char order;	/* for mincross */
	unsigned char side;	/* if port is on perimeter of node, this
                                 * contains the bitwise OR of the sides (TOP,
                                 * BOTTOM, etc.) it is on. 
                                 */
	char *name;		/* port name, if it was explicitly given, otherwise NULL */
    } port;

    typedef struct {
	boolean(*swapEnds) (edge_t * e);	/* Should head and tail be swapped? */
	boolean(*splineMerge) (node_t * n);	/* Is n a node in the middle of an edge? */
	boolean ignoreSwap;                     /* Test for swapped edges if false */
	boolean isOrtho;                        /* Orthogonal routing used */
    } splineInfo;

    typedef struct pathend_t {
	boxf nb;			/* the node box */
	pointf np;		/* node port */
	int sidemask;
	int boxn;
	boxf boxes[20];
    } pathend_t;

    typedef struct path {	/* internal specification for an edge spline */
	port start, end;
	int nbox;		/* number of subdivisions */
	boxf *boxes;		/* rectangular regions of subdivision */
	void *data;
    } path;

    typedef struct bezier {
	pointf *list;
	int size;
	int sflag, eflag;
	pointf sp, ep;
    } bezier;

    typedef struct splines {
	bezier *list;
	int size;
	boxf bb;
    } splines;

    typedef struct textlabel_t {
	char *text, *fontname, *fontcolor;
	int charset;
	double fontsize;
	pointf dimen; /* the diagonal size of the label (estimated by layout) */
	pointf space; /* the diagonal size of the space for the label */
		      /*   the rendered label is aligned in this box */
		      /*   space does not include pad or margin */
	pointf pos;   /* the center of the space for the label */
	union {
	    struct {
		textspan_t *span;
		short nspans;
	    } txt;
	    htmllabel_t *html;
	} u;
	char valign;  /* 't' 'c' 'b' */
	boolean set;  /* true if position is set */
	boolean html; /* true if html label */
    } textlabel_t;

    typedef struct polygon_t {	/* mutable shape information for a node */
	int regular;		/* true for symmetric shapes */
	int peripheries;	/* number of periphery lines */
	int sides;		/* number of sides */
	double orientation;	/* orientation of shape (+ve degrees) */
	double distortion;	/* distortion factor - as in trapezium */
	double skew;		/* skew factor - as in parallelogram */
	int option;		/* ROUNDED, DIAGONAL corners, etc. */
	pointf *vertices;	/* array of vertex points */
    } polygon_t;

    typedef struct stroke_t {	/* information about a single stroke */
	/* we would have called it a path if that term wasn't already used */
	int nvertices;		/* number of points in the stroke */
	int flags;		/* stroke style flags */
	pointf *vertices;	/* array of vertex points */
    } stroke_t;

/* flag definitions for stroke_t */







    typedef struct shape_t {	/* mutable shape information for a node */
	int nstrokes;		/* number of strokes in array */
	stroke_t *strokes;	/* array of strokes */
	/* The last stroke must always be closed, but can be pen_up.
	 * It is used as the clipping path */
    } shape_t;

    typedef struct shape_functions {	/* read-only shape functions */
	void (*initfn) (node_t *);	/* initializes shape from node u.shape_info structure */
	void (*freefn) (node_t *);	/* frees  shape from node u.shape_info structure */
	 port(*portfn) (node_t *, char *, char *);	/* finds aiming point and slope of port */
	 boolean(*insidefn) (inside_t * inside_context, pointf);	/* clips incident gvc->e spline on shape of gvc->n */
	int (*pboxfn)(node_t* n, port* p, int side, boxf rv[], int *kptr); /* finds box path to reach port */
	void (*codefn) (GVJ_t * job, node_t * n);	/* emits graphics code for node */
    } shape_functions;

    typedef enum { SH_UNSET, SH_POLY, SH_RECORD, SH_POINT, SH_EPSF} shape_kind;

    typedef struct shape_desc {	/* read-only shape descriptor */
	char *name;		/* as read from graph file */
	shape_functions *fns;
	polygon_t *polygon;	/* base polygon info */
	boolean usershape;
    } shape_desc;

#line 1 "graphviz-2.38.0\\lib\\common\\usershape.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/




#line 1 "graphviz-2.38.0\\lib\\cdt\\cdt.h" 1




























































	
	
	  
	





	





	





	
	
	
	  
	
	
	
	
	
				





	
	
	
	
	
	
	
	

















	
	
	
	
	
	
	
	
	





	
	
	
	























































































































































































#line 17 "graphviz-2.38.0\\lib\\common\\usershape.h" 2





    typedef enum { FT_NULL,
	FT_BMP, FT_GIF, FT_PNG, FT_JPEG,
	FT_PDF, FT_PS, FT_EPS, FT_SVG, FT_XML,
	FT_RIFF, FT_WEBP, FT_ICO, FT_TIFF
    } imagetype_t;

    typedef enum {
	IMAGESCALE_FALSE,  /* no image scaling */
	IMAGESCALE_TRUE,   /* scale image to fit but keep aspect ratio */
	IMAGESCALE_WIDTH,  /* scale image width to fit, keep height fixed */
	IMAGESCALE_HEIGHT, /* scale image height to fit, keep width fixed */
	IMAGESCALE_BOTH    /* scale image to fit without regard for aspect ratio */
    } imagescale_t;

    typedef struct usershape_s usershape_t;

    struct usershape_s {
	Dtlink_t link;
	const char *name;
	int macro_id;
	boolean must_inline;
	boolean nocache;
	FILE *f;
	imagetype_t type;
	char *stringtype;
	int x, y, w, h, dpi;
	void *data;                   /* data loaded by a renderer */
	size_t datasize;              /* size of data (if mmap'ed) */
	void (*datafree)(usershape_t *us); /* renderer's function for freeing data */
    };





#line 182 "graphviz-2.38.0\\lib\\common\\types.h" 2

    typedef struct nodequeue {
	node_t **store, **limit, **head, **tail;
    } nodequeue;

    typedef struct adjmatrix_t {
	int nrows, ncols;
	char *data;
    } adjmatrix_t;

    typedef struct rank_t {
	int n;			/* number of nodes in this rank  */
	node_t **v;		/* ordered list of nodes in rank    */
	int an;			/* globally allocated number of nodes   */
	node_t **av;		/* allocated list of nodes in rank  */
	double ht1, ht2;	/* height below/above centerline    */
	double pht1, pht2;	/* as above, but only primitive nodes   */
	boolean candidate;	/* for transpose () */
	boolean valid;
	int cache_nc;		/* caches number of crossings */
	adjmatrix_t *flat;
    } rank_t;

    typedef enum { R_NONE =
	    0, R_VALUE, R_FILL, R_COMPRESS, R_AUTO, R_EXPAND } ratio_t;

    typedef struct layout_t {
	double quantum;
	double scale;
	double ratio;		/* set only if ratio_kind == R_VALUE */
	double dpi;
	pointf margin;
	pointf page;
	pointf size;
	boolean filled;
	boolean landscape;
	boolean centered;
	ratio_t ratio_kind;
	void* xdots;
	char* id;
    } layout_t;

/* for "record" shapes */
    typedef struct field_t {
	pointf size;		/* its dimension */
	boxf b;			/* its placement in node's coordinates */
	int n_flds;
	textlabel_t *lp;	/* n_flds == 0 */
	struct field_t **fld;	/* n_flds > 0 */
	char *id;		/* user's identifier */
	unsigned char LR;	/* if box list is horizontal (left to right) */
	unsigned char sides;    /* sides of node exposed to field */
    } field_t;

    typedef struct nlist_t {
	node_t **list;
	int size;
    } nlist_t;

    typedef struct elist {
	edge_t **list;
	int size;
    } elist;













typedef enum {NATIVEFONTS,PSFONTS,SVGFONTS} fontname_kind;

    typedef struct Agraphinfo_t {
	Agrec_t hdr;
	/* to generate code */
	layout_t *drawing;
	textlabel_t *label;	/* if the cluster has a title */
	boxf bb;			/* bounding box */
	pointf border[4];	/* sizes of margins for graph labels */
	unsigned char gui_state; /* Graph state for GUI ops */
	unsigned char has_labels;
	boolean has_images;
	unsigned char charset; /* input character set */
	int rankdir;
	double ht1, ht2;	/* below and above extremal ranks */
	unsigned short flags;
	void *alg;
	GVC_t *gvc;	/* context for "globals" over multiple graphs */
	void (*cleanup) (graph_t * g);   /* function to deallocate layout-specific data */


	/* to place nodes */
	node_t **neato_nlist;
	int move;
	double **dist, **spring, **sum_t, ***t;
	unsigned short ndim;
	unsigned short odim;


	/* to have subgraphs */
	int n_cluster;
	graph_t **clust;	/* clusters are in clust[1..n_cluster] !!! */
	graph_t *dotroot;
	node_t *nlist;
	rank_t *rank;
	graph_t *parent;        /* containing cluster (not parent subgraph) */
	int level;		/* cluster nesting level (not node level!) */
	node_t	*minrep, *maxrep;	/* set leaders for min and max rank */

	/* fast graph node list */
	nlist_t comp;
	/* connected components */
	node_t *minset, *maxset;	/* set leaders */
	long n_nodes;
	/* includes virtual */
	short minrank, maxrank;

	/* various flags */
	boolean has_flat_edges;
	boolean has_sourcerank;
	boolean has_sinkrank;
	unsigned char	showboxes;
	fontname_kind fontnames;		/* to override mangling in SVG */

	int nodesep, ranksep;
	node_t *ln, *rn;	/* left, right nodes of bounding box */

	/* for clusters */
	node_t *leader, **rankleader;
	boolean expanded;
	char installed;
	char set_type;
	char label_pos;
	boolean exact_ranksep;


    } Agraphinfo_t;

































































    typedef struct Agnodeinfo_t {
	Agrec_t hdr;
	shape_desc *shape;
	void *shape_info;
	pointf coord;
	double width, height;  /* inches */
	boxf bb;
	double ht, lw, rw;
	textlabel_t *label;
	textlabel_t *xlabel;
	void *alg;
	char state;
	unsigned char gui_state; /* Node state for GUI ops */
	boolean clustnode;


	unsigned char pinned;
	int id, heapindex, hops;
	double *pos, dist;


	unsigned char showboxes;
	boolean  has_port;
	node_t* rep;
	node_t *set;

	/* fast graph */
	char node_type, mark, onstack;
	char ranktype, weight_class;
	node_t *next, *prev;
	elist in, out, flat_out, flat_in, other;
	graph_t *clust;

	/* for union-find and collapsing nodes */
	int UF_size;
	node_t *UF_parent;
	node_t *inleaf, *outleaf;

	/* for placing nodes */
	int rank, order;	/* initially, order = 1 for ordered edges */
	double mval;
	elist save_in, save_out;

	/* for network-simplex */
	elist tree_in, tree_out;
	edge_t *par;
	int low, lim;
	int priority;

	double pad[1];


    } Agnodeinfo_t;




























































    typedef struct Agedgeinfo_t {
	Agrec_t hdr;
	splines *spl;
	port tail_port, head_port;
	textlabel_t *label, *head_label, *tail_label, *xlabel;
	char edge_type;
	char adjacent;          /* true for flat edge with adjacent nodes */
	char label_ontop;
	unsigned char gui_state; /* Edge state for GUI ops */
	edge_t *to_orig;	/* for dot's shapes.c    */
	void *alg;


	double factor;
	double dist;
	Ppolyline_t path;


	unsigned char showboxes;
	boolean conc_opp_flag;
	short xpenalty;
	int weight;
	int cutvalue, tree_index;
	short count;
	unsigned short minlen;
	edge_t *to_virt;

    } Agedgeinfo_t;






































    typedef struct {
	int flags;
    } gvlayout_features_t;





#line 21 "graphviz-2.38.0\\lib\\common\\render.h" 2
#line 1 "graphviz-2.38.0\\lib\\common\\macros.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/





































#line 22 "graphviz-2.38.0\\lib\\common\\render.h" 2
#line 1 "graphviz-2.38.0\\lib\\common\\const.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/










/*	node,edge types */











/* collapsed node classifications */









/* type of cluster rank assignment */




/* default attributes */









































/* default margin for paged formats such as PostScript - in points  = 0.5in */

/* default margin for embedded formats such as PNG - in points */

/* default padding around graph - in points */








/* default polygon sample size for overlap removal and maps */


/* arrow types */


/* sides (e.g. of cluster margins) */





/* sides of boxes for SHAPE_path */








/* Obj types  for renderers */





/* output languages */



















/* for clusters */








/* edge types */







/* for graph server */



/* for neato */




/* drawing phases */



/* existence of labels */







/* type of graph label: GD_label_pos */





/* values specifying rankdir */





/* allowed charsets */




/* style flags (0-23)*/















/* shape (1-127) */


























/* fill types */





/* label types */




/* Flags stored in GD_flags 
 * Bit(s):  0     HAS_CLUST_EDGE
 *          1-3   ET_ 
 *          4     NEW_RANK
 */

/* edge types */








/* New ranking is used */

/******/

/* user-specified node position: ND_pinned */






/* fontsize at which text is omitted entirely */

/* fontsize at which text is rendered by a simple line */



#line 23 "graphviz-2.38.0\\lib\\common\\render.h" 2
#line 1 "graphviz-2.38.0\\lib\\common\\globals.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/

/* this is to get the following win32 DLL junk to work.
 * if ever tempted to remove this, first please read:
 * http://joel.editthispage.com/stories/storyReader$47
 */



























/*visual studio*/





/*end visual studio*/












    extern char *Version;
    extern char **Files;	/* from command line */
    extern const char **Lib;		/* from command line */
    extern char *CmdName;
    extern char *specificFlags;
    extern char *specificItems;
    extern char *Gvfilepath;  /* Per-process path of files allowed in image attributes (also ps libs) */
    extern char *Gvimagepath; /* Per-graph path of files allowed in image attributes  (also ps libs) */

    extern unsigned char Verbose;
    extern unsigned char Reduce;
    extern int MemTest;
    extern char *HTTPServerEnVar;
    extern char *Output_file_name;
    extern int graphviz_errors;
    extern int Nop;
    extern double PSinputscale;
    extern int Syntax_errors;
    extern int Show_cnt;
    extern char** Show_boxes;	/* emit code for correct box coordinates */
    extern int CL_type;		/* NONE, LOCAL, GLOBAL */
    extern unsigned char Concentrate;	/* if parallel edges should be merged */
    extern double Epsilon;	/* defined in input_graph */
    extern int MaxIter;
    extern int Ndim;
    extern int State;		/* last finished phase */
    extern int EdgeLabelsDone;	/* true if edge labels have been positioned */
    extern double Initial_dist;
    extern double Damping;
    extern int Y_invert;	/* invert y in dot & plain output */
    extern int GvExitOnUsage;   /* gvParseArgs() should exit on usage or error */

    extern Agsym_t
	*G_activepencolor, *G_activefillcolor,
	*G_selectedpencolor, *G_selectedfillcolor,
	*G_visitedpencolor, *G_visitedfillcolor,
	*G_deletedpencolor, *G_deletedfillcolor,
	*G_ordering, *G_peripheries, *G_penwidth,
	*G_gradientangle, *G_margin;
    extern Agsym_t
	*N_height, *N_width, *N_shape, *N_color, *N_fillcolor,
	*N_activepencolor, *N_activefillcolor,
	*N_selectedpencolor, *N_selectedfillcolor,
	*N_visitedpencolor, *N_visitedfillcolor,
	*N_deletedpencolor, *N_deletedfillcolor,
	*N_fontsize, *N_fontname, *N_fontcolor, *N_margin,
	*N_label, *N_xlabel, *N_nojustify, *N_style, *N_showboxes,
	*N_sides, *N_peripheries, *N_ordering, *N_orientation,
	*N_skew, *N_distortion, *N_fixed, *N_imagescale, *N_layer,
	*N_group, *N_comment, *N_vertices, *N_z,
	*N_penwidth, *N_gradientangle;
    extern Agsym_t
	*E_weight, *E_minlen, *E_color, *E_fillcolor,
	*E_activepencolor, *E_activefillcolor,
	*E_selectedpencolor, *E_selectedfillcolor,
	*E_visitedpencolor, *E_visitedfillcolor,
	*E_deletedpencolor, *E_deletedfillcolor,
	*E_fontsize, *E_fontname, *E_fontcolor,
	*E_label, *E_xlabel, *E_dir, *E_style, *E_decorate,
	*E_showboxes, *E_arrowsz, *E_constr, *E_layer,
	*E_comment, *E_label_float,
	*E_samehead, *E_sametail,
	*E_arrowhead, *E_arrowtail,
	*E_headlabel, *E_taillabel,
	*E_labelfontsize, *E_labelfontname, *E_labelfontcolor,
	*E_labeldistance, *E_labelangle,
	*E_tailclip, *E_headclip,
	*E_penwidth;

    extern struct fdpParms_s* fdp_parms;











#line 24 "graphviz-2.38.0\\lib\\common\\render.h" 2
#line 1 "graphviz-2.38.0\\lib\\common\\memory.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/




#line 1 "graphviz-2.38.0\\lib\\common\\memory.h" 1










































    extern void *zmalloc(size_t);
    extern void *zrealloc(void *, size_t, size_t, size_t);
    extern void *gmalloc(size_t);
	extern void *grealloc(void *, size_t);







#line 25 "graphviz-2.38.0\\lib\\common\\render.h" 2
#line 1 "graphviz-2.38.0\\lib\\common\\colorprocs.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/




#line 1 "graphviz-2.38.0\\lib\\common\\color.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/




/* #include "arith.h" */





typedef struct hsvrgbacolor_t {
    char *name;
    unsigned char h, s, v;
    unsigned char r, g, b, a;
} hsvrgbacolor_t;

/* possible representations of color in gvcolor_t */
typedef enum { HSVA_DOUBLE, RGBA_BYTE, RGBA_WORD, CMYK_BYTE,
		RGBA_DOUBLE, COLOR_STRING, COLOR_INDEX } color_type_t;

/* gvcolor_t can hold a color spec in a choice or representations */
typedef struct color_s {
    union {
	double RGBA[4];
	double HSVA[4];
	unsigned char rgba[4];
	unsigned char cmyk[4];
	int rrggbbaa[4];
	char *string;
	int index;
    } u;
    color_type_t type;
} gvcolor_t;









#line 17 "graphviz-2.38.0\\lib\\common\\colorprocs.h" 2





extern void setColorScheme (char* s);
extern int colorxlate(char *str, gvcolor_t * color, color_type_t target_type);
extern char *canontoken(char *str);
extern int colorCvt(gvcolor_t *ocolor, gvcolor_t *ncolor);





#line 26 "graphviz-2.38.0\\lib\\common\\render.h" 2
#line 1 "graphviz-2.38.0\\lib\\common\\geomprocs.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/

/* geometric functions (e.g. on points and boxes) with application to, but
 * no specific dependance on graphs */









#line 1 "graphviz-2.38.0\\lib\\common\\geom.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/

/* geometric types and macros (e.g. points and boxes) with application to, but
 * no specific dependance on graphs */











    






































































#line 23 "graphviz-2.38.0\\lib\\common\\geomprocs.h" 2











extern box mkbox(point p, point q);
extern boxf mkboxf(pointf p, pointf q);

extern box flip_rec_box(box b, point p);
extern boxf flip_rec_boxf(boxf b, pointf p);

extern double ptToLine2 (pointf l1, pointf l2, pointf p);

extern int lineToBox(pointf p1, pointf p2, boxf b);

extern point ccwrotatep(point p, int ccwrot);
extern pointf ccwrotatepf(pointf p, int ccwrot);

extern point cwrotatep(point p, int cwrot);
extern pointf cwrotatepf(pointf p, int cwrot);

extern void rect2poly(pointf *p);

extern int line_intersect (pointf a, pointf b, pointf c, pointf d, pointf* p);






static inline point pointof(int x, int y)
{
    point r;

    r.x = x;
    r.y = y;
    return r;
}

static inline pointf pointfof(double x, double y)
{
    pointf r;

    r.x = x;
    r.y = y;
    return r;
}

static inline box boxof(int llx, int lly, int urx, int ury)
{
    box b;

    b.LL.x = llx, b.LL.y = lly;
    b.UR.x = urx, b.UR.y = ury;
    return b;
}

static inline boxf boxfof(double llx, double lly, double urx, double ury)
{
    boxf b;

    b.LL.x = llx, b.LL.y = lly;
    b.UR.x = urx, b.UR.y = ury;
    return b;
}

static inline point add_point(point p, point q)
{
    point r;

    r.x = p.x + q.x;
    r.y = p.y + q.y;
    return r;
}

static inline pointf add_pointf(pointf p, pointf q)
{
    pointf r;

    r.x = p.x + q.x;
    r.y = p.y + q.y;
    return r;
}

static inline point sub_point(point p, point q)
{
    point r;

    r.x = p.x - q.x;
    r.y = p.y - q.y;
    return r;
}

static inline pointf sub_pointf(pointf p, pointf q)
{
    pointf r;

    r.x = p.x - q.x;
    r.y = p.y - q.y;
    return r;
}

/* for +ve coord values, this rounds towards p */
static inline point mid_point(point p, point q)
{
    point r;

    r.x = (p.x + q.x) / 2;
    r.y = (p.y + q.y) / 2;
    return r;
}

static inline pointf mid_pointf(pointf p, pointf q)
{
    pointf r;

    r.x = (p.x + q.x) / 2.;
    r.y = (p.y + q.y) / 2.;
    return r;
}

static inline pointf interpolate_pointf(double t, pointf p, pointf q)
{
    pointf r; 

    r.x = p.x + t * (q.x - p.x);
    r.y = p.y + t * (q.y - p.y);
    return r;
}

static inline point exch_xy(point p)
{
    point r;

    r.x = p.y;
    r.y = p.x;
    return r;
}

static inline pointf exch_xyf(pointf p)
{
    pointf r;

    r.x = p.y;
    r.y = p.x;
    return r;
}

static inline box box_bb(box b0, box b1)
{
    box b;

    b.LL.x = MIN(b0.LL.x, b1.LL.x);
    b.LL.y = MIN(b0.LL.y, b1.LL.y);
    b.UR.x = MAX(b0.UR.x, b1.UR.x);
    b.UR.y = MAX(b0.UR.y, b1.UR.y);

    return b;
}

static inline boxf boxf_bb(boxf b0, boxf b1)
{
    boxf b;

    b.LL.x = MIN(b0.LL.x, b1.LL.x);
    b.LL.y = MIN(b0.LL.y, b1.LL.y);
    b.UR.x = MAX(b0.UR.x, b1.UR.x);
    b.UR.y = MAX(b0.UR.y, b1.UR.y);

    return b;
}

static inline box box_intersect(box b0, box b1)
{
    box b;

    b.LL.x = MAX(b0.LL.x, b1.LL.x);
    b.LL.y = MAX(b0.LL.y, b1.LL.y);
    b.UR.x = MIN(b0.UR.x, b1.UR.x);
    b.UR.y = MIN(b0.UR.y, b1.UR.y);

    return b;
}

static inline boxf boxf_intersect(boxf b0, boxf b1)
{
    boxf b;

    b.LL.x = MAX(b0.LL.x, b1.LL.x);
    b.LL.y = MAX(b0.LL.y, b1.LL.y);
    b.UR.x = MIN(b0.UR.x, b1.UR.x);
    b.UR.y = MIN(b0.UR.y, b1.UR.y);

    return b;
}

static inline int box_overlap(box b0, box b1)
{
    return OVERLAP(b0, b1);
}

static inline int boxf_overlap(boxf b0, boxf b1)
{
    return OVERLAP(b0, b1);
}

static inline int box_contains(box b0, box b1)
{
    return CONTAINS(b0, b1);
}

static inline int boxf_contains(boxf b0, boxf b1)
{
    return CONTAINS(b0, b1);
}

static inline pointf perp (pointf p)
{
    pointf r;

    r.x = -p.y;
    r.y = p.x;
    return r;
}

static inline pointf scale (double c, pointf p)
{
    pointf r;

    r.x = c * p.x;
    r.y = c * p.y;
    return r;
}










#line 27 "graphviz-2.38.0\\lib\\common\\render.h" 2
#line 1 "graphviz-2.38.0\\lib\\cgraph\\agxbuf.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/








/* Extensible buffer:
 *  Malloc'ed memory is never released until agxbfree is called.
 */
    typedef struct {
	unsigned char *buf;	/* start of buffer */
	unsigned char *ptr;	/* next place to write */
	unsigned char *eptr;	/* end of buffer */
	int dyna;		/* true if buffer is malloc'ed */
    } agxbuf;

/* agxbinit:
 * Initializes new agxbuf; caller provides memory.
 * Assume if init is non-null, hint = sizeof(init[])
 */
    extern void agxbinit(agxbuf * xb, unsigned int hint,
			 unsigned char *init);

/* agxbput_n:
 * Append string s of length n into xb
 */
    extern int agxbput_n(agxbuf * xb, const char *s, unsigned int n);

/* agxbput:
 * Append string s into xb
 */
    extern int agxbput(agxbuf * xb, const char *s);

/* agxbfree:
 * Free any malloced resources.
 */
    extern void agxbfree(agxbuf * xb);

/* agxbpop:
 * Removes last character added, if any.
 */
    extern int agxbpop(agxbuf * xb);

/* agxbmore:
 * Expand buffer to hold at least ssz more bytes.
 */
    extern int agxbmore(agxbuf * xb, int unsigned ssz);

/* agxbputc:
 * Add character to buffer.
 *  int agxbputc(agxbuf*, char)
 */



/* agxbuse:
 * Null-terminates buffer; resets and returns pointer to data;
 *  char* agxbuse(agxbuf* xb)
 */


/* agxbstart:
 * Return pointer to beginning of buffer.
 *  char* agxbstart(agxbuf* xb)
 */


/* agxblen:
 * Return number of characters currently stored.
 *  int agxblen(agxbuf* xb)
 */


/* agxbclear:
 * Resets pointer to data;
 *  void agxbclear(agxbuf* xb)
 */


/* agxbnext:
 * Next position for writing.
 *  char* agxbnext(agxbuf* xb)
 */







#line 28 "graphviz-2.38.0\\lib\\common\\render.h" 2
#line 1 "graphviz-2.38.0\\lib\\common\\utils.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/









/*visual studio*/







/*end visual studio*/


    extern int strcasecmp(const char *s1, const char *s2);


    extern int strncasecmp(const char *s1, const char *s2, size_t n);


    extern nodequeue *new_queue(int);
    extern void free_queue(nodequeue *);
    extern void enqueue(nodequeue *, Agnode_t *);
    extern Agnode_t *dequeue(nodequeue *);
    extern pointf Bezier(pointf *, int, double, pointf *, pointf *);
    extern void attach_attrs(graph_t * g);
    extern void attach_attrs_and_arrows(graph_t*, int*, int*);
    extern char *xml_string(char *str);
    extern char *xml_string0(char *str, boolean raw);
    extern void write_plain(GVJ_t * job, graph_t * g, FILE * f, boolean extend);
    extern double yDir (double y);
    extern char *ps_string(char *s, int);
    extern char *strdup_and_subst_obj(char *str, void *obj);
    extern char *xml_url_string(char *s);
    extern void epsf_emit_body(GVJ_t *job, usershape_t *us);
    extern void epsf_define(GVJ_t * job);
    extern void undoClusterEdges(graph_t * g);
    extern Dt_t* mkClustMap (Agraph_t* g);
    extern Agraph_t* findCluster (Dt_t* map, char* name);
    extern attrsym_t* safe_dcl(graph_t * g, int obj_kind, char *name, char *def);

    extern int late_int(void *, Agsym_t *, int, int);
    extern double late_double(void *, Agsym_t *, double, double);
    extern char *late_nnstring(void *, Agsym_t *, char *);
    extern char *late_string(void *, Agsym_t *, char *);
    extern boolean late_bool(void *, Agsym_t *, int);
    extern double get_inputscale (graph_t* g);

    extern Agnode_t *UF_find(Agnode_t *);
    extern Agnode_t *UF_union(Agnode_t *, Agnode_t *);
    extern void UF_remove(Agnode_t *, Agnode_t *);
    extern void UF_singleton(Agnode_t *);
    extern void UF_setname(Agnode_t *, Agnode_t *);

    extern char *Fgets(FILE * fp);
    extern const char *safefile(const char *filename);

    extern boolean mapBool(char *, boolean);
    extern boolean mapbool(char *);
    extern int maptoken(char *, char **, int *);

    extern boolean findStopColor (char* colorlist, char* clrs[2], float* frac);
    extern int test_toggle(void);

    extern void common_init_node(node_t * n);
    extern int common_init_edge(edge_t * e);

    extern void updateBB(graph_t * g, textlabel_t * lp);
    extern void compute_bb(Agraph_t *);
    extern boxf polyBB (polygon_t* poly);
    extern boolean overlap_node(node_t *n, boxf b);
    extern boolean overlap_label(textlabel_t *lp, boxf b);
    extern boolean overlap_edge(edge_t *e, boxf b);

    extern void get_gradient_points(pointf * A, pointf * G, int n, float angle, int flags);

    extern int processClusterEdges(graph_t * g);

    extern char *latin1ToUTF8(char *);
    extern char *htmlEntityUTF8(char *, graph_t* g);
    extern char* utf8ToLatin1 (char* ins);
    extern char* scanEntity (char* t, agxbuf* xb);

    extern pointf dotneato_closest(splines * spl, pointf p);
    extern pointf neato_closest(splines * spl, pointf p);
    extern pointf spline_at_y(splines * spl, double y);

    extern Agsym_t *setAttr(graph_t*, void*, char*name, char *value, Agsym_t*);
    extern void setEdgeType (graph_t* g, int dflt);
    extern int edgeType (char* s, int dflt);
    extern int is_a_cluster (Agraph_t* g);

    /* from postproc.c */ 
    extern void gv_nodesize(Agnode_t * n, boolean flip);

    /* from timing.c */
    extern void start_timer(void);
    extern double elapsed_sec(void);

    /* from psusershape.c */
    extern void cat_libfile(GVJ_t * job, const char **arglib, const char **stdlib);

Agnodeinfo_t* ninf(Agnode_t* n);
Agraphinfo_t* ginf(Agraph_t* g);
Agedgeinfo_t* einf(Agedge_t* e);
    /**/

	









#line 29 "graphviz-2.38.0\\lib\\common\\render.h" 2
#line 1 "graphviz-2.38.0\\lib\\gvc\\gvplugin.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/

/* Header used by plugins */








#line 1 "graphviz-2.38.0\\lib\\gvc\\gvcext.h" 1

/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/

/* Common header used by both clients and plugins */



















    
    			











    			







    
    
    

    
	
	
    

    















	


	












#line 21 "graphviz-2.38.0\\lib\\gvc\\gvplugin.h" 2

/* 
 * Terminology:
 *
 *    package         - e.g. libgvplugin_cairo.so
 *       api	      - e.g. render
 *          type      - e.g. "png", "ps"
 */

    typedef struct {
	int id;         /* an id that is only unique within a package 
			of plugins of the same api.
			A renderer-type such as "png" in the cairo package
			has an id that is different from the "ps" type
			in the same package */
	const char *type;	/* a string name, such as "png" or "ps" that
			distinguishes different types withing the same
			 (renderer in this case) */
	int quality;    /* an arbitrary integer used for ordering plugins of
			the same type from different packages */
	void *engine;   /* pointer to the jump table for the plugin */
	void *features; /* pointer to the feature description 
				void* because type varies by api */
    } gvplugin_installed_t;

    typedef struct {
	api_t api;
	gvplugin_installed_t *types;
    } gvplugin_api_t;

    typedef struct {
	char *packagename;    /* used when this plugin is builtin and has
					no pathname */
	gvplugin_api_t *apis;
    } gvplugin_library_t;





#line 30 "graphviz-2.38.0\\lib\\common\\render.h" 2
#line 1 "graphviz-2.38.0\\lib\\gvc\\gvcjob.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/

/* Common header used by both clients and plugins */








#line 1 "graphviz-2.38.0\\lib\\gvc\\gvcommon.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/








    typedef struct GVCOMMON_s {
	char **info;
	char *cmdname;
	int verbose;
	boolean config, auto_outfile_names;
        void (*errorfn) (const char *fmt, ...);
	const char **show_boxes; /* emit code for correct box coordinates */
	const char **lib; 

	/* rendering state */
	int viewNum;     /* current view - 1 based count of views,
			    all pages in all layers */
	const lt_symlist_t *builtins;
	int demand_loading;
    } GVCOMMON_t;





#line 21 "graphviz-2.38.0\\lib\\gvc\\gvcjob.h" 2
#line 1 "graphviz-2.38.0\\lib\\common\\color.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/











    
    
    




		



    
	
	
	
	
	
	
	
    
    










#line 22 "graphviz-2.38.0\\lib\\gvc\\gvcjob.h" 2



    typedef struct gvdevice_engine_s gvdevice_engine_t;
    typedef struct gvformatter_engine_s gvformatter_engine_t;
    typedef struct gvrender_engine_s gvrender_engine_t;
    typedef struct gvlayout_engine_s gvlayout_engine_t;
    typedef struct gvtextlayout_engine_s gvtextlayout_engine_t;
    typedef struct gvloadimage_engine_s gvloadimage_engine_t;

    typedef enum { PEN_NONE, PEN_DASHED, PEN_DOTTED, PEN_SOLID } pen_type;
    typedef enum { FILL_NONE, FILL_SOLID, FILL_LINEAR, FILL_RADIAL } fill_type;
    typedef enum { FONT_REGULAR, FONT_BOLD, FONT_ITALIC } font_type;
    typedef enum { LABEL_PLAIN, LABEL_HTML } label_type;



    typedef enum { GVATTR_STRING, GVATTR_BOOL, GVATTR_COLOR } gvattr_t;

/* The -T output formats listed below are examples only, they are not definitive or inclusive,
 other outputs may use the flags now, or in the future 

                   Default emit order is breadth first graph walk order 
 EMIT_SORTED			emits nodes before edges		
 EMIT_COLORS			emits colors before nodes or edge -Tfig 
 EMIT_CLUSTERS_LAST		emits cluster after nodes and edges 	
 EMIT_PREORDER			emit in preorder traversal ???		
 EMIT_EDGE_SORTED		emits edges before nodes		

 GVDEVICE_DOES_PAGES		provides pagination support -Tps	
 GVDEVICE_DOES_LAYERS		provides support for layers -Tps	
 GVDEVICE_EVENTS		supports mouse events -Tgtk, -Txlib	
 GVDEVICE_DOES_TRUECOLOR	supports alpha channel -Tpng, -Tgtk, -Txlib 
 GVDEVICE_BINARY_FORMAT		Suppresses \r\n substitution for linends 
 GVDEVICE_COMPRESSED_FORMAT	controls libz compression		
 GVDEVICE_NO_WRITER		used when gvdevice is not used because device uses its own writer, -Tming, devil outputs   (FIXME seems to overlap OUTPUT_NOT_REQUIRED)

 GVRENDER_Y_GOES_DOWN		device origin top left, y goes down, otherwise
  				device origin lower left, y goes up	
 GVRENDER_DOES_TRANSFORM	device uses scale, translate, rotate to do its own
 				coordinate transformations, otherwise coordinates 
  				are pre-transformed			
 GVRENDER_DOES_ARROWS		renderer has its own idea of arrow shapes (deprecated) 
 GVRENDER_DOES_LABELS		basically, maps don't need labels	
 GVRENDER_DOES_MAPS		renderer encodes mapping information for mouse events -Tcmapx -Tsvg 
 GVRENDER_DOES_MAP_RECTANGLE	supports a 2 coord rectngle optimization 
 GVRENDER_DOES_MAP_CIRCLE	supports a 1 coord + radius circle optimization	
 GVRENDER_DOES_MAP_POLYGON	supports polygons (basically, -Tsvg uses anchors, so doesn't need to support any map shapes) 
 GVRENDER_DOES_MAP_ELLIPSE	supports a 2 coord ellipse optimization	
 GVRENDER_DOES_MAP_BSPLINE	supports mapping of splines		
 GVRENDER_DOES_TOOLTIPS		can represent tooltip info -Tcmapx, -Tsvg		
 GVRENDER_DOES_TARGETS		can represent target info (open link in a new tab or window) 
 GVRENDER_DOES_Z		render support 2.5D representation -Tvrml 
 GVRENDER_NO_WHITE_BG		don't paint white background, assumes white paper -Tps 
 LAYOUT_NOT_REQUIRED 		don't perform layout -Tcanon 		
 OUTPUT_NOT_REQUIRED		don't use gvdevice for output (basically when agwrite() used instead) -Tcanon, -Txdot 
 */































    typedef struct {
	int flags;
	double default_pad;	/* graph units */
	char **knowncolors;
	int sz_knowncolors;
	color_type_t color_type;
    } gvrender_features_t;

    typedef struct {
	int flags;
	pointf default_margin;  /* left/right, top/bottom - points */
	pointf default_pagesize;/* default page width, height - points */
	pointf default_dpi;
    } gvdevice_features_t;



    typedef struct gvplugin_active_device_s {
        gvdevice_engine_t *engine;
        int id;
        gvdevice_features_t *features;
        const char *type;
    } gvplugin_active_device_t;

    typedef struct gvplugin_active_render_s {
        gvrender_engine_t *engine;
        int id;
        gvrender_features_t *features;
        const char *type;
    } gvplugin_active_render_t;

    typedef struct gvplugin_active_loadimage_t {
	gvloadimage_engine_t *engine;
	int id;
	const char *type;
    } gvplugin_active_loadimage_t;

    typedef struct gv_argvlist_s {
	char **argv;
	int argc;
	int alloc;
    } gv_argvlist_t;
    
    typedef struct gvdevice_callbacks_s {
	void (*refresh) (GVJ_t * job);
        void (*button_press) (GVJ_t * job, int button, pointf pointer);
        void (*button_release) (GVJ_t * job, int button, pointf pointer);
        void (*motion) (GVJ_t * job, pointf pointer);
        void (*modify) (GVJ_t * job, const char *name, const char *value);
        void (*del) (GVJ_t * job);  /* can't use "delete" 'cos C++ stole it */
        void (*read) (GVJ_t * job, const char *filename, const char *layout);
        void (*layout) (GVJ_t * job, const char *layout);
        void (*render) (GVJ_t * job, const char *format, const char *filename);
    } gvdevice_callbacks_t;

    typedef int (*gvevent_key_callback_t) (GVJ_t * job);

    typedef struct gvevent_key_binding_s {
	char *keystring;
	gvevent_key_callback_t callback;
    } gvevent_key_binding_t;

    typedef enum {MAP_RECTANGLE, MAP_CIRCLE, MAP_POLYGON, } map_shape_t;

    typedef enum {ROOTGRAPH_OBJTYPE, CLUSTER_OBJTYPE, NODE_OBJTYPE, EDGE_OBJTYPE} obj_type;

    /* If this enum is changed, the implementation of xbuf and xbufs in
     * gvrender_core_dot.c will probably need to be changed.
     */
    typedef enum {
	EMIT_GDRAW, EMIT_CDRAW, EMIT_TDRAW, EMIT_HDRAW, 
	EMIT_GLABEL, EMIT_CLABEL, EMIT_TLABEL, EMIT_HLABEL, 
	EMIT_NDRAW, EMIT_EDRAW, EMIT_NLABEL, EMIT_ELABEL,
    } emit_state_t;

    typedef struct obj_state_s obj_state_t;

    struct obj_state_s {
	obj_state_t *parent;

	obj_type type;
	union {
	    graph_t *g;
	    graph_t *sg;  
	    node_t *n;
	    edge_t *e;
	} u;

	emit_state_t emit_state; 

	gvcolor_t pencolor, fillcolor, stopcolor;
	int gradient_angle;
	float gradient_frac;
	pen_type pen;
	fill_type fill;
	double penwidth;
	char **rawstyle;

	double z, tail_z, head_z;   /* z depths for 2.5D renderers such as vrml */

	/* fully substituted text strings */
	char *label;
	char *xlabel;
	char *taillabel;
	char *headlabel; 

	char *url;              /* if GVRENDER_DOES_MAPS */
	char *id;
	char *labelurl;
	char *tailurl;
	char *headurl; 

	char *tooltip;          /* if GVRENDER_DOES_TOOLTIPS */
	char *labeltooltip;
	char *tailtooltip;
	char *headtooltip; 

	char *target;           /* if GVRENDER_DOES_TARGETS */
	char *labeltarget;
	char *tailtarget;
	char *headtarget; 

	int explicit_tooltip:1;
	int explicit_tailtooltip:1;
	int explicit_headtooltip:1;
	int explicit_labeltooltip:1;
	int explicit_tailtarget:1;
	int explicit_headtarget:1;
	int explicit_edgetarget:1;
	int explicit_tailurl:1;
	int explicit_headurl:1;

	/* primary mapped region - node shape, edge labels */
	map_shape_t url_map_shape; 
	int url_map_n;                  /* number of points for url map if GVRENDER_DOES_MAPS */
	pointf *url_map_p;

	/* additonal mapped regions for edges */
	int url_bsplinemap_poly_n;      /* number of polygons in url bspline map
					 if GVRENDER_DOES_MAPS && GVRENDER_DOES_MAP_BSPLINES */
	int *url_bsplinemap_n;          /* array of url_bsplinemap_poly_n ints 
					 of number of points in each polygon */
	pointf *url_bsplinemap_p;       /* all the polygon points */

	int tailendurl_map_n;           /* tail end intersection with node */
	pointf *tailendurl_map_p;

	int headendurl_map_n;           /* head end intersection with node */
	pointf *headendurl_map_p;
    };

/* Note on units:
 *     points  - a physical distance (1/72 inch) unaffected by zoom or dpi.
 *     graph units - related to physical distance by zoom.  Equals points at zoom=1
 *     device units - related to physical distance in points by dpi/72
 */

    struct GVJ_s {
	GVC_t *gvc;		/* parent gvc */
	GVJ_t *next;		/* linked list of jobs */
	GVJ_t *next_active;	/* linked list of active jobs (e.g. multiple windows) */

	GVCOMMON_t *common;

	obj_state_t *obj;	/* objects can be nested (at least clusters can)
					so keep object state on a stack */
	char *input_filename;
	int graph_index;

	const char *layout_type;

	const char *output_filename;
	FILE *output_file;
	char *output_data;
	unsigned int output_data_allocated;
	unsigned int output_data_position;

	const char *output_langname;
	int output_lang;

	gvplugin_active_render_t render;
	gvplugin_active_device_t device;
	gvplugin_active_loadimage_t loadimage;
	gvdevice_callbacks_t *callbacks;
	pointf device_dpi;
	boolean device_sets_dpi;

	void *display;
	int screen;

	void *context;		/* gd or cairo surface */
	boolean external_context;	/* context belongs to caller */
	char *imagedata;	/* location of imagedata */

        int flags;		/* emit_graph flags */

	int numLayers;		/* number of layers */
	int layerNum;		/* current layer - 1 based*/

	point 	pagesArraySize; /* 2D size of page array */
	point	pagesArrayFirst;/* 2D starting corner in */
	point	pagesArrayMajor;/* 2D major increment */
	point	pagesArrayMinor;/* 2D minor increment */
	point	pagesArrayElem; /* 2D coord of current page - 0,0 based */
        int	numPages;	/* number of pages */

	boxf    bb;		/* graph bb with padding - graph units */
	pointf  pad;		/* padding around bb - graph units */
	boxf    clip;		/* clip region in graph units */
	boxf	pageBox;	/* current page in graph units */
	pointf	pageSize;	/* page size in graph units */
	pointf  focus;		/* viewport focus - graph units */

	double  zoom;		/* viewport zoom factor (points per graph unit) */
	int	rotation;	/* viewport rotation (degrees)  0=portrait, 90=landscape */

	pointf  view;		/* viewport size - points */
	boxf	canvasBox;	/* viewport area - points */
        pointf  margin;		/* job-specific margin - points */

	pointf	dpi;		/* device resolution device-units-per-inch */

        unsigned int width;     /* device width - device units */
        unsigned int height;    /* device height - device units */
	box     pageBoundingBox;/* rotated boundingBox - device units */
	box     boundingBox;    /* cumulative boundingBox over all pages - device units */

	pointf  scale;		/* composite device to graph units (zoom and dpi) */
	pointf  translation;    /* composite translation */
	pointf  devscale;	/* composite device to points: dpi, y_goes_down */

	boolean	fit_mode,
		needs_refresh,
		click,
		has_grown,
		has_been_rendered;

	unsigned char button;   /* active button */
	pointf pointer;		/* pointer position in device units */
	pointf oldpointer;	/* old pointer position in device units */

	void *current_obj;      /* graph object that pointer is in currently */

	void *selected_obj;      /* graph object that has been selected */
					/* (e.g. button 1 clicked on current obj) */
	char *active_tooltip;		/* tooltip of active object - or NULL */
	char *selected_href;		/* href of selected object - or NULL */
	gv_argvlist_t selected_obj_type_name; /* (e.g. "edge" "node3" "e" "->" "node5" "") */
	gv_argvlist_t selected_obj_attributes; /* attribute triplets: name, value, type */
				/* e.g. "color", "red", GVATTR_COLOR,
					"style", "filled", GVATTR_BOOL, */

	void *window;		/* display-specific data for gvrender plugin */

        /* keybindings for keyboard events */
	gvevent_key_binding_t *keybindings;
	int numkeys;
	void *keycodes;
    };





#line 31 "graphviz-2.38.0\\lib\\common\\render.h" 2
#line 1 "graphviz-2.38.0\\lib\\gvc\\gvcint.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/

/* Common header used by both clients and plugins */








#line 1 "graphviz-2.38.0\\lib\\cdt\\cdt.h" 1




























































	
	
	  
	





	





	





	
	
	
	  
	
	
	
	
	
				





	
	
	
	
	
	
	
	

















	
	
	
	
	
	
	
	
	





	
	
	
	























































































































































































#line 21 "graphviz-2.38.0\\lib\\gvc\\gvcint.h" 2
#line 1 "graphviz-2.38.0\\lib\\gvc\\gvcommon.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/








    
	
	
	
	
        
	
	

	
	
	
	
    





#line 22 "graphviz-2.38.0\\lib\\gvc\\gvcint.h" 2
#line 1 "graphviz-2.38.0\\lib\\common\\color.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/











    
    
    




		



    
	
	
	
	
	
	
	
    
    










#line 23 "graphviz-2.38.0\\lib\\gvc\\gvcint.h" 2

    /* active plugin headers */
    typedef struct gvplugin_active_layout_s {
        gvlayout_engine_t *engine;
        int id;
        gvlayout_features_t *features;
        const char *type;
    } gvplugin_active_layout_t;

    typedef struct gvplugin_active_textlayout_s {
        gvtextlayout_engine_t *engine;
        int id;
        char *type;
    } gvplugin_active_textlayout_t;

    typedef struct gvplugin_package_s gvplugin_package_t;

    struct gvplugin_package_s {
        gvplugin_package_t *next;
        char *path;
        char *name;
    };

    struct gvplugin_available_s {
	gvplugin_available_t *next;     /* next plugin in linked list, or NULL */
	const char *typestr;		/* type string, e.g. "png" or "ps" */
	int quality;			/* Programmer assigned quality ranking within type (+ve or -ve int).
					First implementation of type should be given "0" quality */
	gvplugin_package_t *package;	/* details of library containing plugin */
	gvplugin_installed_t *typeptr;  /* pointer to jumptable for plugin,
					or NULL if not yet loaded */
    };

    struct GVG_s {
	GVC_t *gvc;	/* parent gvc */
	GVG_t *next;	/* next gvg in list */

	char *input_filename; /* or NULL if stdin */
	int graph_index;  /* index of graph within input_file */
	graph_t *g;
    };



    struct GVC_s {
	GVCOMMON_t common;

	char *config_path;
	boolean config_found;

	/* gvParseArgs */
	char **input_filenames; /* null terminated array of input filenames */

	/* gvNextInputGraph() */
	GVG_t *gvgs;	/* linked list of graphs */
	GVG_t *gvg;	/* current graph */

	/* plugins */

	/* APIS expands to "+1 +1 ... +1" to give the number of APIs */
	gvplugin_available_t *apis[ +1 +1 +1 +1 +1 ]; /* array of linked-list of plugins per api */
	gvplugin_available_t *api[ +1 +1 +1 +1 +1 ];  /* array of current plugins per api */

	gvplugin_package_t *packages;   /* list of available packages */

        /* externally provided write() displine */
	size_t (*write_fn) (GVJ_t *job, const char *s, size_t len);

	/* fonts and textlayout */
	Dtdisc_t textfont_disc;
	Dt_t *textfont_dt;
	gvplugin_active_textlayout_t textlayout; /* always use best avail for all jobs */
//	void (*free_layout) (void *layout);   /* function for freeing layouts (mostly used by pango) */
	
/* FIXME - everything below should probably move to GVG_t */

	/* gvrender_config() */
	GVJ_t *jobs;	/* linked list of jobs */
	GVJ_t *job;	/* current job */

	graph_t *g;      /* current graph */

	/* gvrender_begin_job() */
	gvplugin_active_layout_t layout;

	char *graphname;	/* name from graph */
	GVJ_t *active_jobs;   /* linked list of active jobs */

	/* pagination */
	char *pagedir;		/* pagination order */
	pointf margin;		/* margins in graph units */
	pointf pad;		/* pad in graph units */
	pointf pageSize;	/* pageSize in graph units, not including margins */
	point pb;		/* page size - including margins (inches) */
	boxf bb;		/* graph bb in graph units, not including margins */
	int rotation;		/* rotation - 0 = portrait, 90 = landscape */
	boolean graph_sets_pad, graph_sets_margin, graph_sets_pageSize, graph_sets_rotation;

	/* layers */
	char *layerDelims;	/* delimiters in layer names */
	char *layerListDelims;	/* delimiters between layer ranges */ 
	char *layers;		/* null delimited list of layer names */
	char **layerIDs;	/* array of layer names */
	int numLayers;		/* number of layers */
	int *layerlist;

	/* default font */
	char *defaultfontname;
	double defaultfontsize;

	/* default line style */
	char **defaultlinestyle;

	/* render defaults set from graph */
	gvcolor_t bgcolor;	/* background color */

	/* whether to mangle font names (at least in SVG), usually false */
	int fontrenaming;
    };











#line 32 "graphviz-2.38.0\\lib\\common\\render.h" 2
#line 1 "graphviz-2.38.0\\lib\\gvc\\gvcproc.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/

/* This is the public header for the callers of libgvc */




#line 1 "graphviz-2.38.0\\lib\\gvc\\gvc.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/




#line 1 "graphviz-2.38.0\\lib\\common\\types.h" 1
/* lib/common/types.h.  Generated from types.h.in by configure.  */
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/


































    
    
    
    
    
    



    

    
	
	    
	    
	
	
	    
	    
	
    

    
	
	
	
	
	
	
	
	
	
	
    

    
	
	
	
	
    

    
	
	
	
	
	
    

    
	
	
	
	
    

    
	
	
	
	
    

    
	
	
	
    

    
	
	
	
	
	
		      
		      
	
	
	    
		
		
	    
	    
	
	
	
	
    

    
	
	
	
	
	
	
	
	
    

    
	
	
	
	
    









    
	
	
	

    

    
	
	
	 
	 
	
	
    

    

    
	
	
	
	
    



    
	
    

    
	
	
    

    
	
	
	
	
	
	
	
	
	
	
    

    
	    

    
	
	
	
	
	
	
	
	
	
	
	
	
	
    


    
	
	
	
	
	
	
	
	
    

    
	
	
    

    
	
	
    















    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


	
	
	
	
	
	


	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	

	
	
	
	
	
	

	
	

	
	
	
	
	
	
	


    

































































    
	
	
	
	
	
	
	
	
	
	
	
	
	


	
	
	


	
	
	
	

	
	
	
	
	
	

	
	
	
	

	
	
	
	

	
	
	
	
	

	


    




























































    
	
	
	
	
	
	
	
	
	
	


	
	
	


	
	
	
	
	
	
	
	

    






































    
	
    





#line 17 "graphviz-2.38.0\\lib\\gvc\\gvc.h" 2
#line 1 "graphviz-2.38.0\\lib\\gvc\\gvplugin.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/

/* Header used by plugins */


















    
	
	
	
	
	
    

    
	
	
    

    
	
	
    





#line 18 "graphviz-2.38.0\\lib\\gvc\\gvc.h" 2











/*visual studio*/






/*end visual studio*/
	


/* misc */
/* FIXME - this needs eliminating or renaming */
 void gvToggle(int);

/* set up a graphviz context */
 GVC_t *gvNEWcontext(const lt_symlist_t *builtins, int demand_loading);

/*  set up a graphviz context - and init graph - retaining old API */
 GVC_t *gvContext(void);
/*  set up a graphviz context - and init graph - with builtins */
 GVC_t *gvContextPlugins(const lt_symlist_t *builtins, int demand_loading);

/* get information associated with a graphviz context */
 char **gvcInfo(GVC_t*);
 char *gvcVersion(GVC_t*);
 char *gvcBuildDate(GVC_t*);

/* parse command line args - minimally argv[0] sets layout engine */
 int gvParseArgs(GVC_t *gvc, int argc, char **argv);
 graph_t *gvNextInputGraph(GVC_t *gvc);
 graph_t *gvPluginsGraph(GVC_t *gvc);

/* Compute a layout using a specified engine */
 int gvLayout(GVC_t *gvc, graph_t *g, const char *engine);

/* Compute a layout using layout engine from command line args */
 int gvLayoutJobs(GVC_t *gvc, graph_t *g);

/* Render layout into string attributes of the graph */
 void attach_attrs(graph_t *g);

/* Render layout in a specified format to an open FILE */
 int gvRender(GVC_t *gvc, graph_t *g, const char *format, FILE *out);

/* Render layout in a specified format to an open FILE */
 int gvRenderFilename(GVC_t *gvc, graph_t *g, const char *format, const char *filename);

/* Render layout in a specified format to an external context */
 int gvRenderContext(GVC_t *gvc, graph_t *g, const char *format, void *context);

/* Render layout in a specified format to a malloc'ed string */
 int gvRenderData(GVC_t *gvc, graph_t *g, const char *format, char **result, unsigned int *length);

/* Free memory allocated and pointed to by *result in gvRenderData */
 void gvFreeRenderData (char* data);

/* Render layout according to -T and -o options found by gvParseArgs */
 int gvRenderJobs(GVC_t *gvc, graph_t *g);

/* Clean up layout data structures - layouts are not nestable (yet) */
 int gvFreeLayout(GVC_t *gvc, graph_t *g);

/* Clean up graphviz context */
 void gvFinalize(GVC_t *gvc);
 int gvFreeContext(GVC_t *gvc);

/* Return list of plugins of type kind.
 * kind would normally be "render" "layout" "textlayout" "device" "loadimage"
 * The size of the list is stored in sz.
 * The caller is responsible for freeing the storage. This involves
 * freeing each item, then the list.
 * Returns NULL on error, or if there are no plugins.
 * In the former case, sz is unchanged; in the latter, sz = 0.
 *
 * At present, the str argument is unused, but may be used to modify
 * the search as in gvplugin_list above.
 */
 char** gvPluginList (GVC_t *gvc, char* kind, int* sz, char*);

/** Add a library from your user application
 * @param gvc Graphviz context to add library to
 * @param lib library to add
 */

 void gvAddLibrary(GVC_t *gvc, gvplugin_library_t *lib);








#line 19 "graphviz-2.38.0\\lib\\gvc\\gvcproc.h" 2

/* these are intended to be private entry points - see gvc.h for the public ones */

/* configuration */

    extern char *gvconfig_libdir(GVC_t * gvc);
    extern void gvconfig(GVC_t * gvc, boolean rescan);
    extern char *gvhostname(void);

/* plugins */

    extern boolean gvplugin_install(GVC_t * gvc, api_t api,
		    const char *typestr, int quality, gvplugin_package_t *package,
		    gvplugin_installed_t * typeptr);
    extern gvplugin_available_t *gvplugin_load(GVC_t * gvc, api_t api, const char *type);
    extern gvplugin_library_t *gvplugin_library_load(GVC_t *gvc, char *path);
    extern api_t gvplugin_api(char *str);
    extern char * gvplugin_api_name(api_t api);
    extern void gvplugin_write_status(GVC_t * gvc);
    extern char *gvplugin_list(GVC_t * gvc, api_t api, const char *str);

    extern Agraph_t * gvplugin_graph(GVC_t * gvc);

/* job */

    extern void gvjobs_output_filename(GVC_t * gvc, const char *name);
    extern boolean gvjobs_output_langname(GVC_t * gvc, const char *name);
    extern GVJ_t *gvjobs_first(GVC_t * gvc);
    extern GVJ_t *gvjobs_next(GVC_t * gvc);
    extern void gvjobs_delete(GVC_t * gvc);

/* emit */
    extern void gvemit_graph(GVC_t * gvc, graph_t * g);

/* textlayout */

    extern int gvtextlayout_select(GVC_t * gvc);
    extern boolean gvtextlayout(GVC_t *gvc, textspan_t *span, char **fontpath);

/* loadimage */
    extern void gvloadimage(GVJ_t *job, usershape_t *us, boxf b, boolean filled, const char *target);
    
/* usershapes */
    extern point gvusershape_size_dpi(usershape_t *us, pointf dpi);
    extern point gvusershape_size(graph_t *g, char *name);
    extern usershape_t *gvusershape_find(char *name);

/* device */
    extern int gvdevice_initialize(GVJ_t * job);
    extern void gvdevice_format(GVJ_t * job);
    extern void gvdevice_finalize(GVJ_t * job);

/* render */

    extern pointf gvrender_ptf(GVJ_t *job, pointf p);
    extern pointf* gvrender_ptf_A(GVJ_t *job, pointf *af, pointf *AF, int n);

    extern int gvrender_begin_job(GVJ_t * job);
    extern void gvrender_end_job(GVJ_t * job);
    extern int gvrender_select(GVJ_t * job, const char *lang);
    extern int gvrender_features(GVJ_t * job);
    extern void gvrender_begin_graph(GVJ_t * job, graph_t * g);
    extern void gvrender_end_graph(GVJ_t * job);
    extern void gvrender_begin_page(GVJ_t * job);
    extern void gvrender_end_page(GVJ_t * job);
    extern void gvrender_begin_layer(GVJ_t * job);
    extern void gvrender_end_layer(GVJ_t * job);
    extern void gvrender_begin_cluster(GVJ_t * job, graph_t * sg);
    extern void gvrender_end_cluster(GVJ_t * job, graph_t *g);
    extern void gvrender_begin_nodes(GVJ_t * job);
    extern void gvrender_end_nodes(GVJ_t * job);
    extern void gvrender_begin_edges(GVJ_t * job);
    extern void gvrender_end_edges(GVJ_t * job);
    extern void gvrender_begin_node(GVJ_t * job, node_t * n);
    extern void gvrender_end_node(GVJ_t * job);
    extern void gvrender_begin_edge(GVJ_t * job, edge_t * e);
    extern void gvrender_end_edge(GVJ_t * job);
    extern void gvrender_begin_anchor(GVJ_t * job,
		char *href, char *tooltip, char *target, char *id);
    extern void gvrender_end_anchor(GVJ_t * job);
    extern void gvrender_begin_label(GVJ_t * job, label_type type);
    extern void gvrender_end_label(GVJ_t * job);
    extern void gvrender_textspan(GVJ_t * job, pointf p, textspan_t * span);
    extern void gvrender_set_pencolor(GVJ_t * job, char *name);
    extern void gvrender_set_penwidth(GVJ_t * job, double penwidth);
    extern void gvrender_set_fillcolor(GVJ_t * job, char *name);
    extern void gvrender_set_gradient_vals (GVJ_t * job, char *stopcolor, int angle, float frac);

    extern void gvrender_set_style(GVJ_t * job, char **s);
    extern void gvrender_ellipse(GVJ_t * job, pointf * AF, int n, int filled);
    extern void gvrender_polygon(GVJ_t* job, pointf* af, int n, int filled);
    extern void gvrender_box(GVJ_t * job, boxf BF, int filled);
    extern void gvrender_beziercurve(GVJ_t * job, pointf * AF, int n,
			int arrow_at_start, int arrow_at_end, boolean filled);
    extern void gvrender_polyline(GVJ_t * job, pointf * AF, int n);
    extern void gvrender_comment(GVJ_t * job, char *str);
    extern void gvrender_usershape(GVJ_t * job, char *name, pointf * AF, int n, boolean filled, char *imagescale);

/* layout */

    extern int gvlayout_select(GVC_t * gvc, const char *str);
    extern int gvFreeLayout(GVC_t * gvc, Agraph_t * g);
    extern int gvLayoutJobs(GVC_t * gvc, Agraph_t * g);

/* argvlist */
    extern gv_argvlist_t *gvNEWargvlist(void);
    extern void gv_argvlist_set_item(gv_argvlist_t *list, int index, char *item);
    extern void gv_argvlist_reset(gv_argvlist_t *list);
    extern void gv_argvlist_free(gv_argvlist_t *list);




#line 33 "graphviz-2.38.0\\lib\\common\\render.h" 2

    typedef struct epsf_s {
	int macro_id;
	point offset;
    } epsf_t;

    typedef void (*nodesizefn_t) (Agnode_t *, boolean);

/*visual studio*/





/*end visual studio*/

	extern void add_box(path *, boxf);
    extern void arrow_flags(Agedge_t * e, int *sflag, int *eflag);
    extern boxf arrow_bb(pointf p, pointf u, double arrowsize, int flag);
    extern void arrow_gen(GVJ_t * job, emit_state_t emit_state, pointf p, pointf u,
			  double arrowsize, double penwidth, int flag);
    extern double arrow_length(edge_t * e, int flag);
    extern int arrowEndClip(edge_t*, pointf*, int, int , bezier*, int eflag);
    extern int arrowStartClip(edge_t*, pointf* ps, int, int, bezier*, int sflag);
    extern void arrowOrthoClip(edge_t*, pointf* ps, int, int, bezier*, int sflag, int eflag);
    extern void beginpath(path *, Agedge_t *, int, pathend_t *, boolean);
    extern void bezier_clip(inside_t * inside_context,
			    boolean(*insidefn) (inside_t * inside_context,
						pointf p), pointf * sp,
			    boolean left_inside);
    extern shape_desc *bind_shape(char *name, node_t *);
    extern void makeStraightEdge(graph_t * g, edge_t * e, int edgetype, splineInfo * info);
    extern void makeStraightEdges(graph_t* g, edge_t** edges, int e_cnt, int et, splineInfo* sinfo);
    extern void clip_and_install(edge_t * fe, node_t * hn,
	pointf * ps, int pn, splineInfo * info);
    extern char* charsetToStr (int c);
    extern pointf coord(node_t * n);
    extern void do_graph_label(graph_t * sg);
    extern void graph_init(graph_t * g, boolean use_rankdir);
    extern void graph_cleanup(graph_t * g);
    extern int dotneato_args_initialize(GVC_t * gvc, int, char **);
    extern int dotneato_usage(int);
    extern void dotneato_postprocess(Agraph_t *);
    extern void gv_postprocess(Agraph_t *, int);
    extern void dotneato_set_margins(GVC_t * gvc, Agraph_t *);
    extern void dotneato_write(GVC_t * gvc, graph_t *g);
    extern void dotneato_write_one(GVC_t * gvc, graph_t *g);
    extern Ppolyline_t* ellipticWedge (pointf ctr, double major, double minor, double angle0, double angle1);
    extern void emit_clusters(GVJ_t * job, Agraph_t * g, int flags);
    extern char* getObjId (GVJ_t* job, void* obj, agxbuf* xb);
    /* extern void emit_begin_edge(GVJ_t * job, edge_t * e, char**); */
    /* extern void emit_end_edge(GVJ_t * job); */
    extern void emit_graph(GVJ_t * job, graph_t * g);
    extern void emit_label(GVJ_t * job, emit_state_t emit_state, textlabel_t *);
    extern int emit_once(char *message);
    extern void emit_jobs_eof(GVC_t * gvc);
    extern void emit_map_rect(GVJ_t *job, boxf b);
    extern void enqueue_neighbors(nodequeue *, Agnode_t *, int);
    extern void endpath(path *, Agedge_t *, int, pathend_t *, boolean);
    extern void epsf_init(node_t * n);
    extern void epsf_free(node_t * n);
    extern shape_desc *find_user_shape(const char *);
    extern void free_line(textspan_t *);
    extern void free_label(textlabel_t *);
    extern void free_textspan(textspan_t * tl, int);
    extern void getdouble(graph_t * g, char *name, double *result);
    extern splines *getsplinepoints(edge_t * e);
    extern void gv_fixLocale (int set);
    extern void gv_free_splines(edge_t * e);
    extern void gv_cleanup_edge(Agedge_t * e);
    extern void gv_cleanup_node(Agnode_t * n);
    extern void* init_xdot (Agraph_t* g);
    extern int initMapData (GVJ_t*, char*, char*, char*, char*, char*, void*);
    extern boolean isPolygon(node_t *);
    extern void makeSelfEdge(path * P, edge_t * edges[], int ind, int cnt,
	double sizex, double sizey, splineInfo * sinfo);
    extern textlabel_t *make_label(void *obj, char *str, int kind, double fontsize, char *fontname, char *fontcolor);
    extern bezier *new_spline(edge_t * e, int sz);
    extern char **parse_style(char *s);
    extern void place_graph_label(Agraph_t *);
    extern int place_portlabel(edge_t * e, boolean head_p);
    extern void makePortLabels(edge_t * e);
    extern pointf edgeMidpoint(graph_t* g, edge_t * e);
    extern void addEdgeLabels(graph_t* g, edge_t * e, pointf rp, pointf rq);
    extern void pop_obj_state(GVJ_t *job);
    extern obj_state_t* push_obj_state(GVJ_t *job);
    extern int rank(graph_t * g, int balance, int maxiter);
    extern port resolvePort(node_t*  n, node_t* other, port* oldport);
    extern void resolvePorts (edge_t* e);
    extern void round_corners(GVJ_t * job, pointf * AF, int sides, int style, int filled);
    extern int routesplinesinit(void);
    extern pointf *routesplines(path *, int *);
    extern void routesplinesterm(void);
    extern pointf* simpleSplineRoute (pointf, pointf, Ppoly_t, int*, int);
    extern pointf *routepolylines(path* pp, int* npoints);
    extern int selfRightSpace (edge_t* e);
    extern void setup_graph(GVC_t * gvc, graph_t * g);
    extern shape_kind shapeOf(node_t *);
    extern void shape_clip(node_t * n, pointf curve[4]);
    extern void make_simple_label (GVC_t * gvc, textlabel_t* rv);
    extern int stripedBox (GVJ_t * job, pointf* AF, char* clrs, int rotate);
    extern stroke_t* taper (bezier*, double (*radfunc_t)(double,double,double), double initwid, int linejoin, int linecap);
    extern stroke_t* taper0 (bezier* bez, double initwid);
    extern pointf textspan_size(GVC_t * gvc, textspan_t * span);
    extern Dt_t * textfont_dict_open(GVC_t *gvc);
    extern void textfont_dict_close(GVC_t *gvc);
    extern void translate_bb(Agraph_t *, int);
    extern int wedgedEllipse (GVJ_t* job, pointf * pf, char* clrs);
    extern void update_bb_bz(boxf *bb, pointf *cp);
    extern void write_attributed_dot(graph_t *g, FILE *f);
    extern void write_canonical_dot(graph_t *g, FILE *f);
    extern boxf xdotBB (graph_t* g);
    extern char *findAttrColor(void *obj, attrsym_t *colorattr, char *dflt);








#line 65 "graphviz-2.38.0\\lib\\common\\htmlparse.c" 2
#line 1 "graphviz-2.38.0\\lib\\common\\htmltable.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/






























    /* spans of text within a cell
     * NOTE: As required, the str field in span is utf-8.
     * This translation is done when libexpat scans the input.
     */
	
    /* line of textspan_t's */
    typedef struct {
	textspan_t *items;
	short nitems;
	char just;
	double size;   /* width of span */
	double lfsize; /* offset from previous baseline to current one */
    } htextspan_t;
	
    typedef struct {
	htextspan_t *spans;
	short nspans;
	char simple;
	boxf box;
    } htmltxt_t;

    typedef struct {
	boxf box;
	char *src;
	char *scale;
    } htmlimg_t;

    typedef struct {
	char *href;		/* pointer to an external resource */
	char *port;
	char *target;
	char *title;
	char *id;
	char *bgcolor;
	char *pencolor;
	int gradientangle;
	signed char space;
	unsigned char border;
	unsigned char pad;
	unsigned char sides;    /* set of sides exposed to field */
	unsigned short flags;
	unsigned short width;
	unsigned short height;
	unsigned short style;
	boxf box;		/* its geometric placement in points */
    } htmldata_t;









    typedef struct htmlcell_t htmlcell_t;
    typedef struct htmltbl_t htmltbl_t;
	
    struct htmltbl_t {
	htmldata_t data;
	union {
	    struct {
		htmlcell_t *parent;	/* enclosing cell */
		htmlcell_t **cells;	/* cells */
	    } n;
	    struct {
		htmltbl_t *prev;	/* stack */
		Dt_t *rows;	/* cells */
	    } p;
	} u;
	signed char cb;		/* cell border */
	int *heights;		/* heights of the rows */
	int *widths;		/* widths of the columns */
	int rc;			/* number of rows */
	int cc;			/* number of columns */
	textfont_t *font;	/* font info */
	unsigned char flags;
    };

    struct htmllabel_t {
	union {
	    htmltbl_t *tbl;
	    htmltxt_t *txt;
	    htmlimg_t *img;
	} u;
	char kind;
    };

    struct htmlcell_t {
	htmldata_t data;
	unsigned short cspan;
	unsigned short rspan;
	unsigned short col;
	unsigned short row;
	htmllabel_t child;
	htmltbl_t *parent;
	unsigned char ruled;
    };

/* During parsing, table contents are stored as rows of cells.
 * A row is a list of cells
 * Rows is a list of rows.
 * pitems are used for both lists.
 */
    typedef struct {
	Dtlink_t link;
	union {
	    Dt_t *rp;
	    htmlcell_t *cp;
	} u;
	unsigned char ruled;
    } pitem;
	
    typedef struct {
        pointf pos;
        textfont_t finfo;
        void *obj;
        graph_t *g;
        char *imgscale;
        char *objid;
        boolean objid_set;
    } htmlenv_t;

    extern htmllabel_t *parseHTML(char *, int *, htmlenv_t *);

    extern int make_html_label(void *obj, textlabel_t * lp);
    extern void emit_html_label(GVJ_t * job, htmllabel_t * lp, textlabel_t *);

    extern void free_html_label(htmllabel_t *, int);
    extern void free_html_data(htmldata_t *);
    extern void free_html_text(htmltxt_t *);

    extern boxf *html_port(node_t * n, char *pname, int* sides);
    extern int html_path(node_t * n, port* p, int side, boxf * rv, int *k);
    extern int html_inside(node_t * n, pointf p, edge_t * e);






#line 66 "graphviz-2.38.0\\lib\\common\\htmlparse.c" 2
#line 1 "graphviz-2.38.0\\lib\\common\\htmllex.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/








#line 1 "graphviz-2.38.0\\lib\\cgraph\\agxbuf.h" 1
/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/











    
	
	
	
	
    





    
			 




    




    




    




    




    











































#line 19 "graphviz-2.38.0\\lib\\common\\htmllex.h" 2

    extern int initHTMLlexer(char *, agxbuf *, htmlenv_t *);
    extern int htmllex(void);
    extern int htmllineno(void);
    extern int clearHTMLlexer(void);
    void htmlerror(const char *);






#line 67 "graphviz-2.38.0\\lib\\common\\htmlparse.c" 2

extern int htmlparse(void);

typedef struct sfont_t {
    textfont_t *cfont;	
    struct sfont_t *pfont;
} sfont_t;

static struct {
  htmllabel_t* lbl;       /* Generated label */
  htmltbl_t*   tblstack;  /* Stack of tables maintained during parsing */
  Dt_t*        fitemList; /* Dictionary for font text items */
  Dt_t*        fspanList; 
  agxbuf*      str;       /* Buffer for text */
  sfont_t*     fontstack;
  GVC_t*       gvc;
} HTMLstate;

/* free_ritem:
 * Free row. This closes and frees row's list, then
 * the pitem itself is freed.
 */
static void
free_ritem(Dt_t* d, pitem* p,Dtdisc_t* ds)
{
  dtclose (p->u.rp);
  free (p);
}

/* free_item:
 * Generic Dt free. Only frees container, assuming contents
 * have been copied elsewhere.
 */
static void
free_item(Dt_t* d, void* p,Dtdisc_t* ds)
{
  free (p);
}

/* cleanTbl:
 * Clean up table if error in parsing.
 */
static void
cleanTbl (htmltbl_t* tp)
{
  dtclose (tp->u.p.rows);
  free_html_data (&tp->data);
  free (tp);
}

/* cleanCell:
 * Clean up cell if error in parsing.
 */
static void
cleanCell (htmlcell_t* cp)
{
  if (cp->child.kind == 1) cleanTbl (cp->child.u.tbl);
  else if (cp->child.kind == 2) free_html_text (cp->child.u.txt);
  free_html_data (&cp->data);
  free (cp);
}

/* free_citem:
 * Free cell item during parsing. This frees cell and pitem.
 */
static void
free_citem(Dt_t* d, pitem* p,Dtdisc_t* ds)
{
  cleanCell (p->u.cp);
  free (p);
}

static Dtdisc_t rowDisc = {
    offsetof(pitem,u),
    sizeof(void*),
    offsetof(pitem,link),
    ((Dtmake_f)0),
    (Dtfree_f)free_ritem,
    ((Dtcompar_f)0),
    ((Dthash_f)0),
    ((Dtmemory_f)0),
    ((Dtevent_f)0)
};
static Dtdisc_t cellDisc = {
    offsetof(pitem,u),
    sizeof(void*),
    offsetof(pitem,link),
    ((Dtmake_f)0),
    (Dtfree_f)free_item,
    ((Dtcompar_f)0),
    ((Dthash_f)0),
    ((Dtmemory_f)0),
    ((Dtevent_f)0)
};

typedef struct {
    Dtlink_t    link;
    textspan_t  ti;
} fitem;

typedef struct {
    Dtlink_t     link;
    htextspan_t  lp;
} fspan;

static void 
free_fitem(Dt_t* d, fitem* p, Dtdisc_t* ds)
{
    if (p->ti.str)
	free (p->ti.str);
    free (p);
}

static void 
free_fspan(Dt_t* d, fspan* p, Dtdisc_t* ds)
{
    textspan_t* ti;

    if (p->lp.nitems) {
	int i;
	ti = p->lp.items;
	for (i = 0; i < p->lp.nitems; i++) {
	    if (ti->str) free (ti->str);
	    ti++;
	}
	free (p->lp.items);
    }
    free (p);
}

static Dtdisc_t fstrDisc = {
    0,
    0,
    offsetof(fitem,link),
    ((Dtmake_f)0),
    (Dtfree_f)free_item,
    ((Dtcompar_f)0),
    ((Dthash_f)0),
    ((Dtmemory_f)0),
    ((Dtevent_f)0)
};


static Dtdisc_t fspanDisc = {
    0,
    0,
    offsetof(fspan,link),
    ((Dtmake_f)0),
    (Dtfree_f)free_item,
    ((Dtcompar_f)0),
    ((Dthash_f)0),
    ((Dtmemory_f)0),
    ((Dtevent_f)0)
};

/* appendFItemList:
 * Append a new fitem to the list.
 */
static void
appendFItemList (agxbuf *ag)
{
    fitem *fi = (fitem*)zmalloc(sizeof(fitem));

    fi->ti.str = strdup((((((ag)->ptr >= (ag)->eptr) ? agxbmore(ag,1) : 0), (int)(*(ag)->ptr++ = ((unsigned char)'\0'))),(char*)((ag)->ptr = (ag)->buf)));
    fi->ti.font = HTMLstate.fontstack->cfont;
    (*(((Dt_t*)(HTMLstate.fitemList))->searchf))((HTMLstate.fitemList),(void*)(fi),0000001);
}	

/* appendFLineList:
 */
static void 
appendFLineList (int v)
{
    int cnt;
    fspan *ln = (fspan*)zmalloc(sizeof(fspan));
    fitem *fi;
    Dt_t *ilist = HTMLstate.fitemList;

    cnt = dtsize(ilist);
    ln->lp.just = v;
    if (cnt) {
        int i = 0;
	ln->lp.nitems = cnt;
	ln->lp.items = (textspan_t*)zmalloc((cnt)*sizeof(textspan_t));

	fi = (fitem*)dtflatten(ilist);
	for (; fi; fi = (fitem*)(((Dtlink_t*)((Dtlink_t*)fi))->right)) {
		/* NOTE: When fitemList is closed, it uses free_item, which only frees the container,
		 * not the contents, so this copy is safe.
		 */
	    ln->lp.items[i] = fi->ti;  
	    i++;
	}
    }
    else {
	ln->lp.items = (textspan_t*)zmalloc(sizeof(textspan_t));
	ln->lp.nitems = 1;
	ln->lp.items[0].str = strdup("");
	ln->lp.items[0].font = HTMLstate.fontstack->cfont;
    }

    (*(((Dt_t*)(ilist))->searchf))((ilist),(void*)(0),0000100);

    (*(((Dt_t*)(HTMLstate.fspanList))->searchf))((HTMLstate.fspanList),(void*)(ln),0000001);
}

static htmltxt_t*
mkText(void)
{
    int cnt;
    Dt_t * ispan = HTMLstate.fspanList;
    fspan *fl ;
    htmltxt_t *hft = (htmltxt_t*)zmalloc(sizeof(htmltxt_t));
    
    if (dtsize (HTMLstate.fitemList)) 
	appendFLineList (0);

    cnt = dtsize(ispan);
    hft->nspans = cnt;
    	
    if (cnt) {
	int i = 0;
	hft->spans = (htextspan_t*)zmalloc((cnt)*sizeof(htextspan_t));	
    	for(fl=(fspan *)(*(((Dt_t*)(ispan))->searchf))((ispan),(void*)(0),0000200); fl; fl=(fspan *)(*(((Dt_t*)(ispan))->searchf))((ispan),(void*)(fl),0000010)) {
    	    hft->spans[i] = fl->lp;
    	    i++;
    	}
    }
    
    (*(((Dt_t*)(ispan))->searchf))((ispan),(void*)(0),0000100);

    return hft;
}

static pitem* lastRow (void)
{
  htmltbl_t* tbl = HTMLstate.tblstack;
  pitem*     sp = (*(((Dt_t*)(tbl->u.p.rows))->searchf))((tbl->u.p.rows),(void*)(0),0000400);
  return sp;
}

/* addRow:
 * Add new cell row to current table.
 */
static pitem* addRow (void)
{
  Dt_t*      dp = dtopen(&cellDisc, Dtqueue);
  htmltbl_t* tbl = HTMLstate.tblstack;
  pitem*     sp = (pitem*)zmalloc(sizeof(pitem));
  sp->u.rp = dp;
  if (tbl->flags & 2)
    sp->ruled = 1;
  (*(((Dt_t*)(tbl->u.p.rows))->searchf))((tbl->u.p.rows),(void*)(sp),0000001);
  return sp;
}

/* setCell:
 * Set cell body and type and attach to row
 */
static void setCell (htmlcell_t* cp, void* obj, int kind)
{
  pitem*     sp = (pitem*)zmalloc(sizeof(pitem));
  htmltbl_t* tbl = HTMLstate.tblstack;
  pitem*     rp = (pitem*)(*(((Dt_t*)(tbl->u.p.rows))->searchf))((tbl->u.p.rows),(void*)(0),0000400);
  Dt_t*      row = rp->u.rp;
  sp->u.cp = cp;
  (*(((Dt_t*)(row))->searchf))((row),(void*)(sp),0000001);
  cp->child.kind = kind;
  if (tbl->flags & 1)
    cp->ruled = 1;
  
  if(kind == 2)
  	cp->child.u.txt = (htmltxt_t*)obj;
  else if (kind == 3)
    cp->child.u.img = (htmlimg_t*)obj;
  else
    cp->child.u.tbl = (htmltbl_t*)obj;
}

/* mkLabel:
 * Create label, given body and type.
 */
static htmllabel_t* mkLabel (void* obj, int kind)
{
  htmllabel_t* lp = (htmllabel_t*)zmalloc(sizeof(htmllabel_t));

  lp->kind = kind;
  if (kind == 2)
    lp->u.txt = (htmltxt_t*)obj;
  else
    lp->u.tbl = (htmltbl_t*)obj;
  return lp;
}

/* freeFontstack:
 * Free all stack items but the last, which is
 * put on artificially during in parseHTML.
 */
static void
freeFontstack(void)
{
    sfont_t* s;
    sfont_t* next;

    for (s = HTMLstate.fontstack; (next = s->pfont); s = next) {
	free(s);
    }
}

/* cleanup:
 * Called on error. Frees resources allocated during parsing.
 * This includes a label, plus a walk down the stack of
 * tables. Note that we use the free_citem function to actually
 * free cells.
 */
static void cleanup (void)
{
  htmltbl_t* tp = HTMLstate.tblstack;
  htmltbl_t* next;

  if (HTMLstate.lbl) {
    free_html_label (HTMLstate.lbl,1);
    HTMLstate.lbl = NULL;
  }
  cellDisc.freef = (Dtfree_f)free_citem;
  while (tp) {
    next = tp->u.p.prev;
    cleanTbl (tp);
    tp = next;
  }
  cellDisc.freef = (Dtfree_f)free_item;

  fstrDisc.freef = (Dtfree_f)free_fitem;
  (*(((Dt_t*)(HTMLstate.fitemList))->searchf))((HTMLstate.fitemList),(void*)(0),0000100);
  fstrDisc.freef = (Dtfree_f)free_item;

  fspanDisc.freef = (Dtfree_f)free_fspan;
  (*(((Dt_t*)(HTMLstate.fspanList))->searchf))((HTMLstate.fspanList),(void*)(0),0000100);
  fspanDisc.freef = (Dtfree_f)free_item;

  freeFontstack();
}

/* nonSpace:
 * Return 1 if s contains a non-space character.
 */
static int nonSpace (char* s)
{
  char   c;

  while ((c = *s++)) {
    if (c != ' ') return 1;
  }
  return 0;
}

/* pushFont:
 * Fonts are allocated in the lexer.
 */
static void
pushFont (textfont_t *fp)
{
    sfont_t *ft = (sfont_t*)zmalloc(sizeof(sfont_t));
    textfont_t* curfont = HTMLstate.fontstack->cfont;
    textfont_t  f = *fp;

    if (curfont) {
	if (!f.color && curfont->color)
	    f.color = curfont->color;
	if ((f.size < 0.0) && (curfont->size >= 0.0))
	    f.size = curfont->size;
	if (!f.name && curfont->name)
	    f.name = curfont->name;
	if (curfont->flags)
	    f.flags |= curfont->flags;
    }

    ft->cfont = (*(((Dt_t*)(HTMLstate.gvc->textfont_dt))->searchf))((HTMLstate.gvc->textfont_dt),(void*)(&f),0000001);
    ft->pfont = HTMLstate.fontstack;
    HTMLstate.fontstack = ft;
}

/* popFont:
 */
static void 
popFont (void)
{
    sfont_t* curfont = HTMLstate.fontstack;
    sfont_t* prevfont = curfont->pfont;

    free (curfont);
    HTMLstate.fontstack = prevfont;
}


/* Line 336 of yacc.c  */










/* Enabling verbose error messages.  */







/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */


/* Enabling traces.  */







/* Tokens.  */


   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum htmltokentype {
     T_end_br = 258,
     T_end_img = 259,
     T_row = 260,
     T_end_row = 261,
     T_html = 262,
     T_end_html = 263,
     T_end_table = 264,
     T_end_cell = 265,
     T_end_font = 266,
     T_string = 267,
     T_error = 268,
     T_n_italic = 269,
     T_n_bold = 270,
     T_n_underline = 271,
     T_n_overline = 272,
     T_n_sup = 273,
     T_n_sub = 274,
     T_n_s = 275,
     T_HR = 276,
     T_hr = 277,
     T_end_hr = 278,
     T_VR = 279,
     T_vr = 280,
     T_end_vr = 281,
     T_BR = 282,
     T_br = 283,
     T_IMG = 284,
     T_img = 285,
     T_table = 286,
     T_cell = 287,
     T_font = 288,
     T_italic = 289,
     T_bold = 290,
     T_underline = 291,
     T_overline = 292,
     T_sup = 293,
     T_sub = 294,
     T_s = 295
   };

/* Tokens.  */










































typedef union YYSTYPE
{
/* Line 350 of yacc.c  */


  int    i;
  htmltxt_t*  txt;
  htmlcell_t*  cell;
  htmltbl_t*   tbl;
  textfont_t*  font;
  htmlimg_t*   img;
  pitem*       p;


/* Line 350 of yacc.c  */

} YYSTYPE;





extern YYSTYPE htmllval;











int htmlparse ();





/* Copy the second part of user declarations.  */

/* Line 353 of yacc.c  */









typedef unsigned char htmltype_uint8;








typedef short int htmltype_int8;





typedef unsigned short int htmltype_uint16;





typedef short int htmltype_int16;






























/* Suppress unused-variable warnings by "using" E.  */






/* Identity function, used to suppress warnings about constant conditions.  */










    


  





/* The parser invokes alloca or malloc; define the necessary symbols.  */

















      









   


    









































/* A type that is properly aligned for any stack member.  */
union htmlalloc
{
  htmltype_int16 htmlss_alloc;
  YYSTYPE htmlvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */


/* The size of an array large to enough to hold all stacks, each with
   N elements.  */






/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */














/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */

















/* YYFINAL -- State number of the termination state.  */

/* YYLAST -- Last index in YYTABLE.  */


/* YYNTOKENS -- Number of terminals.  */

/* YYNNTS -- Number of nonterminals.  */

/* YYNRULES -- Number of rules.  */

/* YYNRULES -- Number of states.  */


/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */






/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const htmltype_uint8 htmltranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40
};






       
      
      
      
     
     
     





      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      





       
     
     
     
     
     
     








  
  
  
  
  
  
  
  
  
  
  
  








       
     
     
     
     



/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const htmltype_uint8 htmlr1[] =
{
       0,    41,    42,    42,    42,    43,    44,    44,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    62,    63,    63,    65,    64,
      66,    66,    66,    66,    66,    66,    67,    67,    68,    68,
      68,    70,    69,    71,    71,    71,    73,    72,    74,    72,
      75,    72,    76,    72,    77,    77,    78,    78,    79,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const htmltype_uint8 htmlr2[] =
{
       0,     2,     3,     3,     1,     1,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     0,     6,
       1,     3,     3,     3,     3,     3,     1,     0,     1,     2,
       3,     0,     4,     1,     2,     3,     0,     4,     0,     4,
       0,     4,     0,     3,     2,     1,     2,     1,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const htmltype_uint8 htmldefact[] =
{
       0,     4,    47,     0,    36,    35,     0,    18,    20,    22,
      26,    28,    30,    32,    24,     0,     5,     7,    47,    47,
      47,     0,    47,    47,     0,     0,     9,     8,    40,     0,
       0,     1,    34,     2,     6,     0,     0,     0,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     3,    38,    19,    10,    41,
      21,    11,    42,    23,    14,    45,    25,    17,    27,    12,
      43,    29,    13,    44,    31,    15,    33,    16,     0,    51,
       0,    48,     0,    47,    67,     0,    49,     0,    47,     0,
      53,    46,    39,    66,    50,    65,     0,    58,    56,     0,
      60,    52,    69,     0,    54,     0,    64,     0,     0,    63,
       0,    68,    55,    59,    57,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const htmltype_int8 htmldefgoto[] =
{
      -1,     3,    15,    16,    17,    35,    58,    36,    61,    37,
      64,    21,    67,    38,    69,    39,    72,    24,    75,    25,
      77,    26,    40,    28,    78,    29,    30,    80,    81,    82,
      89,    90,   108,   107,   110,    99,   100,    87,   105
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */

static const htmltype_int16 htmlpact[] =
{
       8,   -82,   209,    10,   -82,   -82,    11,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     5,   209,   -82,   209,   209,
     209,   209,   209,   209,   209,   209,   -82,    -5,   -82,    14,
     -20,   -82,   -82,   -82,   -82,   209,   209,   209,   209,   209,
      13,    37,    12,    66,    16,    80,    19,   109,   123,    20,
     152,    15,   166,   195,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,    23,   -82,
     119,   -82,     7,    46,   -82,    38,   -82,    23,    17,    35,
     -82,    13,   -82,   -82,   -82,   -82,    58,   -82,   -82,    53,
     -82,   -82,   -82,    40,   -82,     7,   -82,    59,    69,   -82,
      72,   -82,   -82,   -82,   -82,   -82
};

/* YYPGOTO[NTERM-NUM].  */
static const htmltype_int16 htmlpgoto[] =
{
     -82,   -82,    -4,   232,   -10,    -1,    26,     0,    39,     1,
      50,   -82,   -82,     2,    36,     3,    47,   -82,   -82,   -82,
     -82,   -82,    -2,   148,   -82,     9,    27,   -82,   -68,   -82,
     -82,   -81,   -82,   -82,   -82,   -82,   -82,   -82,   -82
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */

static const htmltype_int8 htmltable[] =
{
      27,    18,    19,    20,    22,    23,    34,    54,   104,     1,
      31,    56,    86,    33,    32,     2,    27,    27,    27,    94,
      27,    27,    55,    57,   112,    54,   -46,   -62,    79,     4,
      60,    34,    71,    34,    63,    34,    68,    34,    34,    88,
      34,   101,    34,    34,     5,     6,    95,    96,    57,     4,
       7,     8,     9,    10,    11,    12,    13,    14,     4,   102,
     103,    93,   106,   109,     5,     6,   111,    88,    59,   113,
       7,     8,     9,    10,    11,    12,    13,    14,     4,   114,
      60,    91,   115,    62,    97,    70,    27,    18,    19,    20,
      22,    23,     4,     5,     6,    63,    65,    98,    73,     7,
       8,     9,    10,    11,    12,    13,    14,     5,     6,     0,
      92,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,     4,     0,     0,    79,     0,     0,     0,    83,    66,
       0,     0,     0,     0,     0,     4,     5,     6,     0,    68,
      84,    85,     7,     8,     9,    10,    11,    12,    13,    14,
       5,     6,     0,     0,     0,     0,     7,     8,     9,    10,
      11,    12,    13,    14,     4,     0,    42,    44,    46,    71,
      49,    51,     0,     0,     0,     0,     0,     0,     4,     5,
       6,     0,     0,     0,    74,     7,     8,     9,    10,    11,
      12,    13,    14,     5,     6,     0,     0,     0,     0,     7,
       8,     9,    10,    11,    12,    13,    14,     4,     0,     0,
       0,     0,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     4,     5,     6,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    12,    13,    14,     5,     6,     0,     0,
       0,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      41,    43,    45,    47,    48,    50,    52,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    43,    45,
      48,    50
};







static const htmltype_int8 htmlcheck[] =
{
       2,     2,     2,     2,     2,     2,    16,    12,    89,     1,
       0,    31,    80,     8,     3,     7,    18,    19,    20,    87,
      22,    23,     8,    11,   105,    12,    31,    10,     5,    12,
      14,    41,    17,    43,    15,    45,    16,    47,    48,    32,
      50,     6,    52,    53,    27,    28,    29,    30,    11,    12,
      33,    34,    35,    36,    37,    38,    39,    40,    12,    24,
      25,    23,     4,    10,    27,    28,    26,    32,    42,    10,
      33,    34,    35,    36,    37,    38,    39,    40,    12,    10,
      14,    83,    10,    44,    88,    49,    88,    88,    88,    88,
      88,    88,    12,    27,    28,    15,    46,    88,    51,    33,
      34,    35,    36,    37,    38,    39,    40,    27,    28,    -1,
      83,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    12,    -1,    -1,     5,    -1,    -1,    -1,     9,    20,
      -1,    -1,    -1,    -1,    -1,    12,    27,    28,    -1,    16,
      21,    22,    33,    34,    35,    36,    37,    38,    39,    40,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    12,    -1,    18,    19,    20,    17,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    12,    27,
      28,    -1,    -1,    -1,    18,    33,    34,    35,    36,    37,
      38,    39,    40,    27,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    27,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    27,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const htmltype_uint8 htmlstos[] =
{
       0,     1,     7,    42,    12,    27,    28,    33,    34,    35,
      36,    37,    38,    39,    40,    43,    44,    45,    46,    48,
      50,    52,    54,    56,    58,    60,    62,    63,    64,    66,
      67,     0,     3,     8,    45,    46,    48,    50,    54,    56,
      63,    44,    64,    44,    64,    44,    64,    44,    44,    64,
      44,    64,    44,    44,    12,     8,    31,    11,    47,    47,
      14,    49,    49,    15,    51,    51,    20,    53,    16,    55,
      55,    17,    57,    57,    18,    59,    19,    61,    65,     5,
      68,    69,    70,     9,    21,    22,    69,    78,    32,    71,
      72,    63,    67,    23,    69,    29,    30,    43,    66,    76,
      77,     6,    24,    25,    72,    79,     4,    74,    73,    10,
      75,    26,    72,    10,    10,    10
};











/* Like YYERROR except do call htmlerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */



  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */

























/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

























/* This macro is provided for backward compatibility. */






/* YYLEX -- calling `htmllex' with the right arguments.  */







/* Enable debugging if requested.  */





































    
    
    


  
  
  
    

  
    

  

  
    
      
	
    














    
    
    


  
    
  
    

  
  














    
    


  
  
    
      
      
    
  




















    
    


  
  
  
  
	     
  
  
    
      
      
		       
		       		       
      
    



















/* YYINITDEPTH -- initial size of the parser's stacks.  */




/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */




















    


  
  
    
  

















    
    


  
  

  
    

  















  
    
      
      

      
	
	  
	  
	  
	    

	  
	    
	      
	    
	  
	    
	      
	    
	    

	  
	    
	      
	    
	  
    
    

  
    

  













                

  
  
  
  
  
  
  
  
  

  

  


























  
    
      
      
      
        
          


          
          
          
          
          

          
            
                
              
                
                  
                    
                    
                    
                  
                
                
                
                       
                  
                
              
        
    

  
    




      
      
      
      
      
      

    

  
  
    
  

  
    
      
      
             
        
      
    

  


  
    
    
    
      
        
          
          
        
      
        
          
          
        
  
  



/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/





static void
htmldestruct (htmlmsg, htmltype, htmlvaluep)
    const char *htmlmsg;
    int htmltype;
    YYSTYPE *htmlvaluep;

{
  ((void) (htmlvaluep));

  if (!htmlmsg)
    htmlmsg = "Deleting";
  ;

  switch (htmltype)
    {

      default:
	break;
    }
}




/* The lookahead symbol.  */
int htmlchar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE htmllval;

/* Number of syntax errors so far.  */
int htmlnerrs;


/*----------.
| htmlparse.  |
`----------*/









    







int
htmlparse ()



{
    int htmlstate;
    /* Number of tokens to shift before error messages enabled.  */
    int htmlerrstatus;

    /* The stacks and their tools:
       `htmlss': related to states.
       `htmlvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow htmloverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    htmltype_int16 htmlssa[200];
    htmltype_int16 *htmlss;
    htmltype_int16 *htmlssp;

    /* The semantic value stack.  */
    YYSTYPE htmlvsa[200];
    YYSTYPE *htmlvs;
    YYSTYPE *htmlvsp;

    unsigned int htmlstacksize;

  int htmln;
  int htmlresult;
  /* Lookahead token as an internal (translated) token number.  */
  int htmltoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE htmlval;


  
  
  
  




  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int htmllen = 0;

  htmltoken = 0;
  htmlss = htmlssa;
  htmlvs = htmlvsa;
  htmlstacksize = 200;

  ;

  htmlstate = 0;
  htmlerrstatus = 0;
  htmlnerrs = 0;
  htmlchar = (-2); /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  htmlssp = htmlss;
  htmlvsp = htmlvs;
  goto htmlsetstate;

/*------------------------------------------------------------.
| htmlnewstate -- Push a new state, which is found in htmlstate.  |
`------------------------------------------------------------*/
 htmlnewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  htmlssp++;

 htmlsetstate:
  *htmlssp = htmlstate;

  if (htmlss + htmlstacksize - 1 <= htmlssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      unsigned int htmlsize = htmlssp - htmlss + 1;


      
	


	
	

	



	
		    
		    
		    

	
	
      


      

      /* Extend the stack our own way.  */
      if (10000 <= htmlstacksize)
	goto htmlexhaustedlab;
      htmlstacksize *= 2;
      if (10000 < htmlstacksize)
	htmlstacksize = 10000;

      {
	htmltype_int16 *htmlss1 = htmlss;
	union htmlalloc *htmlptr =
	  (union htmlalloc *) malloc (((htmlstacksize) * (sizeof (htmltype_int16) + sizeof (YYSTYPE)) + (sizeof (union htmlalloc) - 1)));
	if (! htmlptr)
	  goto htmlexhaustedlab;
	do { unsigned int htmlnewbytes; do { unsigned int htmli; for (htmli = 0; htmli < (htmlsize); htmli++) (&htmlptr->htmlss_alloc)[htmli] = (htmlss)[htmli]; } while ((0)); htmlss = &htmlptr->htmlss_alloc; htmlnewbytes = htmlstacksize * sizeof (*htmlss) + (sizeof (union htmlalloc) - 1); htmlptr += htmlnewbytes / sizeof (*htmlptr); } while ((0));
	do { unsigned int htmlnewbytes; do { unsigned int htmli; for (htmli = 0; htmli < (htmlsize); htmli++) (&htmlptr->htmlvs_alloc)[htmli] = (htmlvs)[htmli]; } while ((0)); htmlvs = &htmlptr->htmlvs_alloc; htmlnewbytes = htmlstacksize * sizeof (*htmlvs) + (sizeof (union htmlalloc) - 1); htmlptr += htmlnewbytes / sizeof (*htmlptr); } while ((0));

	if (htmlss1 != htmlssa)
	  free (htmlss1);
      }



      htmlssp = htmlss + htmlsize - 1;
      htmlvsp = htmlvs + htmlsize - 1;

      ;

      if (htmlss + htmlstacksize - 1 <= htmlssp)
	goto htmlabortlab;
    }

  ;

  if (htmlstate == 31)
    goto htmlacceptlab;

  goto htmlbackup;

/*-----------.
| htmlbackup.  |
`-----------*/
htmlbackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  htmln = htmlpact[htmlstate];
  if (((htmln) == (-82)))
    goto htmldefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (htmlchar == (-2))
    {
      ;
      htmlchar = htmllex ();
    }

  if (htmlchar <= 0)
    {
      htmlchar = htmltoken = 0;
      ;
    }
  else
    {
      htmltoken = ((unsigned int) (htmlchar) <= 295 ? htmltranslate[htmlchar] : 2);
      ;
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  htmln += htmltoken;
  if (htmln < 0 || 271 < htmln || htmlcheck[htmln] != htmltoken)
    goto htmldefault;
  htmln = htmltable[htmln];
  if (htmln <= 0)
    {
      if ((0))
        goto htmlerrlab;
      htmln = -htmln;
      goto htmlreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (htmlerrstatus)
    htmlerrstatus--;

  /* Shift the lookahead token.  */
  ;

  /* Discard the shifted token.  */
  htmlchar = (-2);

  htmlstate = htmln;
  *++htmlvsp = htmllval;

  goto htmlnewstate;


/*-----------------------------------------------------------.
| htmldefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
htmldefault:
  htmln = htmldefact[htmlstate];
  if (htmln == 0)
    goto htmlerrlab;
  goto htmlreduce;


/*-----------------------------.
| htmlreduce -- Do a reduction.  |
`-----------------------------*/
htmlreduce:
  /* htmln is the number of a rule to reduce with.  */
  htmllen = htmlr2[htmln];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  htmlval = htmlvsp[1-htmllen];


  ;
  switch (htmln)
    {
        case 2:
/* Line 1787 of yacc.c  */

    { HTMLstate.lbl = mkLabel((htmlvsp[(2) - (3)].txt),2); }
    break;

  case 3:
/* Line 1787 of yacc.c  */

    { HTMLstate.lbl = mkLabel((htmlvsp[(2) - (3)].tbl),1); }
    break;

  case 4:
/* Line 1787 of yacc.c  */

    { cleanup(); goto htmlabortlab; }
    break;

  case 5:
/* Line 1787 of yacc.c  */

    { (htmlval.txt) = mkText(); }
    break;

  case 8:
/* Line 1787 of yacc.c  */

    { appendFItemList(HTMLstate.str);}
    break;

  case 9:
/* Line 1787 of yacc.c  */

    {appendFLineList((htmlvsp[(1) - (1)].i));}
    break;

  case 18:
/* Line 1787 of yacc.c  */

    { pushFont ((htmlvsp[(1) - (1)].font)); }
    break;

  case 19:
/* Line 1787 of yacc.c  */

    { popFont (); }
    break;

  case 20:
/* Line 1787 of yacc.c  */

    {pushFont((htmlvsp[(1) - (1)].font));}
    break;

  case 21:
/* Line 1787 of yacc.c  */

    {popFont();}
    break;

  case 22:
/* Line 1787 of yacc.c  */

    {pushFont((htmlvsp[(1) - (1)].font));}
    break;

  case 23:
/* Line 1787 of yacc.c  */

    {popFont();}
    break;

  case 24:
/* Line 1787 of yacc.c  */

    {pushFont((htmlvsp[(1) - (1)].font));}
    break;

  case 25:
/* Line 1787 of yacc.c  */

    {popFont();}
    break;

  case 26:
/* Line 1787 of yacc.c  */

    {pushFont((htmlvsp[(1) - (1)].font));}
    break;

  case 27:
/* Line 1787 of yacc.c  */

    {popFont();}
    break;

  case 28:
/* Line 1787 of yacc.c  */

    {pushFont((htmlvsp[(1) - (1)].font));}
    break;

  case 29:
/* Line 1787 of yacc.c  */

    {popFont();}
    break;

  case 30:
/* Line 1787 of yacc.c  */

    {pushFont((htmlvsp[(1) - (1)].font));}
    break;

  case 31:
/* Line 1787 of yacc.c  */

    {popFont();}
    break;

  case 32:
/* Line 1787 of yacc.c  */

    {pushFont((htmlvsp[(1) - (1)].font));}
    break;

  case 33:
/* Line 1787 of yacc.c  */

    {popFont();}
    break;

  case 34:
/* Line 1787 of yacc.c  */

    { (htmlval.i) = (htmlvsp[(1) - (2)].i); }
    break;

  case 35:
/* Line 1787 of yacc.c  */

    { (htmlval.i) = (htmlvsp[(1) - (1)].i); }
    break;

  case 38:
/* Line 1787 of yacc.c  */

    { 
          if (nonSpace((((((HTMLstate.str)->ptr >= (HTMLstate.str)->eptr) ? agxbmore(HTMLstate.str,1) : 0), (int)(*(HTMLstate.str)->ptr++ = ((unsigned char)'\0'))),(char*)((HTMLstate.str)->ptr = (HTMLstate.str)->buf)))) {
            htmlerror ("Syntax error: non-space string used before <TABLE>");
            cleanup(); goto htmlabortlab;
          }
          (htmlvsp[(2) - (2)].tbl)->u.p.prev = HTMLstate.tblstack;
          (htmlvsp[(2) - (2)].tbl)->u.p.rows = dtopen(&rowDisc, Dtqueue);
          HTMLstate.tblstack = (htmlvsp[(2) - (2)].tbl);
          (htmlvsp[(2) - (2)].tbl)->font = HTMLstate.fontstack->cfont;
          (htmlval.tbl) = (htmlvsp[(2) - (2)].tbl);
        }
    break;

  case 39:
/* Line 1787 of yacc.c  */

    {
          if (nonSpace((((((HTMLstate.str)->ptr >= (HTMLstate.str)->eptr) ? agxbmore(HTMLstate.str,1) : 0), (int)(*(HTMLstate.str)->ptr++ = ((unsigned char)'\0'))),(char*)((HTMLstate.str)->ptr = (HTMLstate.str)->buf)))) {
            htmlerror ("Syntax error: non-space string used after </TABLE>");
            cleanup(); goto htmlabortlab;
          }
          (htmlval.tbl) = HTMLstate.tblstack;
          HTMLstate.tblstack = HTMLstate.tblstack->u.p.prev;
        }
    break;

  case 40:
/* Line 1787 of yacc.c  */

    { (htmlval.tbl) = (htmlvsp[(1) - (1)].tbl); }
    break;

  case 41:
/* Line 1787 of yacc.c  */

    { (htmlval.tbl)=(htmlvsp[(2) - (3)].tbl); }
    break;

  case 42:
/* Line 1787 of yacc.c  */

    { (htmlval.tbl)=(htmlvsp[(2) - (3)].tbl); }
    break;

  case 43:
/* Line 1787 of yacc.c  */

    { (htmlval.tbl)=(htmlvsp[(2) - (3)].tbl); }
    break;

  case 44:
/* Line 1787 of yacc.c  */

    { (htmlval.tbl)=(htmlvsp[(2) - (3)].tbl); }
    break;

  case 45:
/* Line 1787 of yacc.c  */

    { (htmlval.tbl)=(htmlvsp[(2) - (3)].tbl); }
    break;

  case 48:
/* Line 1787 of yacc.c  */

    { (htmlval.p) = (htmlvsp[(1) - (1)].p); }
    break;

  case 49:
/* Line 1787 of yacc.c  */

    { (htmlval.p) = (htmlvsp[(2) - (2)].p); }
    break;

  case 50:
/* Line 1787 of yacc.c  */

    { (htmlvsp[(1) - (3)].p)->ruled = 1; (htmlval.p) = (htmlvsp[(3) - (3)].p); }
    break;

  case 51:
/* Line 1787 of yacc.c  */

    { addRow (); }
    break;

  case 52:
/* Line 1787 of yacc.c  */

    { (htmlval.p) = lastRow(); }
    break;

  case 53:
/* Line 1787 of yacc.c  */

    { (htmlval.cell) = (htmlvsp[(1) - (1)].cell); }
    break;

  case 54:
/* Line 1787 of yacc.c  */

    { (htmlval.cell) = (htmlvsp[(2) - (2)].cell); }
    break;

  case 55:
/* Line 1787 of yacc.c  */

    { (htmlvsp[(1) - (3)].cell)->ruled |= 1; (htmlval.cell) = (htmlvsp[(3) - (3)].cell); }
    break;

  case 56:
/* Line 1787 of yacc.c  */

    { setCell((htmlvsp[(1) - (2)].cell),(htmlvsp[(2) - (2)].tbl),1); }
    break;

  case 57:
/* Line 1787 of yacc.c  */

    { (htmlval.cell) = (htmlvsp[(1) - (4)].cell); }
    break;

  case 58:
/* Line 1787 of yacc.c  */

    { setCell((htmlvsp[(1) - (2)].cell),(htmlvsp[(2) - (2)].txt),2); }
    break;

  case 59:
/* Line 1787 of yacc.c  */

    { (htmlval.cell) = (htmlvsp[(1) - (4)].cell); }
    break;

  case 60:
/* Line 1787 of yacc.c  */

    { setCell((htmlvsp[(1) - (2)].cell),(htmlvsp[(2) - (2)].img),3); }
    break;

  case 61:
/* Line 1787 of yacc.c  */

    { (htmlval.cell) = (htmlvsp[(1) - (4)].cell); }
    break;

  case 62:
/* Line 1787 of yacc.c  */

    { setCell((htmlvsp[(1) - (1)].cell),mkText(),2); }
    break;

  case 63:
/* Line 1787 of yacc.c  */

    { (htmlval.cell) = (htmlvsp[(1) - (3)].cell); }
    break;

  case 64:
/* Line 1787 of yacc.c  */

    { (htmlval.img) = (htmlvsp[(1) - (2)].img); }
    break;

  case 65:
/* Line 1787 of yacc.c  */

    { (htmlval.img) = (htmlvsp[(1) - (1)].img); }
    break;


/* Line 1787 of yacc.c  */

      default: break;
    }
  /* User semantic actions sometimes alter htmlchar, and that requires
     that htmltoken be updated with the new translation.  We take the
     approach of translating immediately before every use of htmltoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering htmlchar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  ;

  (htmlvsp -= (htmllen), htmlssp -= (htmllen));
  htmllen = 0;
  ;

  *++htmlvsp = htmlval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  htmln = htmlr1[htmln];

  htmlstate = htmlpgoto[htmln - 41] + *htmlssp;
  if (0 <= htmlstate && htmlstate <= 271 && htmlcheck[htmlstate] == *htmlssp)
    htmlstate = htmltable[htmlstate];
  else
    htmlstate = htmldefgoto[htmln - 41];

  goto htmlnewstate;


/*------------------------------------.
| htmlerrlab -- here on detecting error |
`------------------------------------*/
htmlerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  htmltoken = htmlchar == (-2) ? (-2) : ((unsigned int) (htmlchar) <= 295 ? htmltranslate[htmlchar] : 2);

  /* If not already recovering from an error, report this error.  */
  if (!htmlerrstatus)
    {
      ++htmlnerrs;

      htmlerror ("syntax error");



      
        
        
        
        
          
        
          
            
              
            
            
              
                
                
                
              
            
              
                
                
              
          
        
        
          
      


    }



  if (htmlerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (htmlchar <= 0)
	{
	  /* Return failure if at end of input.  */
	  if (htmlchar == 0)
	    goto htmlabortlab;
	}
      else
	{
	  htmldestruct ("Error: discarding",
		      htmltoken, &htmllval);
	  htmlchar = (-2);
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto htmlerrlab1;


/*---------------------------------------------------.
| htmlerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
htmlerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label htmlerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto htmlerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  (htmlvsp -= (htmllen), htmlssp -= (htmllen));
  htmllen = 0;
  ;
  htmlstate = *htmlssp;
  goto htmlerrlab1;


/*-------------------------------------------------------------.
| htmlerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
htmlerrlab1:
  htmlerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      htmln = htmlpact[htmlstate];
      if (!((htmln) == (-82)))
	{
	  htmln += 1;
	  if (0 <= htmln && htmln <= 271 && htmlcheck[htmln] == 1)
	    {
	      htmln = htmltable[htmln];
	      if (0 < htmln)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (htmlssp == htmlss)
	goto htmlabortlab;


      htmldestruct ("Error: popping",
		  htmlstos[htmlstate], htmlvsp);
      (htmlvsp -= (1), htmlssp -= (1));
      htmlstate = *htmlssp;
      ;
    }

  *++htmlvsp = htmllval;


  /* Shift the error token.  */
  ;

  htmlstate = htmln;
  goto htmlnewstate;


/*-------------------------------------.
| htmlacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
htmlacceptlab:
  htmlresult = 0;
  goto htmlreturn;

/*-----------------------------------.
| htmlabortlab -- YYABORT comes here.  |
`-----------------------------------*/
htmlabortlab:
  htmlresult = 1;
  goto htmlreturn;


/*-------------------------------------------------.
| htmlexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
htmlexhaustedlab:
  htmlerror ("memory exhausted");
  htmlresult = 2;
  /* Fall through.  */


htmlreturn:
  if (htmlchar != (-2))
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      htmltoken = ((unsigned int) (htmlchar) <= 295 ? htmltranslate[htmlchar] : 2);
      htmldestruct ("Cleanup: discarding lookahead",
                  htmltoken, &htmllval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  (htmlvsp -= (htmllen), htmlssp -= (htmllen));
  ;
  while (htmlssp != htmlss)
    {
      htmldestruct ("Cleanup: popping",
		  htmlstos[*htmlssp], htmlvsp);
      (htmlvsp -= (1), htmlssp -= (1));
    }

  if (htmlss != htmlssa)
    free (htmlss);


  
    

  /* Make sure YYID is used.  */
  return (htmlresult);
}


/* Line 2048 of yacc.c  */



/* parseHTML:
 * Return parsed label or NULL if failure.
 * Set warn to 0 on success; 1 for warning message; 2 if no expat.
 */
htmllabel_t*
parseHTML (char* txt, int* warn, htmlenv_t *env)
{
  unsigned char buf[128];
  agxbuf        str;
  htmllabel_t*  l;
  sfont_t       dfltf;

  dfltf.cfont = NULL;
  dfltf.pfont = NULL;
  HTMLstate.fontstack = &dfltf;
  HTMLstate.tblstack = 0;
  HTMLstate.lbl = 0;
  HTMLstate.gvc = GD_gvc(env->g);
  HTMLstate.fitemList = dtopen(&fstrDisc, Dtqueue);
  HTMLstate.fspanList = dtopen(&fspanDisc, Dtqueue);

  agxbinit (&str, 128, buf);
  HTMLstate.str = &str;
  
  if (initHTMLlexer (txt, &str, env)) {/* failed: no libexpat - give up */
    *warn = 2;
    l = NULL;
  }
  else {
    htmlparse();
    *warn = clearHTMLlexer ();
    l = HTMLstate.lbl;
  }

  dtclose (HTMLstate.fitemList);
  dtclose (HTMLstate.fspanList);
  
  HTMLstate.fitemList = NULL;
  HTMLstate.fspanList = NULL;
  HTMLstate.fontstack = NULL;
  
  agxbfree (&str);

  return l;
}


