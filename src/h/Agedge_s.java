package h;
import core.*;
import core.annotation.*;

// 5g85sn734cnzkqf8sdgtdesgl

@TranslatedBy("plantuml") 
public class Agedge_s extends Structure {
    final public Agobj_t base = new Agobj_t(this);
    final public Dtlink_t id_link = new Dtlink_t();		/* main graph only */
    final public Dtlink_t seq_link = new Dtlink_t();
    public Agnode_t node;		/* the endpoint node */
}

// struct Agedge_s {
//     Agobj_t base;
//     Dtlink_t id_link;		/* main graph only */
//     Dtlink_t seq_link;
//     Agnode_t *node;		/* the endpoint node */
// };