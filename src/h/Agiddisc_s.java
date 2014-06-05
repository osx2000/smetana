package h;
import core.*;
import core.annotation.*;

// 9v8qggm3xqq7ok84lmnkhvpv8

@TranslatedBy("plantuml")
public class Agiddisc_s extends Structure { /* object ID allocator */
    static public interface open extends FP {
        StarVoid function (Agraph_t g, Agdisc_t t);	/* associated with a graph */
    }
    public open open;
    
    static public interface map extends FP {
        boolean function (StarVoid state, int objtype, StarChar str, @Unsigned Int id, boolean createflag);
    }
    public map map;
    
    static public interface alloc extends FP {
        int function (StarVoid state, int objtype, @Unsigned int id);
    }
    public alloc alloc;
    
    static public interface free extends FP {
        void function (StarVoid state, int objtype, @Unsigned int id);
    }
    public free free;
    
    static public interface print extends FP {
        StarChar function (StarVoid state, int objtype, @Unsigned int id);
    }
    public print print;
    
    static public interface close extends FP {
        void function (StarVoid state);
    }
    public close close;
    
    static public interface idregister extends FP {
        void function (StarVoid state, int objtype, StarVoid obj);
    }
    public idregister idregister;
    
}

// struct Agiddisc_s {		/* object ID allocator */
//     void *(*open) (Agraph_t * g, Agdisc_t*);	/* associated with a graph */
//     long (*map) (void *state, int objtype, char *str, unsigned long *id,
// 		 int createflag);
//     long (*alloc) (void *state, int objtype, unsigned long id);
//     void (*free) (void *state, int objtype, unsigned long id);
//     char *(*print) (void *state, int objtype, unsigned long id);
//     void (*close) (void *state);
//     void (*idregister) (void *state, int objtype, void *obj);
// };