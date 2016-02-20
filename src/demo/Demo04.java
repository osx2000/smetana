/* ========================================================================
 * PlantUML : a free UML diagram generator
 * ========================================================================
 *
 * Project Info:  http://plantuml.com
 * 
 * This file is part of Smetana.
 * Smetana is a partial translation of Graphviz/Dot sources from C to Java.
 *
 * (C) Copyright 2009-2017, Arnaud Roques
 *
 * This translation is distributed under the same Licence as the original C program.
 * 
 * THE ACCOMPANYING PROGRAM IS PROVIDED UNDER THE TERMS OF THIS ECLIPSE PUBLIC
 * LICENSE ("AGREEMENT"). [Eclipse Public License - v 1.0]
 * 
 * ANY USE, REPRODUCTION OR DISTRIBUTION OF THE PROGRAM CONSTITUTES
 * RECIPIENT'S ACCEPTANCE OF THIS AGREEMENT.
 * 
 * You may obtain a copy of the License at
 * 
 * http://www.eclipse.org/legal/epl-v10.html
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
package demo;

import static gen.lib.cgraph.attr__c.agsafeset;
import static gen.lib.cgraph.edge__c.agedge;
import static gen.lib.cgraph.graph__c.agopen;
import static gen.lib.cgraph.node__c.agnode;
import static gen.lib.gvc.gvc__c.gvContext;
import static gen.lib.gvc.gvlayout__c.gvLayoutJobs;
import h.Agedge_s;
import h.Agnode_s;
import h.Agraph_s;
import h.GVC_s;

import java.io.File;
import java.io.IOException;

import smetana.core.CString;
import smetana.core.JUtilsDebug;
import smetana.core.Z;
import smetana.core.debug.Debug;
import dot.Graphic;

public class Demo04 {

	public static void main(String[] args) throws IOException {

		Agraph_s g = agopen(new CString("g"), Z._().Agdirected, null);
		try {
			work(g);
		} catch (Exception e) {
			e.printStackTrace();
		}
		JUtilsDebug.printCallStack(new File("CALLTRACE.txt"));
		JUtilsDebug.printMethods();

	}

	private static void work(Agraph_s g) {
		Agnode_s n = agnode(g, new CString("n"), true);
		agsafeset(n, new CString("shape"), new CString("box"), new CString(""));
		Agnode_s m = agnode(g, new CString("m"), true);
		agsafeset(m, new CString("shape"), new CString("box"), new CString(""));
		Agnode_s m2 = agnode(g, new CString("m2"), true);
		agsafeset(m2, new CString("shape"), new CString("box"), new CString(""));
		Agnode_s m3 = agnode(g, new CString("m3"), true);
		agsafeset(m3, new CString("shape"), new CString("box"), new CString(""));
		Agnode_s m4 = agnode(g, new CString("m4"), true);
		agsafeset(m4, new CString("shape"), new CString("box"), new CString(""));
		Agedge_s e = agedge(g, n, m, null, true);
		Agedge_s e2 = agedge(g, n, m2, null, true);
		Agedge_s e3 = agedge(g, n, m3, null, true);
		Agedge_s e4 = agedge(g, n, m4, null, true);
		System.err.println("n=" + n);
		System.err.println("m=" + m);
		// System.err.println("m=" + m2);
		System.err.println("e=" + e);

		// /* Set an attribute - in this case one that affects the visible rendering */
		// agsafeset(e, new CString("arrowtail"), new CString("none"), new CString(""));
		// agsafeset(e, new CString("arrowhead"), new CString("none"), new CString(""));
		// agsafeset(n, new CString("color"), new CString("red"), new CString(""));

		GVC_s gvc = gvContext();
		Debug.setOneEdge(e);

		/* Compute a layout using layout engine from command line args */
		gvLayoutJobs(gvc, g);

		DebugUtils.printDebugNode(n);
		DebugUtils.printDebugNode(m);
		DebugUtils.printDebugNode(m2);
		DebugUtils.printDebugNode(m3);
		DebugUtils.printDebugNode(m4);
		DebugUtils.printDebugEdge(e);
		DebugUtils.printDebugEdge(e2);
		DebugUtils.printDebugEdge(e3);
		DebugUtils.printDebugEdge(e4);

		final Graphic graphic = new Graphic();
		graphic.addNode(n);
		graphic.addNode(m);
		graphic.addNode(m2);
		graphic.addNode(m3);
		graphic.addNode(m4);
		graphic.addEdge(e);
		graphic.addEdge(e2);
		graphic.addEdge(e3);
		graphic.addEdge(e4);
		graphic.drawTo(new File("out.png"));
	}

}
