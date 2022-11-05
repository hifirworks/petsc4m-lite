#include "petscGetString.h"
#include "petscGetString_types.h"
#include "m2c.h"
#include "petsc4m.h"

static boolean_T ab_isequal(const emxArray_char_T *varargin_1);
static boolean_T ac_isequal(const emxArray_char_T *varargin_1);
static boolean_T ad_isequal(const emxArray_char_T *varargin_1);
static boolean_T ae_isequal(const emxArray_char_T *varargin_1);
static boolean_T af_isequal(const emxArray_char_T *varargin_1);
static boolean_T ag_isequal(const emxArray_char_T *varargin_1);
static boolean_T b_isequal(const emxArray_char_T *varargin_1);
static boolean_T bb_isequal(const emxArray_char_T *varargin_1);
static boolean_T bc_isequal(const emxArray_char_T *varargin_1);
static boolean_T bd_isequal(const emxArray_char_T *varargin_1);
static boolean_T be_isequal(const emxArray_char_T *varargin_1);
static boolean_T bf_isequal(const emxArray_char_T *varargin_1);
static boolean_T bg_isequal(const emxArray_char_T *varargin_1);
static boolean_T c_isequal(const emxArray_char_T *varargin_1);
static boolean_T cb_isequal(const emxArray_char_T *varargin_1);
static boolean_T cc_isequal(const emxArray_char_T *varargin_1);
static boolean_T cd_isequal(const emxArray_char_T *varargin_1);
static boolean_T ce_isequal(const emxArray_char_T *varargin_1);
static boolean_T cf_isequal(const emxArray_char_T *varargin_1);
static boolean_T cg_isequal(const emxArray_char_T *varargin_1);
static boolean_T d_isequal(const emxArray_char_T *varargin_1);
static boolean_T db_isequal(const emxArray_char_T *varargin_1);
static boolean_T dc_isequal(const emxArray_char_T *varargin_1);
static boolean_T dd_isequal(const emxArray_char_T *varargin_1);
static boolean_T de_isequal(const emxArray_char_T *varargin_1);
static boolean_T df_isequal(const emxArray_char_T *varargin_1);
static boolean_T dg_isequal(const emxArray_char_T *varargin_1);
static boolean_T e_isequal(const emxArray_char_T *varargin_1);
static boolean_T eb_isequal(const emxArray_char_T *varargin_1);
static boolean_T ec_isequal(const emxArray_char_T *varargin_1);
static boolean_T ed_isequal(const emxArray_char_T *varargin_1);
static boolean_T ee_isequal(const emxArray_char_T *varargin_1);
static boolean_T ef_isequal(const emxArray_char_T *varargin_1);
static boolean_T eg_isequal(const emxArray_char_T *varargin_1);
static boolean_T f_isequal(const emxArray_char_T *varargin_1);
static boolean_T fb_isequal(const emxArray_char_T *varargin_1);
static boolean_T fc_isequal(const emxArray_char_T *varargin_1);
static boolean_T fd_isequal(const emxArray_char_T *varargin_1);
static boolean_T fe_isequal(const emxArray_char_T *varargin_1);
static boolean_T ff_isequal(const emxArray_char_T *varargin_1);
static boolean_T g_isequal(const emxArray_char_T *varargin_1);
static boolean_T gb_isequal(const emxArray_char_T *varargin_1);
static boolean_T gc_isequal(const emxArray_char_T *varargin_1);
static boolean_T gd_isequal(const emxArray_char_T *varargin_1);
static boolean_T ge_isequal(const emxArray_char_T *varargin_1);
static boolean_T gf_isequal(const emxArray_char_T *varargin_1);
static boolean_T h_isequal(const emxArray_char_T *varargin_1);
static boolean_T hb_isequal(const emxArray_char_T *varargin_1);
static boolean_T hc_isequal(const emxArray_char_T *varargin_1);
static boolean_T hd_isequal(const emxArray_char_T *varargin_1);
static boolean_T he_isequal(const emxArray_char_T *varargin_1);
static boolean_T hf_isequal(const emxArray_char_T *varargin_1);
static boolean_T i_isequal(const emxArray_char_T *varargin_1);
static boolean_T ib_isequal(const emxArray_char_T *varargin_1);
static boolean_T ic_isequal(const emxArray_char_T *varargin_1);
static boolean_T id_isequal(const emxArray_char_T *varargin_1);
static boolean_T ie_isequal(const emxArray_char_T *varargin_1);
static boolean_T if_isequal(const emxArray_char_T *varargin_1);
static boolean_T isequal(const emxArray_char_T *varargin_1);
static boolean_T j_isequal(const emxArray_char_T *varargin_1);
static boolean_T jb_isequal(const emxArray_char_T *varargin_1);
static boolean_T jc_isequal(const emxArray_char_T *varargin_1);
static boolean_T jd_isequal(const emxArray_char_T *varargin_1);
static boolean_T je_isequal(const emxArray_char_T *varargin_1);
static boolean_T jf_isequal(const emxArray_char_T *varargin_1);
static boolean_T k_isequal(const emxArray_char_T *varargin_1);
static boolean_T kb_isequal(const emxArray_char_T *varargin_1);
static boolean_T kc_isequal(const emxArray_char_T *varargin_1);
static boolean_T kd_isequal(const emxArray_char_T *varargin_1);
static boolean_T ke_isequal(const emxArray_char_T *varargin_1);
static boolean_T kf_isequal(const emxArray_char_T *varargin_1);
static boolean_T l_isequal(const emxArray_char_T *varargin_1);
static boolean_T lb_isequal(const emxArray_char_T *varargin_1);
static boolean_T lc_isequal(const emxArray_char_T *varargin_1);
static boolean_T ld_isequal(const emxArray_char_T *varargin_1);
static boolean_T le_isequal(const emxArray_char_T *varargin_1);
static boolean_T lf_isequal(const emxArray_char_T *varargin_1);
static void m2c_error(const emxArray_char_T *varargin_3);
static boolean_T m_isequal(const emxArray_char_T *varargin_1);
static boolean_T mb_isequal(const emxArray_char_T *varargin_1);
static boolean_T mc_isequal(const emxArray_char_T *varargin_1);
static boolean_T md_isequal(const emxArray_char_T *varargin_1);
static boolean_T me_isequal(const emxArray_char_T *varargin_1);
static boolean_T mf_isequal(const emxArray_char_T *varargin_1);
static boolean_T n_isequal(const emxArray_char_T *varargin_1);
static boolean_T nb_isequal(const emxArray_char_T *varargin_1);
static boolean_T nc_isequal(const emxArray_char_T *varargin_1);
static boolean_T nd_isequal(const emxArray_char_T *varargin_1);
static boolean_T ne_isequal(const emxArray_char_T *varargin_1);
static boolean_T nf_isequal(const emxArray_char_T *varargin_1);
static boolean_T o_isequal(const emxArray_char_T *varargin_1);
static boolean_T ob_isequal(const emxArray_char_T *varargin_1);
static boolean_T oc_isequal(const emxArray_char_T *varargin_1);
static boolean_T od_isequal(const emxArray_char_T *varargin_1);
static boolean_T oe_isequal(const emxArray_char_T *varargin_1);
static boolean_T of_isequal(const emxArray_char_T *varargin_1);
static boolean_T p_isequal(const emxArray_char_T *varargin_1);
static boolean_T pb_isequal(const emxArray_char_T *varargin_1);
static boolean_T pc_isequal(const emxArray_char_T *varargin_1);
static boolean_T pd_isequal(const emxArray_char_T *varargin_1);
static boolean_T pe_isequal(const emxArray_char_T *varargin_1);
static boolean_T pf_isequal(const emxArray_char_T *varargin_1);
static boolean_T q_isequal(const emxArray_char_T *varargin_1);
static boolean_T qb_isequal(const emxArray_char_T *varargin_1);
static boolean_T qc_isequal(const emxArray_char_T *varargin_1);
static boolean_T qd_isequal(const emxArray_char_T *varargin_1);
static boolean_T qe_isequal(const emxArray_char_T *varargin_1);
static boolean_T qf_isequal(const emxArray_char_T *varargin_1);
static boolean_T r_isequal(const emxArray_char_T *varargin_1);
static boolean_T rb_isequal(const emxArray_char_T *varargin_1);
static boolean_T rc_isequal(const emxArray_char_T *varargin_1);
static boolean_T rd_isequal(const emxArray_char_T *varargin_1);
static boolean_T re_isequal(const emxArray_char_T *varargin_1);
static boolean_T rf_isequal(const emxArray_char_T *varargin_1);
static boolean_T s_isequal(const emxArray_char_T *varargin_1);
static boolean_T sb_isequal(const emxArray_char_T *varargin_1);
static boolean_T sc_isequal(const emxArray_char_T *varargin_1);
static boolean_T sd_isequal(const emxArray_char_T *varargin_1);
static boolean_T se_isequal(const emxArray_char_T *varargin_1);
static boolean_T sf_isequal(const emxArray_char_T *varargin_1);
static boolean_T t_isequal(const emxArray_char_T *varargin_1);
static boolean_T tb_isequal(const emxArray_char_T *varargin_1);
static boolean_T tc_isequal(const emxArray_char_T *varargin_1);
static boolean_T td_isequal(const emxArray_char_T *varargin_1);
static boolean_T te_isequal(const emxArray_char_T *varargin_1);
static boolean_T tf_isequal(const emxArray_char_T *varargin_1);
static boolean_T u_isequal(const emxArray_char_T *varargin_1);
static boolean_T ub_isequal(const emxArray_char_T *varargin_1);
static boolean_T uc_isequal(const emxArray_char_T *varargin_1);
static boolean_T ud_isequal(const emxArray_char_T *varargin_1);
static boolean_T ue_isequal(const emxArray_char_T *varargin_1);
static boolean_T uf_isequal(const emxArray_char_T *varargin_1);
static boolean_T v_isequal(const emxArray_char_T *varargin_1);
static boolean_T vb_isequal(const emxArray_char_T *varargin_1);
static boolean_T vc_isequal(const emxArray_char_T *varargin_1);
static boolean_T vd_isequal(const emxArray_char_T *varargin_1);
static boolean_T ve_isequal(const emxArray_char_T *varargin_1);
static boolean_T vf_isequal(const emxArray_char_T *varargin_1);
static boolean_T w_isequal(const emxArray_char_T *varargin_1);
static boolean_T wb_isequal(const emxArray_char_T *varargin_1);
static boolean_T wc_isequal(const emxArray_char_T *varargin_1);
static boolean_T wd_isequal(const emxArray_char_T *varargin_1);
static boolean_T we_isequal(const emxArray_char_T *varargin_1);
static boolean_T wf_isequal(const emxArray_char_T *varargin_1);
static boolean_T x_isequal(const emxArray_char_T *varargin_1);
static boolean_T xb_isequal(const emxArray_char_T *varargin_1);
static boolean_T xc_isequal(const emxArray_char_T *varargin_1);
static boolean_T xd_isequal(const emxArray_char_T *varargin_1);
static boolean_T xe_isequal(const emxArray_char_T *varargin_1);
static boolean_T xf_isequal(const emxArray_char_T *varargin_1);
static boolean_T y_isequal(const emxArray_char_T *varargin_1);
static boolean_T yb_isequal(const emxArray_char_T *varargin_1);
static boolean_T yc_isequal(const emxArray_char_T *varargin_1);
static boolean_T yd_isequal(const emxArray_char_T *varargin_1);
static boolean_T ye_isequal(const emxArray_char_T *varargin_1);
static boolean_T yf_isequal(const emxArray_char_T *varargin_1);
static boolean_T ab_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[12] = { 'M', 'A', 'T', 'E', 'L', 'E', 'M', 'E', 'N', 'T',
    'A', 'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 12);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 12)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ac_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[7] = { 'M', 'A', 'T', 'N', 'E', 'S', 'T' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 7);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 7)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ad_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'K', 'S', 'P', 'L', 'G', 'M', 'R', 'E', 'S' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ae_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[6] = { 'P', 'C', 'N', 'O', 'N', 'E' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 6);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T af_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[10] = { 'P', 'C', 'G', 'A', 'L', 'E', 'R', 'K', 'I', 'N'
  };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 10);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 10)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ag_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[15] = { 'M', 'A', 'T', 'S', 'O', 'L', 'V', 'E', 'R', 'P',
    'A', 'S', 'T', 'I', 'X' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 15);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 15)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T b_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[7] = { 'M', 'A', 'T', 'S', 'A', 'M', 'E' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 7);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 7)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T bb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[7] = { 'M', 'A', 'T', 'B', 'A', 'I', 'J' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 7);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 7)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T bc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[15] = { 'M', 'A', 'T', 'P', 'R', 'E', 'A', 'L', 'L', 'O',
    'C', 'A', 'T', 'O', 'R' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 15);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 15)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T bd_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'K', 'S', 'P', 'D', 'G', 'M', 'R', 'E', 'S' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T be_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[8] = { 'P', 'C', 'J', 'A', 'C', 'O', 'B', 'I' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 8);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 8)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T bf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[8] = { 'P', 'C', 'E', 'X', 'O', 'T', 'I', 'C' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 8);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 8)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T bg_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[15] = { 'M', 'A', 'T', 'S', 'O', 'L', 'V', 'E', 'R', 'M',
    'A', 'T', 'L', 'A', 'B' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 15);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 15)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T c_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[7] = { 'M', 'A', 'T', 'M', 'A', 'I', 'J' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 7);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 7)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T cb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[10] = { 'M', 'A', 'T', 'S', 'E', 'Q', 'B', 'A', 'I', 'J'
  };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 10);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 10)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T cc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[6] = { 'V', 'E', 'C', 'S', 'E', 'Q' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 6);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T cd_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'K', 'S', 'P', 'P', 'G', 'M', 'R', 'E', 'S' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ce_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[5] = { 'P', 'C', 'S', 'O', 'R' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 5);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T cf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[4] = { 'P', 'C', 'C', 'P' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 4);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T cg_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[14] = { 'M', 'A', 'T', 'S', 'O', 'L', 'V', 'E', 'R', 'P',
    'E', 'T', 'S', 'C' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 14);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 14)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T d_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[10] = { 'M', 'A', 'T', 'S', 'E', 'Q', 'M', 'A', 'I', 'J'
  };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 10);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 10)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T db_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[10] = { 'M', 'A', 'T', 'M', 'P', 'I', 'B', 'A', 'I', 'J'
  };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 10);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 10)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T dc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[6] = { 'V', 'E', 'C', 'M', 'P', 'I' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 6);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T dd_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[8] = { 'K', 'S', 'P', 'T', 'C', 'Q', 'M', 'R' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 8);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 8)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T de_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[4] = { 'P', 'C', 'L', 'U' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 4);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T df_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[6] = { 'P', 'C', 'B', 'F', 'B', 'T' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 6);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T dg_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[12] = { 'M', 'A', 'T', 'S', 'O', 'L', 'V', 'E', 'R', 'B',
    'A', 'S' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 12);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 12)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T e_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[10] = { 'M', 'A', 'T', 'M', 'P', 'I', 'M', 'A', 'I', 'J'
  };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 10);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 10)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T eb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'M', 'A', 'T', 'M', 'P', 'I', 'A', 'D', 'J' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ec_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[11] = { 'V', 'E', 'C', 'S', 'T', 'A', 'N', 'D', 'A', 'R',
    'D' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 11);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ed_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[7] = { 'K', 'S', 'P', 'B', 'C', 'G', 'S' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 7);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 7)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ee_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[7] = { 'P', 'C', 'S', 'H', 'E', 'L', 'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 7);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 7)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ef_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[5] = { 'P', 'C', 'L', 'S', 'C' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 5);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T eg_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[17] = { 'M', 'A', 'T', 'S', 'O', 'L', 'V', 'E', 'R', 'C',
    'U', 'S', 'P', 'A', 'R', 'S', 'E' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 17);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 17)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T f_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[5] = { 'M', 'A', 'T', 'I', 'S' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 5);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T fb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[8] = { 'M', 'A', 'T', 'S', 'B', 'A', 'I', 'J' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 8);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 8)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T fc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'V', 'E', 'C', 'S', 'H', 'A', 'R', 'E', 'D' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T fd_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[8] = { 'K', 'S', 'P', 'I', 'B', 'C', 'G', 'S' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 8);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 8)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T fe_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'P', 'C', 'B', 'J', 'A', 'C', 'O', 'B', 'I' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ff_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[8] = { 'P', 'C', 'P', 'Y', 'T', 'H', 'O', 'N' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 8);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 8)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T g_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[6] = { 'M', 'A', 'T', 'A', 'I', 'J' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 6);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T gb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[11] = { 'M', 'A', 'T', 'S', 'E', 'Q', 'S', 'B', 'A', 'I',
    'J' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 11);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T gc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[14] = { 'V', 'E', 'C', 'S', 'E', 'Q', 'V', 'I', 'E', 'N',
    'N', 'A', 'C', 'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 14);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 14)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T gd_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[8] = { 'K', 'S', 'P', 'F', 'B', 'C', 'G', 'S' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 8);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 8)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ge_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[4] = { 'P', 'C', 'M', 'G' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 4);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T gf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[6] = { 'P', 'C', 'P', 'F', 'M', 'G' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 6);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T h_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'M', 'A', 'T', 'S', 'E', 'Q', 'A', 'I', 'J' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T hb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[11] = { 'M', 'A', 'T', 'M', 'P', 'I', 'S', 'B', 'A', 'I',
    'J' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 11);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T hc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[14] = { 'V', 'E', 'C', 'M', 'P', 'I', 'V', 'I', 'E', 'N',
    'N', 'A', 'C', 'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 14);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 14)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T hd_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'K', 'S', 'P', 'F', 'B', 'C', 'G', 'S', 'R' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T he_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[11] = { 'P', 'C', 'E', 'I', 'S', 'E', 'N', 'S', 'T', 'A',
    'T' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 11);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T hf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'P', 'C', 'S', 'Y', 'S', 'P', 'F', 'M', 'G' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T i_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'M', 'A', 'T', 'M', 'P', 'I', 'A', 'I', 'J' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ib_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[7] = { 'M', 'A', 'T', 'M', 'F', 'F', 'D' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 7);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 7)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ic_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[11] = { 'V', 'E', 'C', 'V', 'I', 'E', 'N', 'N', 'A', 'C',
    'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 11);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T id_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[8] = { 'K', 'S', 'P', 'B', 'C', 'G', 'S', 'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 8);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 8)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ie_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[5] = { 'P', 'C', 'I', 'L', 'U' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 5);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T if_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[14] = { 'P', 'C', 'R', 'E', 'D', 'I', 'S', 'T', 'R', 'I',
    'B', 'U', 'T', 'E' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 14);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 14)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[17] = { 'P', 'E', 'T', 'S', 'C', '_', 'N', 'U', 'L', 'L',
    '_', 'S', 'T', 'R', 'I', 'N', 'G' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 17);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 17)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T j_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'M', 'A', 'T', 'A', 'I', 'J', 'C', 'R', 'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T jb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'M', 'A', 'T', 'N', 'O', 'R', 'M', 'A', 'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T jc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[10] = { 'V', 'E', 'C', 'S', 'E', 'Q', 'C', 'U', 'D', 'A'
  };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 10);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 10)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T jd_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[6] = { 'K', 'S', 'P', 'C', 'G', 'S' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 6);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T je_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[5] = { 'P', 'C', 'I', 'C', 'C' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 5);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T jf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[5] = { 'P', 'C', 'S', 'V', 'D' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 5);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T k_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[12] = { 'M', 'A', 'T', 'S', 'E', 'Q', 'A', 'I', 'J', 'C',
    'R', 'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 12);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 12)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T kb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[18] = { 'M', 'A', 'T', 'N', 'O', 'R', 'M', 'A', 'L', 'H',
    'E', 'R', 'M', 'I', 'T', 'I', 'A', 'N' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 18);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 18)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T kc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[10] = { 'V', 'E', 'C', 'M', 'P', 'I', 'C', 'U', 'D', 'A'
  };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 10);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 10)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T kd_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[8] = { 'K', 'S', 'P', 'T', 'F', 'Q', 'M', 'R' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 8);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 8)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ke_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[5] = { 'P', 'C', 'A', 'S', 'M' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 5);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T kf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[6] = { 'P', 'C', 'G', 'A', 'M', 'G' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 6);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T l_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[12] = { 'M', 'A', 'T', 'M', 'P', 'I', 'A', 'I', 'J', 'C',
    'R', 'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 12);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 12)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T lb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[6] = { 'M', 'A', 'T', 'L', 'R', 'C' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 6);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T lc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[7] = { 'V', 'E', 'C', 'C', 'U', 'D', 'A' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 7);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 7)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ld_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[5] = { 'K', 'S', 'P', 'C', 'R' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 5);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T le_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[6] = { 'P', 'C', 'G', 'A', 'S', 'M' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 6);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T lf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[6] = { 'P', 'C', 'B', 'D', 'D', 'C' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 6);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static void m2c_error(const emxArray_char_T *varargin_3)
{
  emxArray_char_T *b_varargin_3;
  int i;
  int loop_ub;
  const char *varargin_3_data;
  char *b_varargin_3_data;
  varargin_3_data = varargin_3->data;
  emxInit_char_T(&b_varargin_3, 2);
  i = b_varargin_3->size[0] * b_varargin_3->size[1];
  b_varargin_3->size[0] = 1;
  b_varargin_3->size[1] = varargin_3->size[1];
  emxEnsureCapacity_char_T(b_varargin_3, i);
  b_varargin_3_data = b_varargin_3->data;
  loop_ub = varargin_3->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_varargin_3_data[i] = varargin_3_data[i];
  }

  M2C_error("petscGetNum:UnknownConstant", "Unknonw constant %s.",
            &b_varargin_3_data[0]);
  emxFree_char_T(&b_varargin_3);
}

static boolean_T m_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[14] = { 'M', 'A', 'T', 'A', 'I', 'J', 'C', 'U', 'S', 'P',
    'A', 'R', 'S', 'E' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 14);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 14)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T mb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[10] = { 'M', 'A', 'T', 'S', 'C', 'A', 'T', 'T', 'E', 'R'
  };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 10);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 10)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T mc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[7] = { 'V', 'E', 'C', 'N', 'E', 'S', 'T' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 7);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 7)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T md_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'K', 'S', 'P', 'P', 'I', 'P', 'E', 'C', 'R' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T me_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[5] = { 'P', 'C', 'K', 'S', 'P' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 5);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T mf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[10] = { 'P', 'C', 'K', 'A', 'C', 'Z', 'M', 'A', 'R', 'Z'
  };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 10);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 10)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T n_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[17] = { 'M', 'A', 'T', 'S', 'E', 'Q', 'A', 'I', 'J', 'C',
    'U', 'S', 'P', 'A', 'R', 'S', 'E' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 17);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 17)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T nb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[11] = { 'M', 'A', 'T', 'B', 'L', 'O', 'C', 'K', 'M', 'A',
    'T' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 11);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T nc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[13] = { 'K', 'S', 'P', 'R', 'I', 'C', 'H', 'A', 'R', 'D',
    'S', 'O', 'N' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 13);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 13)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T nd_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[7] = { 'K', 'S', 'P', 'L', 'S', 'Q', 'R' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 7);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 7)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ne_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[11] = { 'P', 'C', 'C', 'O', 'M', 'P', 'O', 'S', 'I', 'T',
    'E' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 11);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T nf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[11] = { 'P', 'C', 'T', 'E', 'L', 'E', 'S', 'C', 'O', 'P',
    'E' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 11);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T o_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[17] = { 'M', 'A', 'T', 'M', 'P', 'I', 'A', 'I', 'J', 'C',
    'U', 'S', 'P', 'A', 'R', 'S', 'E' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 17);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 17)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ob_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[12] = { 'M', 'A', 'T', 'C', 'O', 'M', 'P', 'O', 'S', 'I',
    'T', 'E' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 12);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 12)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T oc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[12] = { 'K', 'S', 'P', 'C', 'H', 'E', 'B', 'Y', 'S', 'H',
    'E', 'V' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 12);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 12)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T od_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[10] = { 'K', 'S', 'P', 'P', 'R', 'E', 'O', 'N', 'L', 'Y'
  };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 10);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 10)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T oe_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[11] = { 'P', 'C', 'R', 'E', 'D', 'U', 'N', 'D', 'A', 'N',
    'T' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 11);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T of_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[16] = { 'M', 'A', 'T', 'S', 'O', 'L', 'V', 'E', 'R', 'S',
    'U', 'P', 'E', 'R', 'L', 'U' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 16);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 16)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T p_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[14] = { 'M', 'A', 'T', 'A', 'I', 'J', 'V', 'I', 'E', 'N',
    'N', 'A', 'C', 'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 14);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 14)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T pb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[6] = { 'M', 'A', 'T', 'F', 'F', 'T' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 6);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T pc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[5] = { 'K', 'S', 'P', 'C', 'G' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 5);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T pd_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[6] = { 'K', 'S', 'P', 'Q', 'C', 'G' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 6);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T pe_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[6] = { 'P', 'C', 'S', 'P', 'A', 'I' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 6);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T pf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[21] = { 'M', 'A', 'T', 'S', 'O', 'L', 'V', 'E', 'R', 'S',
    'U', 'P', 'E', 'R', 'L', 'U', '_', 'D', 'I', 'S', 'T' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 21);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 21)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T q_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[17] = { 'M', 'A', 'T', 'S', 'E', 'Q', 'A', 'I', 'J', 'V',
    'I', 'E', 'N', 'N', 'A', 'C', 'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 17);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 17)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T qb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[7] = { 'M', 'A', 'T', 'F', 'F', 'T', 'W' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 7);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 7)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T qc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[10] = { 'K', 'S', 'P', 'G', 'R', 'O', 'P', 'P', 'C', 'G'
  };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 10);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 10)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T qd_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[7] = { 'K', 'S', 'P', 'B', 'I', 'C', 'G' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 7);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 7)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T qe_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[4] = { 'P', 'C', 'N', 'N' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 4);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T qf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[16] = { 'M', 'A', 'T', 'S', 'O', 'L', 'V', 'E', 'R', 'U',
    'M', 'F', 'P', 'A', 'C', 'K' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 16);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 16)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T r_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[17] = { 'M', 'A', 'T', 'M', 'P', 'I', 'A', 'I', 'J', 'V',
    'I', 'E', 'N', 'N', 'A', 'C', 'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 17);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 17)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T rb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[11] = { 'M', 'A', 'T', 'S', 'E', 'Q', 'C', 'U', 'F', 'F',
    'T' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 11);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T rc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'K', 'S', 'P', 'P', 'I', 'P', 'E', 'C', 'G' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T rd_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'K', 'S', 'P', 'M', 'I', 'N', 'R', 'E', 'S' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T re_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[10] = { 'P', 'C', 'C', 'H', 'O', 'L', 'E', 'S', 'K', 'Y'
  };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 10);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 10)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T rf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[16] = { 'M', 'A', 'T', 'S', 'O', 'L', 'V', 'E', 'R', 'C',
    'H', 'O', 'L', 'M', 'O', 'D' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 16);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 16)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T s_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[10] = { 'M', 'A', 'T', 'A', 'I', 'J', 'P', 'E', 'R', 'M'
  };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 10);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 10)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T sb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[15] = { 'M', 'A', 'T', 'T', 'R', 'A', 'N', 'S', 'P', 'O',
    'S', 'E', 'M', 'A', 'T' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 15);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 15)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T sc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[11] = { 'K', 'S', 'P', 'P', 'I', 'P', 'E', 'C', 'G', 'R',
    'R' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 11);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T sd_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'K', 'S', 'P', 'S', 'Y', 'M', 'M', 'L', 'Q' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T se_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[10] = { 'P', 'C', 'P', 'B', 'J', 'A', 'C', 'O', 'B', 'I'
  };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 10);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 10)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T sf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[12] = { 'M', 'A', 'T', 'S', 'O', 'L', 'V', 'E', 'R', 'K',
    'L', 'U' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 12);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 12)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T t_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[13] = { 'M', 'A', 'T', 'S', 'E', 'Q', 'A', 'I', 'J', 'P',
    'E', 'R', 'M' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 13);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 13)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T tb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[18] = { 'M', 'A', 'T', 'S', 'C', 'H', 'U', 'R', 'C', 'O',
    'M', 'P', 'L', 'E', 'M', 'E', 'N', 'T' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 18);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 18)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T tc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[7] = { 'K', 'S', 'P', 'C', 'G', 'N', 'E' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 7);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 7)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T td_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[6] = { 'K', 'S', 'P', 'L', 'C', 'D' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 6);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T te_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[5] = { 'P', 'C', 'M', 'A', 'T' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 5);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T tf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[18] = { 'M', 'A', 'T', 'S', 'O', 'L', 'V', 'E', 'R', 'E',
    'L', 'E', 'M', 'E', 'N', 'T', 'A', 'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 18);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 18)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T u_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[13] = { 'M', 'A', 'T', 'M', 'P', 'I', 'A', 'I', 'J', 'P',
    'E', 'R', 'M' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 13);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 13)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ub_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'M', 'A', 'T', 'P', 'Y', 'T', 'H', 'O', 'N' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T uc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[6] = { 'K', 'S', 'P', 'F', 'C', 'G' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 6);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ud_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'K', 'S', 'P', 'P', 'Y', 'T', 'H', 'O', 'N' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ue_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[7] = { 'P', 'C', 'H', 'Y', 'P', 'R', 'E' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 7);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 7)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T uf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[13] = { 'M', 'A', 'T', 'S', 'O', 'L', 'V', 'E', 'R', 'E',
    'S', 'S', 'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 13);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 13)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T v_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[8] = { 'M', 'A', 'T', 'S', 'H', 'E', 'L', 'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 8);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 8)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T vb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[14] = { 'M', 'A', 'T', 'H', 'Y', 'P', 'R', 'E', 'S', 'T',
    'R', 'U', 'C', 'T' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 14);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 14)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T vc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[10] = { 'K', 'S', 'P', 'P', 'I', 'P', 'E', 'F', 'C', 'G'
  };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 10);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 10)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T vd_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[6] = { 'K', 'S', 'P', 'G', 'C', 'R' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 6);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ve_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[7] = { 'P', 'C', 'P', 'A', 'R', 'M', 'S' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 7);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 7)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T vf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[14] = { 'M', 'A', 'T', 'S', 'O', 'L', 'V', 'E', 'R', 'L',
    'U', 'S', 'O', 'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 14);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 14)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T w_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[8] = { 'M', 'A', 'T', 'D', 'E', 'N', 'S', 'E' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 8);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 8)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T wb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[15] = { 'M', 'A', 'T', 'H', 'Y', 'P', 'R', 'E', 'S', 'S',
    'T', 'R', 'U', 'C', 'T' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 15);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 15)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T wc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[8] = { 'K', 'S', 'P', 'G', 'M', 'R', 'E', 'S' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 8);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 8)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T wd_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[10] = { 'K', 'S', 'P', 'P', 'I', 'P', 'E', 'G', 'C', 'R'
  };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 10);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 10)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T we_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[12] = { 'P', 'C', 'F', 'I', 'E', 'L', 'D', 'S', 'P', 'L',
    'I', 'T' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 12);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 12)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T wf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[14] = { 'M', 'A', 'T', 'S', 'O', 'L', 'V', 'E', 'R', 'M',
    'U', 'M', 'P', 'S' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 14);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 14)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T x_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[11] = { 'M', 'A', 'T', 'S', 'E', 'Q', 'D', 'E', 'N', 'S',
    'E' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 11);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T xb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[12] = { 'M', 'A', 'T', 'S', 'U', 'B', 'M', 'A', 'T', 'R',
    'I', 'X' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 12);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 12)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T xc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[13] = { 'K', 'S', 'P', 'P', 'I', 'P', 'E', 'F', 'G', 'M',
    'R', 'E', 'S' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 13);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 13)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T xd_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[8] = { 'K', 'S', 'P', 'T', 'S', 'I', 'R', 'M' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 8);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 8)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T xe_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[5] = { 'P', 'C', 'T', 'F', 'S' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 5);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T xf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[20] = { 'M', 'A', 'T', 'S', 'O', 'L', 'V', 'E', 'R', 'M',
    'K', 'L', '_', 'P', 'A', 'R', 'D', 'I', 'S', 'O' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 20);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 20)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T y_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[11] = { 'M', 'A', 'T', 'M', 'P', 'I', 'D', 'E', 'N', 'S',
    'E' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 11);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T yb_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[11] = { 'M', 'A', 'T', 'L', 'O', 'C', 'A', 'L', 'R', 'E',
    'F' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 11);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T yc_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[9] = { 'K', 'S', 'P', 'F', 'G', 'M', 'R', 'E', 'S' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 9);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T yd_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[7] = { 'K', 'S', 'P', 'C', 'G', 'L', 'S' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 7);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 7)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T ye_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[4] = { 'P', 'C', 'M', 'L' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 4);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

static boolean_T yf_isequal(const emxArray_char_T *varargin_1)
{
  static const char cv[21] = { 'M', 'A', 'T', 'S', 'O', 'L', 'V', 'E', 'R', 'M',
    'K', 'L', '_', 'C', 'P', 'A', 'R', 'D', 'I', 'S', 'O' };

  const char *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = (varargin_1->size[1] == 21);
  if (p && (varargin_1->size[1] != 0)) {
    int k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 21)) {
      if (varargin_1_data[k] != cv[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return p;
}

void petscGetString(const emxArray_char_T *name, emxArray_char_T *str, boolean_T
                    *toplevel)
{
  emxArray_char_T *b_name;
  emxArray_uint8_T *str1;
  int empty;
  int i;
  const char *name_data;
  unsigned char *str1_data;
  char *str_data;
  name_data = name->data;
  emxInit_uint8_T(&str1, 1);
  str1_data = str1->data;
  if (isequal(name)) {
    const char * b_str;
    b_str = (NULL);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (b_isequal(name)) {
    const char * b_str;
    b_str = (MATSAME);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (c_isequal(name)) {
    const char * b_str;
    b_str = (MATMAIJ);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (d_isequal(name)) {
    const char * b_str;
    b_str = (MATSEQMAIJ);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (e_isequal(name)) {
    const char * b_str;
    b_str = (MATMPIMAIJ);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (f_isequal(name)) {
    const char * b_str;
    b_str = (MATIS);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (g_isequal(name)) {
    const char * b_str;
    b_str = (MATAIJ);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (h_isequal(name)) {
    const char * b_str;
    b_str = (MATSEQAIJ);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (i_isequal(name)) {
    const char * b_str;
    b_str = (MATMPIAIJ);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (j_isequal(name)) {
    const char * b_str;
    b_str = (MATMPIAIJ);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (k_isequal(name)) {
    const char * b_str;
    b_str = (MATSEQAIJCRL);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (l_isequal(name)) {
    const char * b_str;
    b_str = (MATMPIAIJCRL);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (m_isequal(name)) {
    const char * b_str;
    b_str = (MATAIJCUSPARSE);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (n_isequal(name)) {
    const char * b_str;
    b_str = (MATSEQAIJCUSPARSE);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (o_isequal(name)) {
    const char * b_str;
    b_str = (MATMPIAIJCUSPARSE);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (p_isequal(name)) {
    const char * b_str;
    b_str = (MATAIJVIENNACL);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (q_isequal(name)) {
    const char * b_str;
    b_str = (MATSEQAIJVIENNACL);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (r_isequal(name)) {
    const char * b_str;
    b_str = (MATMPIAIJVIENNACL);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (s_isequal(name)) {
    const char * b_str;
    b_str = (MATAIJPERM);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (t_isequal(name)) {
    const char * b_str;
    b_str = (MATSEQAIJPERM);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (u_isequal(name)) {
    const char * b_str;
    b_str = (MATMPIAIJPERM);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (v_isequal(name)) {
    const char * b_str;
    b_str = (MATSHELL);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (w_isequal(name)) {
    const char * b_str;
    b_str = (MATDENSE);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (x_isequal(name)) {
    const char * b_str;
    b_str = (MATSEQDENSE);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (y_isequal(name)) {
    const char * b_str;
    b_str = (MATMPIDENSE);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ab_isequal(name)) {
    const char * b_str;
    b_str = (MATELEMENTAL);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (bb_isequal(name)) {
    const char * b_str;
    b_str = (MATBAIJ);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (cb_isequal(name)) {
    const char * b_str;
    b_str = (MATSEQBAIJ);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (db_isequal(name)) {
    const char * b_str;
    b_str = (MATMPIBAIJ);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (eb_isequal(name)) {
    const char * b_str;
    b_str = (MATMPIADJ);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (fb_isequal(name)) {
    const char * b_str;
    b_str = (MATSBAIJ);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (gb_isequal(name)) {
    const char * b_str;
    b_str = (MATSEQSBAIJ);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (hb_isequal(name)) {
    const char * b_str;
    b_str = (MATMPISBAIJ);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ib_isequal(name)) {
    const char * b_str;
    b_str = (MATMFFD);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (jb_isequal(name)) {
    const char * b_str;
    b_str = (MATNORMAL);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (kb_isequal(name)) {
    const char * b_str;
    b_str = (MATNORMALHERMITIAN);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (lb_isequal(name)) {
    const char * b_str;
    b_str = (MATLRC);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (mb_isequal(name)) {
    const char * b_str;
    b_str = (MATSCATTER);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (nb_isequal(name)) {
    const char * b_str;
    b_str = (MATBLOCKMAT);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ob_isequal(name)) {
    const char * b_str;
    b_str = (MATCOMPOSITE);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (pb_isequal(name)) {
    const char * b_str;
    b_str = (MATFFT);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (qb_isequal(name)) {
    const char * b_str;
    b_str = (MATFFTW);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (rb_isequal(name)) {
    const char * b_str;
    b_str = (MATSEQCUFFT);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (sb_isequal(name)) {
    const char * b_str;
    b_str = (MATTRANSPOSEMAT);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (tb_isequal(name)) {
    const char * b_str;
    b_str = (MATSCHURCOMPLEMENT);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ub_isequal(name)) {
    const char * b_str;
    b_str = (MATPYTHON);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (vb_isequal(name)) {
    const char * b_str;
    b_str = (MATHYPRESTRUCT);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (wb_isequal(name)) {
    const char * b_str;
    b_str = (MATHYPRESSTRUCT);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (xb_isequal(name)) {
    const char * b_str;
    b_str = (MATSUBMATRIX);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (yb_isequal(name)) {
    const char * b_str;
    b_str = (MATSUBMATRIX);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ac_isequal(name)) {
    const char * b_str;
    b_str = (MATNEST);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (bc_isequal(name)) {
    const char * b_str;
    b_str = (MATPREALLOCATOR);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (cc_isequal(name)) {
    const char * b_str;
    b_str = (VECSEQ);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (dc_isequal(name)) {
    const char * b_str;
    b_str = (VECMPI);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ec_isequal(name)) {
    const char * b_str;
    b_str = (VECSTANDARD);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (fc_isequal(name)) {
    const char * b_str;
    b_str = (VECSHARED);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (gc_isequal(name)) {
    const char * b_str;
    b_str = (VECSEQVIENNACL);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (hc_isequal(name)) {
    const char * b_str;
    b_str = (VECMPIVIENNACL);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ic_isequal(name)) {
    const char * b_str;
    b_str = (VECVIENNACL);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (jc_isequal(name)) {
    const char * b_str;
    b_str = (VECSEQCUDA);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (kc_isequal(name)) {
    const char * b_str;
    b_str = (VECMPICUDA);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (lc_isequal(name)) {
    const char * b_str;
    b_str = (VECCUDA);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (mc_isequal(name)) {
    const char * b_str;
    b_str = (VECNEST);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (nc_isequal(name)) {
    const char * b_str;
    b_str = (KSPRICHARDSON);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (oc_isequal(name)) {
    const char * b_str;
    b_str = (KSPCHEBYSHEV);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (pc_isequal(name)) {
    const char * b_str;
    b_str = (KSPCG);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (qc_isequal(name)) {
    const char * b_str;
    b_str = (KSPGROPPCG);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (rc_isequal(name)) {
    const char * b_str;
    b_str = (KSPPIPECG);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (sc_isequal(name)) {
    const char * b_str;
    b_str = (KSPPIPECGRR);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (tc_isequal(name)) {
    const char * b_str;
    b_str = (KSPCGNE);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (uc_isequal(name)) {
    const char * b_str;
    b_str = (KSPFCG);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (vc_isequal(name)) {
    const char * b_str;
    b_str = (KSPPIPEFCG);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (wc_isequal(name)) {
    const char * b_str;
    b_str = (KSPGMRES);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (xc_isequal(name)) {
    const char * b_str;
    b_str = (KSPPIPEFGMRES);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (yc_isequal(name)) {
    const char * b_str;
    b_str = (KSPFGMRES);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ad_isequal(name)) {
    const char * b_str;
    b_str = (KSPLGMRES);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (bd_isequal(name)) {
    const char * b_str;
    b_str = (KSPDGMRES);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (cd_isequal(name)) {
    const char * b_str;
    b_str = (KSPPGMRES);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (dd_isequal(name)) {
    const char * b_str;
    b_str = (KSPTCQMR);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ed_isequal(name)) {
    const char * b_str;
    b_str = (KSPBCGS);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (fd_isequal(name)) {
    const char * b_str;
    b_str = (KSPIBCGS);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (gd_isequal(name)) {
    const char * b_str;
    b_str = (KSPFBCGS);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (hd_isequal(name)) {
    const char * b_str;
    b_str = (KSPFBCGSR);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (id_isequal(name)) {
    const char * b_str;
    b_str = (KSPBCGSL);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (jd_isequal(name)) {
    const char * b_str;
    b_str = (KSPCGS);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (kd_isequal(name)) {
    const char * b_str;
    b_str = (KSPTFQMR);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ld_isequal(name)) {
    const char * b_str;
    b_str = (KSPCR);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (md_isequal(name)) {
    const char * b_str;
    b_str = (KSPPIPECR);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (nd_isequal(name)) {
    const char * b_str;
    b_str = (KSPLSQR);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (od_isequal(name)) {
    const char * b_str;
    b_str = (KSPPREONLY);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (pd_isequal(name)) {
    const char * b_str;
    b_str = (KSPQCG);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (qd_isequal(name)) {
    const char * b_str;
    b_str = (KSPBICG);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (rd_isequal(name)) {
    const char * b_str;
    b_str = (KSPMINRES);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (sd_isequal(name)) {
    const char * b_str;
    b_str = (KSPSYMMLQ);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (td_isequal(name)) {
    const char * b_str;
    b_str = (KSPLCD);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ud_isequal(name)) {
    const char * b_str;
    b_str = (KSPPYTHON);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (vd_isequal(name)) {
    const char * b_str;
    b_str = (KSPGCR);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (wd_isequal(name)) {
    const char * b_str;
    b_str = (KSPPIPEGCR);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (xd_isequal(name)) {
    const char * b_str;
    b_str = (KSPTSIRM);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (yd_isequal(name)) {
    const char * b_str;
    b_str = (KSPCGLS);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ae_isequal(name)) {
    const char * b_str;
    b_str = (PCNONE);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (be_isequal(name)) {
    const char * b_str;
    b_str = (PCJACOBI);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ce_isequal(name)) {
    const char * b_str;
    b_str = (PCSOR);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (de_isequal(name)) {
    const char * b_str;
    b_str = (PCLU);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ee_isequal(name)) {
    const char * b_str;
    b_str = (PCSHELL);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (fe_isequal(name)) {
    const char * b_str;
    b_str = (PCBJACOBI);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ge_isequal(name)) {
    const char * b_str;
    b_str = (PCMG);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (he_isequal(name)) {
    const char * b_str;
    b_str = (PCEISENSTAT);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ie_isequal(name)) {
    const char * b_str;
    b_str = (PCILU);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (je_isequal(name)) {
    const char * b_str;
    b_str = (PCICC);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ke_isequal(name)) {
    const char * b_str;
    b_str = (PCASM);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (le_isequal(name)) {
    const char * b_str;
    b_str = (PCGASM);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (me_isequal(name)) {
    const char * b_str;
    b_str = (PCKSP);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ne_isequal(name)) {
    const char * b_str;
    b_str = (PCCOMPOSITE);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (oe_isequal(name)) {
    const char * b_str;
    b_str = (PCREDUNDANT);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (pe_isequal(name)) {
    const char * b_str;
    b_str = (PCSPAI);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (qe_isequal(name)) {
    const char * b_str;
    b_str = (PCNN);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (re_isequal(name)) {
    const char * b_str;
    b_str = (PCCHOLESKY);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (se_isequal(name)) {
    const char * b_str;
    b_str = (PCPBJACOBI);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (te_isequal(name)) {
    const char * b_str;
    b_str = (PCMAT);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ue_isequal(name)) {
    const char * b_str;
    b_str = (PCHYPRE);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ve_isequal(name)) {
    const char * b_str;
    b_str = (PCPARMS);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (we_isequal(name)) {
    const char * b_str;
    b_str = (PCFIELDSPLIT);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (xe_isequal(name)) {
    const char * b_str;
    b_str = (PCTFS);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ye_isequal(name)) {
    const char * b_str;
    b_str = (PCML);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (af_isequal(name)) {
    const char * b_str;
    b_str = (PCGALERKIN);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (bf_isequal(name)) {
    const char * b_str;
    b_str = (PCEXOTIC);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (cf_isequal(name)) {
    const char * b_str;
    b_str = (PCCP);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (df_isequal(name)) {
    const char * b_str;
    b_str = (PCBFBT);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ef_isequal(name)) {
    const char * b_str;
    b_str = (PCLSC);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ff_isequal(name)) {
    const char * b_str;
    b_str = (PCPYTHON);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (gf_isequal(name)) {
    const char * b_str;
    b_str = (PCPFMG);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (hf_isequal(name)) {
    const char * b_str;
    b_str = (PCSYSPFMG);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (if_isequal(name)) {
    const char * b_str;
    b_str = (PCREDISTRIBUTE);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (jf_isequal(name)) {
    const char * b_str;
    b_str = (PCSVD);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (kf_isequal(name)) {
    const char * b_str;
    b_str = (PCGAMG);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (lf_isequal(name)) {
    const char * b_str;
    b_str = (PCBDDC);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (mf_isequal(name)) {
    const char * b_str;
    b_str = (PCKACZMARZ);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (nf_isequal(name)) {
    const char * b_str;
    b_str = (PCTELESCOPE);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (of_isequal(name)) {
    const char * b_str;
    b_str = (MATSOLVERSUPERLU);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (pf_isequal(name)) {
    const char * b_str;
    b_str = (MATSOLVERSUPERLU_DIST);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (qf_isequal(name)) {
    const char * b_str;
    b_str = (MATSOLVERUMFPACK);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (rf_isequal(name)) {
    const char * b_str;
    b_str = (MATSOLVERCHOLMOD);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (sf_isequal(name)) {
    const char * b_str;
    b_str = (MATSOLVERKLU);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (tf_isequal(name)) {
    const char * b_str;
    b_str = (MATSOLVERELEMENTAL);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (uf_isequal(name)) {
    const char * b_str;
    b_str = (MATSOLVERESSL);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (vf_isequal(name)) {
    const char * b_str;
    b_str = (MATSOLVERLUSOL);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (wf_isequal(name)) {
    const char * b_str;
    b_str = (MATSOLVERMUMPS);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (xf_isequal(name)) {
    const char * b_str;
    b_str = (MATSOLVERMKL_PARDISO);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (yf_isequal(name)) {
    const char * b_str;
    b_str = (MATSOLVERMKL_CPARDISO);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (ag_isequal(name)) {
    const char * b_str;
    b_str = (MATSOLVERPASTIX);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (bg_isequal(name)) {
    const char * b_str;
    b_str = (MATSOLVERMATLAB);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (cg_isequal(name)) {
    const char * b_str;
    b_str = (MATSOLVERPETSC);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (dg_isequal(name)) {
    const char * b_str;
    b_str = (MATSOLVERBAS);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else if (eg_isequal(name)) {
    const char * b_str;
    b_str = (MATSOLVERCUSPARSE);
    empty = !(b_str);
    if (empty == 0) {
      char * ptr;
      int n;
      n = strlen(b_str);
      i = str1->size[0] * str1->size[1];
      str1->size[0] = 1;
      str1->size[1] = n + 1;
      emxEnsureCapacity_uint8_T(str1, i);
      str1_data = str1->data;
      empty = n + 1;
      for (i = 0; i < empty; i++) {
        str1_data[i] = 0U;
      }

      ptr = (char *)(b_str);
      for (empty = 0; empty <= n; empty++) {
        str1_data[empty] = *(ptr);
        ptr = ptr + 1;
      }
    } else {
      str1->size[0] = 1;
      str1->size[1] = 0;
    }

    i = str->size[0] * str->size[1];
    str->size[0] = 1;
    str->size[1] = str1->size[1];
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    empty = str1->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = (signed char)str1_data[i];
    }
  } else {
    emxInit_char_T(&b_name, 2);
    i = b_name->size[0] * b_name->size[1];
    b_name->size[0] = 1;
    b_name->size[1] = name->size[1] + 1;
    emxEnsureCapacity_char_T(b_name, i);
    str_data = b_name->data;
    empty = name->size[1];
    for (i = 0; i < empty; i++) {
      str_data[i] = name_data[i];
    }

    str_data[name->size[1]] = '\x00';
    m2c_error(b_name);
    i = str->size[0] * str->size[1];
    str->size[0] = 2;
    str->size[1] = 1;
    emxEnsureCapacity_char_T(str, i);
    str_data = str->data;
    str_data[0] = '\x00';
    str_data[1] = '\x01';
    emxFree_char_T(&b_name);
  }

  emxFree_uint8_T(&str1);
  *toplevel = true;
}

void petscGetString_initialize(void)
{
}

void petscGetString_terminate(void)
{
}
