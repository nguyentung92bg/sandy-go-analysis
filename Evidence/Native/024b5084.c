/* IL2CPP: Dino.BusSand.View.GrainParticles$$TargetPos
UnityEngine_Vector3_o Dino_BusSand_View_GrainParticles__TargetPos (Dino_BusSand_View_GrainParticles_o* __this, int32_t slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GrainParticles$$TargetPos
   UnityEngine_Vector3_o Dino_BusSand_View_GrainParticles__TargetPos
   (Dino_BusSand_View_GrainParticles_o* __this, int32_t slot, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_View_GrainParticles__TargetPos_23b5084(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 extraout_s0;
  undefined4 uVar4;
  undefined4 extraout_var;
  undefined4 uVar6;
  undefined8 extraout_var_00;
  undefined8 uVar7;
  undefined1 auVar5 [16];
  
  if ((bRam0000000004f9c97e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c97e = 1;
  }
  lVar2 = *(long *)(param_1 + 0x138);
  if (lVar2 != 0) {
    if ((int)param_2 < (int)*(uint *)(lVar2 + 0x18)) {
      if (*(uint *)(lVar2 + 0x18) <= param_2) goto LAB_024b5188;
      lVar2 = *(long *)(lVar2 + (long)(int)param_2 * 8 + 0x20);
    }
    else {
      lVar2 = 0;
    }
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 024b50fc to 025b50ff has its CatchHandler @ 024b5110 */
                    /* try { // try from 024b5100 to 025b512b has its CatchHandler @ 024b4974 */
    uVar1 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
    if ((uVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 024b512c with catch @ 024b5148 */
      if (cRam0000000004f9b65d == '\0') {
                    /* try { // try from 024b514c to 025b5153 has its CatchHandler @ 024b515c */
                    /* try { // try from 024b5154 to 025b515f has its CatchHandler @ 024b4974 */
        FUN_02132f7c(PTR_DAT_04caa208);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024b514c with catch @ 024b515c
                        */
        cRam0000000004f9b65d = '\x01';
      }
      uVar4 = **(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      uVar6 = 0;
      uVar7 = 0;
LAB_024b5178:
      auVar5._4_4_ = uVar6;
      auVar5._0_4_ = uVar4;
      auVar5._8_8_ = uVar7;
      return auVar5;
    }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024b4c54 with catch @ 024b5108
                        */
    lVar3 = *(long *)(param_1 + 0x140);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024b4bf0 with catch @ 024b510c
                        */
    if (lVar3 != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024b50fc with catch @ 024b5110
                        */
      if (*(uint *)(lVar3 + 0x18) <= param_2) {
LAB_024b5188:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      if (lVar2 != 0) {
                    /* try { // try from 024b512c to 025b512f has its CatchHandler @ 024b5148 */
        lVar3 = lVar3 + (long)(int)param_2 * 0xc;
                    /* try { // try from 024b5130 to 025b514b has its CatchHandler @ 024b4974 */
        UnityEngine_Transform__TransformPoint_43d3c44
                  (*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),
                   *(undefined4 *)(lVar3 + 0x28),lVar2,0);
        uVar4 = extraout_s0;
        uVar6 = extraout_var;
        uVar7 = extraout_var_00;
        goto LAB_024b5178;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

