/* IL2CPP: Dino.BusSand.View.GrainParticles$$PassTargetPos
UnityEngine_Vector3_o Dino_BusSand_View_GrainParticles__PassTargetPos (Dino_BusSand_View_GrainParticles_o* __this, int32_t slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GrainParticles$$PassTargetPos
   UnityEngine_Vector3_o Dino_BusSand_View_GrainParticles__PassTargetPos
   (Dino_BusSand_View_GrainParticles_o* __this, int32_t slot, const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_View_GrainParticles__PassTargetPos_23b4f8c
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined4 uVar6;
  undefined8 extraout_var_00;
  undefined8 uVar7;
  undefined1 auVar5 [16];
  
  if (-1 < (int)param_5) {
    lVar2 = *(long *)(param_4 + 0x150);
    if (lVar2 == 0) {
LAB_024b507c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((int)param_5 < *(int *)(lVar2 + 0x18)) {
      lVar1 = *(long *)(param_4 + 0x158);
      if (lVar1 != 0) {
        if (param_5 < *(uint *)(lVar1 + 0x18)) {
          uVar3 = (ulong)param_5;
          if (*(int *)(lVar1 + uVar3 * 4 + 0x20) != *(int *)(param_4 + 0x160)) {
            uVar4 = Dino_BusSand_View_GrainParticles__TargetPos_23b5084(param_4,param_5);
            if (*(uint *)(lVar2 + 0x18) <= param_5) goto LAB_024b5080;
            lVar2 = lVar2 + uVar3 * 0xc;
            *(undefined4 *)(lVar2 + 0x20) = uVar4;
            *(undefined4 *)(lVar2 + 0x24) = param_2;
            *(undefined4 *)(lVar2 + 0x28) = param_3;
            lVar1 = *(long *)(param_4 + 0x158);
            if (lVar1 == 0) goto LAB_024b507c;
            if (*(uint *)(lVar1 + 0x18) <= param_5) goto LAB_024b5080;
            lVar2 = *(long *)(param_4 + 0x150);
            *(undefined4 *)(lVar1 + uVar3 * 4 + 0x20) = *(undefined4 *)(param_4 + 0x160);
            if (lVar2 == 0) goto LAB_024b507c;
          }
          if (param_5 < *(uint *)(lVar2 + 0x18)) {
            return ZEXT416(*(uint *)(lVar2 + uVar3 * 0xc + 0x20));
          }
        }
LAB_024b5080:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      goto LAB_024b507c;
    }
  }
  if ((bRam0000000004f9c97e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c97e = 1;
  }
  lVar2 = *(long *)(param_4 + 0x138);
  if (lVar2 != 0) {
    if ((int)param_5 < (int)*(uint *)(lVar2 + 0x18)) {
      if (*(uint *)(lVar2 + 0x18) <= param_5) goto LAB_024b5188;
      lVar2 = *(long *)(lVar2 + (long)(int)param_5 * 8 + 0x20);
    }
    else {
      lVar2 = 0;
    }
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
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
    lVar1 = *(long *)(param_4 + 0x140);
    if (lVar1 != 0) {
      if (*(uint *)(lVar1 + 0x18) <= param_5) {
LAB_024b5188:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      if (lVar2 != 0) {
        lVar1 = lVar1 + (long)(int)param_5 * 0xc;
        UnityEngine_Transform__TransformPoint_43d3c44
                  (*(undefined4 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x24),
                   *(undefined4 *)(lVar1 + 0x28),lVar2,0);
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

