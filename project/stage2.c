
#define INCLUDE_MEMORY
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "tree.h"
#include "gimple.h"
#include "tree-pass.h"
#include "ssa.h"
#include "gimple-iterator.h"
#include "gimple-walk.h"
#include "internal-fn.h"
#include "gimple-pretty-print.h"

// Included for dump_printf:
#include "tree-pretty-print.h"
#include "diagnostic.h"
#include "dumpfile.h"
#include "builtins.h"
//#include <stdlib.h>

// ============================================================= vvv
// Test pass



namespace {

const pass_data pass_data_ctyler =
{
  GIMPLE_PASS, /* type */
  "ctyler", /* name */
  OPTGROUP_NONE, /* optinfo_flags */
  TV_NONE, /* tv_id */
  PROP_cfg, /* properties_required */
  0, /* properties_provided */
  0, /* properties_destroyed */
  0, /* todo_flags_start */
  0, /* todo_flags_finish */
};

class pass_ctyler : public gimple_opt_pass
{
public:
  pass_ctyler (gcc::context *ctxt)
    : gimple_opt_pass (pass_data_ctyler, ctxt)
  {}

  /* opt_pass methods: */
  bool gate (function *)  final override {
  	return 1; // always execute pass
  }
  unsigned int execute (function *) final override;

}; // class pass_ctyler

unsigned int
pass_ctyler::execute (function *fun)
  {
    basic_block bb;

    int bb_cnt = 0, stmt_cnt = 0;


    FOR_EACH_BB_FN (bb, fun)
      {
        bb_cnt++;
        if (dump_file)
          {
            fprintf (dump_file, "===== Basic block count: %d =====\n", bb_cnt);
	        fprintf (dump_file, "test code\n");
            if (!fun || !fun->decl)
            {
                fprintf(dump_file, "Invalid function object.\n");
            }
            else 
            { // Print function name
                const char *func_name = IDENTIFIER_POINTER(DECL_NAME(fun->decl));
                fprintf(dump_file, "Function Name: %s\n", func_name);
            }
	  }

        for (gimple_stmt_iterator gsi = gsi_start_bb (bb); !gsi_end_p (gsi); gsi_next (&gsi))
          {
            gimple *g = gsi_stmt (gsi);
            stmt_cnt++;
            if (dump_file)
              {
                fprintf (dump_file, "----- Statement count: %d -----\n", stmt_cnt);
                print_gimple_stmt (dump_file, g, 0, TDF_VOPS|TDF_MEMSYMS);
              }
         }
       }

    return 0;

    if (dump_file)
      {
        fprintf (dump_file, "\n\n##### End ctyler diagnostics, start regular dump of current gimple #####\n\n\n");
      }

  }


} // anon namespace

gimple_opt_pass *
make_pass_ctyler (gcc::context *ctxt)
{
  return new pass_ctyler (ctxt);
}