/* ========================================================================
 * PlantUML : a free UML diagram generator
 * ========================================================================
 *
 * (C) Copyright 2009-2017, Arnaud Roques
 *
 * Project Info:  http://plantuml.com
 * 
 * This file is part of PlantUML.
 *
 * PlantUML is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * PlantUML distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,
 * USA.
 *
 *
 * Original Author:  Arnaud Roques
 *
 *
 *
 *
 *************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************
 *
 */
package gen.lib.cgraph;
import h.*;
import smetana.core.*;
import static smetana.core.Macro.*;
import static smetana.core.JUtils.*;
import static gen.lib.cdt.dtclose__c.*;
import static gen.lib.cdt.dtdisc__c.*;
import static gen.lib.cdt.dtextract__c.*;
import static gen.lib.cdt.dtflatten__c.*;
import static gen.lib.cdt.dthash__c.*;
import static gen.lib.cdt.dtlist__c.*;
import static gen.lib.cdt.dtmethod__c.*;
import static gen.lib.cdt.dtopen__c.*;
import static gen.lib.cdt.dtrenew__c.*;
import static gen.lib.cdt.dtrestore__c.*;
import static gen.lib.cdt.dtsize__c.*;
import static gen.lib.cdt.dtstat__c.*;
import static gen.lib.cdt.dtstrhash__c.*;
import static gen.lib.cdt.dttreeset__c.*;
import static gen.lib.cdt.dttree__c.*;
import static gen.lib.cdt.dtview__c.*;
import static gen.lib.cdt.dtwalk__c.*;
import static gen.lib.cgraph.agerror__c.*;
import static gen.lib.cgraph.agxbuf__c.*;
import static gen.lib.cgraph.apply__c.*;
import static gen.lib.cgraph.attr__c.*;
import static gen.lib.cgraph.cmpnd__c.*;
import static gen.lib.cgraph.edge__c.*;
import static gen.lib.cgraph.flatten__c.*;
import static gen.lib.cgraph.grammar__c.*;
import static gen.lib.cgraph.graph__c.*;
import static gen.lib.cgraph.id__c.*;
import static gen.lib.cgraph.imap__c.*;
import static gen.lib.cgraph.io__c.*;
import static gen.lib.cgraph.main__c.*;
import static gen.lib.cgraph.mem__c.*;
import static gen.lib.cgraph.node__c.*;
import static gen.lib.cgraph.obj__c.*;
import static gen.lib.cgraph.pend__c.*;
import static gen.lib.cgraph.rec__c.*;
import static gen.lib.cgraph.refstr__c.*;
import static gen.lib.cgraph.scan__c.*;
import static gen.lib.cgraph.subg__c.*;
import static gen.lib.cgraph.tester__c.*;
import static gen.lib.cgraph.utils__c.*;
import static gen.lib.cgraph.write__c.*;
import static gen.lib.cgraph.y_tab__c.*;
import static gen.lib.circogen.blockpath__c.*;
import static gen.lib.circogen.blocktree__c.*;
import static gen.lib.circogen.block__c.*;
import static gen.lib.circogen.circpos__c.*;
import static gen.lib.circogen.circularinit__c.*;
import static gen.lib.circogen.circular__c.*;
import static gen.lib.circogen.deglist__c.*;
import static gen.lib.circogen.edgelist__c.*;
import static gen.lib.circogen.nodelist__c.*;
import static gen.lib.circogen.nodeset__c.*;
import static gen.lib.common.args__c.*;
import static gen.lib.common.arrows__c.*;
import static gen.lib.common.colxlate__c.*;
import static gen.lib.common.ellipse__c.*;
import static gen.lib.common.emit__c.*;
import static gen.lib.common.geom__c.*;
import static gen.lib.common.globals__c.*;
import static gen.lib.common.htmllex__c.*;
import static gen.lib.common.htmlparse__c.*;
import static gen.lib.common.htmltable__c.*;
import static gen.lib.common.input__c.*;
import static gen.lib.common.intset__c.*;
import static gen.lib.common.labels__c.*;
import static gen.lib.common.memory__c.*;
import static gen.lib.common.ns__c.*;
import static gen.lib.common.output__c.*;
import static gen.lib.common.pointset__c.*;
import static gen.lib.common.postproc__c.*;
import static gen.lib.common.psusershape__c.*;
import static gen.lib.common.routespl__c.*;
import static gen.lib.common.shapes__c.*;
import static gen.lib.common.splines__c.*;
import static gen.lib.common.strcasecmp__c.*;
import static gen.lib.common.strncasecmp__c.*;
import static gen.lib.common.taper__c.*;
import static gen.lib.common.textspan__c.*;
import static gen.lib.common.timing__c.*;
import static gen.lib.common.utils__c.*;
import static gen.lib.common.y_tab__c.*;
import static gen.lib.dotgen.acyclic__c.*;
import static gen.lib.dotgen.aspect__c.*;
import static gen.lib.dotgen.class1__c.*;
import static gen.lib.dotgen.class2__c.*;
import static gen.lib.dotgen.cluster__c.*;
import static gen.lib.dotgen.compound__c.*;
import static gen.lib.dotgen.conc__c.*;
import static gen.lib.dotgen.decomp__c.*;
import static gen.lib.dotgen.dotinit__c.*;
import static gen.lib.dotgen.dotsplines__c.*;
import static gen.lib.dotgen.fastgr__c.*;
import static gen.lib.dotgen.flat__c.*;
import static gen.lib.dotgen.mincross__c.*;
import static gen.lib.dotgen.position__c.*;
import static gen.lib.dotgen.rank__c.*;
import static gen.lib.dotgen.sameport__c.*;
import static gen.lib.dotgen2.decomp__c.*;
import static gen.lib.dotgen2.dotinit__c.*;
import static gen.lib.dotgen2.groups__c.*;
import static gen.lib.dotgen2.level__c.*;
import static gen.lib.dotgen2.minc2__c.*;
import static gen.lib.dotgen2.minc_utils__c.*;
import static gen.lib.dotgen2.ns__c.*;
import static gen.lib.fdpgen.clusteredges__c.*;
import static gen.lib.fdpgen.comp__c.*;
import static gen.lib.fdpgen.dbg__c.*;
import static gen.lib.fdpgen.fdpinit__c.*;
import static gen.lib.fdpgen.grid__c.*;
import static gen.lib.fdpgen.layout__c.*;
import static gen.lib.fdpgen.tlayout__c.*;
import static gen.lib.fdpgen.xlayout__c.*;
import static gen.lib.gvc.gvbuffstderr__c.*;
import static gen.lib.gvc.gvconfig__c.*;
import static gen.lib.gvc.gvcontext__c.*;
import static gen.lib.gvc.gvc__c.*;
import static gen.lib.gvc.gvdevice__c.*;
import static gen.lib.gvc.gvevent__c.*;
import static gen.lib.gvc.gvjobs__c.*;
import static gen.lib.gvc.gvlayout__c.*;
import static gen.lib.gvc.gvloadimage__c.*;
import static gen.lib.gvc.gvplugin__c.*;
import static gen.lib.gvc.gvrender__c.*;
import static gen.lib.gvc.gvtextlayout__c.*;
import static gen.lib.gvc.gvusershape__c.*;
import static gen.lib.gvc.regex_win32__c.*;
import static gen.lib.label.index__c.*;
import static gen.lib.label.node__c.*;
import static gen.lib.label.nrtmain__c.*;
import static gen.lib.label.rectangle__c.*;
import static gen.lib.label.split_q__c.*;
import static gen.lib.label.xlabels__c.*;
import static gen.lib.ortho.fPQ__c.*;
import static gen.lib.ortho.maze__c.*;
import static gen.lib.ortho.ortho__c.*;
import static gen.lib.ortho.partition__c.*;
import static gen.lib.ortho.rawgraph__c.*;
import static gen.lib.ortho.sgraph__c.*;
import static gen.lib.ortho.trapezoid__c.*;
import static gen.lib.pack.ccomps__c.*;
import static gen.lib.pack.pack__c.*;
import static gen.lib.pack.ptest__c.*;
import static gen.lib.pathplan.cvt__c.*;
import static gen.lib.pathplan.inpoly__c.*;
import static gen.lib.pathplan.route__c.*;
import static gen.lib.pathplan.shortestpth__c.*;
import static gen.lib.pathplan.shortest__c.*;
import static gen.lib.pathplan.solvers__c.*;
import static gen.lib.pathplan.triang__c.*;
import static gen.lib.pathplan.util__c.*;
import static gen.lib.pathplan.visibility__c.*;
import static gen.lib.xdot.xdot__c.*;

public class refstr__c {
//1 9k44uhd5foylaeoekf3llonjq
// extern Dtmethod_t* 	Dtset


//1 1ahfywsmzcpcig2oxm7pt9ihj
// extern Dtmethod_t* 	Dtbag


//1 anhghfj3k7dmkudy2n7rvt31v
// extern Dtmethod_t* 	Dtoset


//1 5l6oj1ux946zjwvir94ykejbc
// extern Dtmethod_t* 	Dtobag


//1 2wtf222ak6cui8cfjnw6w377z
// extern Dtmethod_t*	Dtlist


//1 d1s1s6ibtcsmst88e3057u9r7
// extern Dtmethod_t*	Dtstack


//1 axa7mflo824p6fspjn1rdk0mt
// extern Dtmethod_t*	Dtqueue


//1 ega812utobm4xx9oa9w9ayij6
// extern Dtmethod_t*	Dtdeque


//1 cyfr996ur43045jv1tjbelzmj
// extern Dtmethod_t*	Dtorder


//1 wlofoiftbjgrrabzb2brkycg
// extern Dtmethod_t*	Dttree


//1 12bds94t7voj7ulwpcvgf6agr
// extern Dtmethod_t*	Dthash


//1 9lqknzty480cy7zsubmabkk8h
// extern Dtmethod_t	_Dttree


//1 bvn6zkbcp8vjdhkccqo1xrkrb
// extern Dtmethod_t	_Dthash


//1 9lidhtd6nsmmv3e7vjv9e10gw
// extern Dtmethod_t	_Dtlist


//1 34ujfamjxo7xn89u90oh2k6f8
// extern Dtmethod_t	_Dtqueue


//1 3jy4aceckzkdv950h89p4wjc8
// extern Dtmethod_t	_Dtstack


//1 8dfqgf3u1v830qzcjqh9o8ha7
// extern Agmemdisc_t AgMemDisc


//1 18k2oh2t6llfsdc5x0wlcnby8
// extern Agiddisc_t AgIdDisc


//1 a4r7hi80gdxtsv4hdoqpyiivn
// extern Agiodisc_t AgIoDisc


//1 bnzt5syjb7mgeru19114vd6xx
// extern Agdisc_t AgDefaultDisc


//1 35y2gbegsdjilegaribes00mg
// extern Agdesc_t Agdirected, Agstrictdirected, Agundirected,     Agstrictundirected


//1 c2rygslq6bcuka3awmvy2b3ow
// typedef Agsubnode_t	Agnoderef_t


//1 xam6yv0dcsx57dtg44igpbzn
// typedef Dtlink_t	Agedgeref_t


//1 6ayavpu39aihwyojkx093pcy3
// extern Agraph_t *Ag_G_global


//1 871mxtg9l6ffpxdl9kniwusf7
// extern char *AgDataRecName


//1 c0o2kmml0tn6hftuwo0u4shwd
// extern Dtdisc_t Ag_subnode_id_disc


//1 8k15pyu256unm2kpd9zf5pf7k
// extern Dtdisc_t Ag_subnode_seq_disc


//1 e3d820y06gpeusn6atgmj8bzd
// extern Dtdisc_t Ag_mainedge_id_disc


//1 cbr0772spix9h1aw7h5v7dv9j
// extern Dtdisc_t Ag_subedge_id_disc


//1 akd0c3v0j7m2npxcb9acit1fa
// extern Dtdisc_t Ag_mainedge_seq_disc


//1 12d8la07351ww7vwfzucjst8m
// extern Dtdisc_t Ag_subedge_seq_disc


//1 29eokk7v88e62g8o6lizmo967
// extern Dtdisc_t Ag_subgraph_id_disc


//1 4xd9cbgy6hk5g6nhjcbpzkx14
// extern Agcbdisc_t AgAttrdisc


//1 8bj6ivnd4go7wt4pvzqgk8mlr
// static unsigned long HTML_BIT
static public int HTML_BIT;

//1 dqn77l82bfu071bv703e77jmg
// static unsigned long CNT_BITS
static public int CNT_BITS;

//1 boyxdmkhstn4i64pqf6sv1mi7
// static Dtdisc_t Refstrdisc = 
static public final __struct__<_dtdisc_s> Refstrdisc = __struct__.from(_dtdisc_s.class);
static {
	Refstrdisc.setInt("key", OFFSET.create(refstr_t.class, "s").toInt()); // *s is the third field in refstr_t
	Refstrdisc.setInt("size", -1);
	Refstrdisc.setInt("link", 0);
	Refstrdisc.setPtr("makef", null);
	Refstrdisc.setPtr("freef", function(utils__c.class, "agdictobjfree"));
	Refstrdisc.setPtr("comparf", null);
	Refstrdisc.setPtr("hashf", null);
	Refstrdisc.setPtr("memoryf", function(utils__c.class, "agdictobjmem"));
	Refstrdisc.setPtr("eventf", null);
}

//1 2e0tdcdyjc9zq54xt1nzgwvn3
// static Dict_t *Refdict_default
static public _dt_s Refdict_default;



//3 f1nwss2xoaub1hyord232ugoj
// static Dict_t *refdict(Agraph_t * g) 
public static _dt_s refdict(final Agraph_s g) {
ENTERING("f1nwss2xoaub1hyord232ugoj","refdict");
try {
		STARSTAR<_dt_s> dictref;
		if (g != null)
			dictref = STARSTAR.amp(new ACCESS<_dt_s>() {
				public _dt_s get() {
					return (_dt_s) g.getPtr("clos").getPtr("strdict");
				}
				public void set(_dt_s obj) {
					g.getPtr("clos").setPtr("strdict", obj);
				}
			});
		else
			dictref = STARSTAR.amp(new ACCESS<_dt_s>() {
				public _dt_s get() {
					return Refdict_default;
				}
				public void set(_dt_s obj) {
					Refdict_default = obj;
				}
			});
    if (dictref.getMe() == null) {
	dictref.setMe(agdtopen(g, Refstrdisc.amp(), Dttree));
		}
	HTML_BIT = 1 << 31;
	CNT_BITS = ~HTML_BIT;
    return dictref.getMe();
} finally {
LEAVING("f1nwss2xoaub1hyord232ugoj","refdict");
}
}




//3 9aajykl8nuymg60zukycquawa
// int agstrclose(Agraph_t * g) 
public static Object agstrclose(Object... arg) {
UNSUPPORTED("c2l353zz5jt7jlmbhjbbt3m7v"); // int agstrclose(Agraph_t * g)
UNSUPPORTED("erg9i1970wdri39osu8hx2a6e"); // {
UNSUPPORTED("208rcf0f70q2wxwsa6po42oqq"); //     return agdtclose(g, refdict(g));
UNSUPPORTED("c24nfmv9i7o5eoqaymbibp7m7"); // }

throw new UnsupportedOperationException();
}




//3 9ts4wqhw2xafdv3tlcilneewq
// static refstr_t *refsymbind(Dict_t * strdict, char *s) 
public static refstr_t refsymbind(_dt_s strdict, CString s) {
ENTERING("9ts4wqhw2xafdv3tlcilneewq","refsymbind");
try {
    final __struct__<refstr_t> key = __struct__.from(refstr_t.class);
    refstr_t r;
    // key.setPtr("s", s.duplicate());
    key.setPtr("s", s);
    r = (refstr_t) strdict.call("searchf", strdict, key.amp(), 0000004);
    return r;
} finally {
LEAVING("9ts4wqhw2xafdv3tlcilneewq","refsymbind");
}
}




//3 1scntgo71z7c2v15zapiyw59w
// static char *refstrbind(Dict_t * strdict, char *s) 
public static CString refstrbind(_dt_s strdict, CString s) {
ENTERING("1scntgo71z7c2v15zapiyw59w","refstrbind");
try {
    refstr_t r;
    r = refsymbind(strdict, s);
    if (r!=null)
	return r.getCString("s");
    else
	return null;
} finally {
LEAVING("1scntgo71z7c2v15zapiyw59w","refstrbind");
}
}




//3 bb8aqjshw3ecae2lsmhigd0mc
// char *agstrbind(Agraph_t * g, char *s) 
public static CString agstrbind(Agraph_s g, CString s) {
ENTERING("bb8aqjshw3ecae2lsmhigd0mc","agstrbind");
try {
    return refstrbind(refdict(g), s);
} finally {
LEAVING("bb8aqjshw3ecae2lsmhigd0mc","agstrbind");
}
}




//3 86oznromwhn9qeym0k7pih73q
// char *agstrdup(Agraph_t * g, char *s) 
public static CString agstrdup(Agraph_s g, CString s) {
ENTERING("86oznromwhn9qeym0k7pih73q","agstrdup");
try {
    refstr_t r;
    _dt_s strdict;
    size_t sz;
    if (s == null)
	 return null;
    strdict = refdict(g);
    r = (refstr_t) refsymbind(strdict, s);
    if (r!=null) r = (refstr_t) r.castTo(refstr_t.class);
    if (r!=null)
	r.setInt("refcnt", r.getInt("refcnt")+1);
    else {
	sz = sizeof(refstr_t.class).plus(s.length());
	if (g!=null)
	    r = (refstr_t) agalloc(g, sz);
	else
	    r = (refstr_t) sz.malloc();
	r.setInt("refcnt", 1);
	r.setPtr("s", s.duplicate());
//	strcpy(r->store, s);
//	r->s = r->store;
	strdict.call("searchf", strdict,r,0000001);
    }
	return r.getCString("s");
} finally {
LEAVING("86oznromwhn9qeym0k7pih73q","agstrdup");
}
}




//3 1ovgpnv6r8ru6iz51ic91zzal
// char *agstrdup_html(Agraph_t * g, char *s) 
public static Object agstrdup_html(Object... arg) {
UNSUPPORTED("6679vrn0j0vkzernsn2rlottw"); // char *agstrdup_html(Agraph_t * g, char *s)
UNSUPPORTED("erg9i1970wdri39osu8hx2a6e"); // {
UNSUPPORTED("1uvxutp09oluiacpgn0f76bgu"); //     refstr_t *r;
UNSUPPORTED("czgqod5ni1s5av81qa3n0ghgr"); //     Dict_t *strdict;
UNSUPPORTED("55x2wgzchv0157f4g74693oaq"); //     size_t sz;
UNSUPPORTED("a5abfeqtsa4i5x739edpwuxin"); //     if (s == ((char *)0))
UNSUPPORTED("xp8okoaicybpovkenntpd857"); // 	 return ((char *)0);
UNSUPPORTED("bo3fdoot7ldevx250qweitj6z"); //     strdict = refdict(g);
UNSUPPORTED("12vt0u4w3q0jht9f9vsaybntn"); //     r = refsymbind(strdict, s);
UNSUPPORTED("67y4tszu7dmeves31gr9ydmpi"); //     if (r)
UNSUPPORTED("5gybhadmtbc77f5wf9adyemj7"); // 	r->refcnt++;
UNSUPPORTED("1nyzbeonram6636b1w955bypn"); //     else {
UNSUPPORTED("9llv1u64vbj6q8loctnrowtm5"); // 	sz = sizeof(refstr_t) + strlen(s);
UNSUPPORTED("7tmc6a514rv2k24wg5o8qpvyp"); // 	if (g)
UNSUPPORTED("asjj8bj1b02f70rfr41ayipxy"); // 	    r = (refstr_t *) agalloc(g, sz);
UNSUPPORTED("9352ql3e58qs4fzapgjfrms2s"); // 	else
UNSUPPORTED("bp5rr6mkh94826cbgdwglvpk9"); // 	    r = (refstr_t *) malloc(sz);
UNSUPPORTED("6sl9ejza97inawt8uprd120h6"); // 	r->refcnt = 1 | HTML_BIT;
UNSUPPORTED("dadamob0ot3fpofdm1ey34srj"); // 	strcpy(r->store, s);
UNSUPPORTED("1cyhds1lm0ee8rtp7k7h5cqfw"); // 	r->s = r->store;
UNSUPPORTED("b2zaf5uj8gofpyc40hl0ziymh"); // 	(*(((Dt_t*)(strdict))->searchf))((strdict),(void*)(r),0000001);
UNSUPPORTED("dvgyxsnyeqqnyzq696k3vskib"); //     }
UNSUPPORTED("lxjgfic7zk869xczsgazw3sx"); //     return r->s;
UNSUPPORTED("c24nfmv9i7o5eoqaymbibp7m7"); // }

throw new UnsupportedOperationException();
}




//3 enhn1ajfo86a19dgm4b8lduz7
// int agstrfree(Agraph_t * g, char *s) 
public static int agstrfree(Agraph_s g, CString s) {
ENTERING("enhn1ajfo86a19dgm4b8lduz7","agstrfree");
try {
    refstr_t r;
    _dt_s strdict;
    if (s == null)
	 return -1;
    strdict = refdict(g);
    r = refsymbind(strdict, s);
    if (r!=null) r = (refstr_t) r.castTo(refstr_t.class);
    if (r!=null && (EQ(r.getPtr("s"), s))) {
	r.setInt("refcnt", r.getInt("refcnt")-1);
	if ((r.getInt("refcnt")!=0 && CNT_BITS!=0) == false) {
	    agdtdelete(g, strdict, r);
	    /*
	       if (g) agfree(g,r);
	       else free(r);
	     */
	}
    }
    if (r == null)
	return -1;
    return 0;
} finally {
LEAVING("enhn1ajfo86a19dgm4b8lduz7","agstrfree");
}
}




//3 3em4wzjnpajd5d3igb90l3rml
// int aghtmlstr(char *s) 
public static int aghtmlstr(CString s) {
ENTERING("3em4wzjnpajd5d3igb90l3rml","aghtmlstr");
try {
    refstr_t key;
    if (s == null)
	return 0;
	key = (refstr_t) s.addVirtualBytes(-OFFSET.create(refstr_t.class, "s").toInt());
    return (key.getInt("refcnt") & HTML_BIT);
} finally {
LEAVING("3em4wzjnpajd5d3igb90l3rml","aghtmlstr");
}
}




//3 ap2ebebypq6vmwle0hicv6tmj
// void agmarkhtmlstr(char *s) 
public static Object agmarkhtmlstr(Object... arg) {
UNSUPPORTED("8oc24oz62ej815sjwuwuj9bmt"); // void agmarkhtmlstr(char *s)
UNSUPPORTED("erg9i1970wdri39osu8hx2a6e"); // {
UNSUPPORTED("164ww6fcxh6v2wmxj0v8aqviy"); //     refstr_t *key;
UNSUPPORTED("8quozj18vjguewxdpv9w14yjn"); //     if (s == NULL)
UNSUPPORTED("a7fgam0j0jm7bar0mblsv3no4"); // 	return;
UNSUPPORTED("9cmt4vbkm95fqftevdqyfvslr"); //     key = (refstr_t *) (s - ((int)(&(((refstr_t*)0)->store[0]))));
UNSUPPORTED("68mcf5kr6xw538zkdk8b50aeb"); //     key->refcnt |= HTML_BIT;
UNSUPPORTED("c24nfmv9i7o5eoqaymbibp7m7"); // }

throw new UnsupportedOperationException();
}


}