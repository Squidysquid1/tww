#ifndef D_A_OBJ_FIREWALL_H
#define D_A_OBJ_FIREWALL_H

#include "JSystem/JParticle/JPAEmitter.h"
#include "SSystem/SComponent/c_bg_w.h"
#include "d/d_bg_w.h"
#include "d/d_cc_d.h"
#include "f_op/f_op_actor.h"
#include "m_Do/m_Do_ext.h"

class daObjFirewall_c : public fopAc_ac_c {
public:
    typedef void (daObjFirewall_c::*memberFuncPtr)();

    void param_get_swSave() const {}

    void init_mtx();
    static BOOL solidHeapCB(fopAc_ac_c*);
    bool create_heap();
    void registCollisionTable();
    void setPointLight();
    void particle_set();
    void particle_delete();
    void seStart(unsigned long);
    void set_se(bool);
    void seDelete();
    void set_pl_se();
    void setup_burn_up();
    void setup_put_the_fire_out();
    cPhs_State _create();
    bool _delete();
    void wait_act_proc();
    void wait2_act_proc();
    void wait3_act_proc();
    void appear_act_proc();
    void demo_end_wait_act_proc();
    void burn_wait_act_proc();
    void retire_act_proc();
    bool _execute();
    bool _draw();

public:
    /* Place member variables here */
    /* 0x290 */ request_of_phase_process_class mPhs;
    /* 0x298 */ dCcD_Stts mStts;
    /* 0x2d4 */ dCcD_Cyl mCyl;
    /* 0x404 */ J3DModel* mpModel;
    /* 0x408 */ dBgW* field_0x408;// maybe dBgW
    /* 0x40c */ mDoExt_btkAnm field_0x40c;
    /* 0x420 */ mDoExt_brkAnm field_0x420;
    /* 0x438 */ JPABaseEmitter* field_0x438[6];
    /* 0x450 */ JPABaseEmitter* field_0x450[5];
    /* 0x464 */ JPABaseEmitter* field_0x464[2]; // guess
    /* 0x46c */ LIGHT_INFLUENCE* field_0x46c[64];
    /* 0x56c */
    
    /* 0xc6c */ Vec field_0xc6c[64]; //wrong something bigger I am thinking.
    
    /* 0x106c */ s32 field_0x106c;

    /* 0x1070 */ memberFuncPtr field_0x1070;
    /* 0x1074 */ s32 field_0x1074;
    /* 0x1078 */ memberFuncPtr field_0x1078; // this is prob a pointer
    
    /* 0x107c */ u16 field_0x107c; // event id?
    /* 0x107e */ bool field_0x107e;

    /* 0x1080 */ Vec field_0x1080[8];
    
    /* 0x10e0 */ u8 field_0x10e0;
    /* 0x10e1 */ u8 field_0x10e1;
    
    /* 0x10e8 */ s32 field_0x10e8;
}; // Size: 0x10ec

#endif /* D_A_OBJ_FIREWALL_H */
