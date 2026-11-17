/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel.<AnimLoop>d__52$$MoveNext
bool Dino_BusSand_App_UI_MainHudPanel__AnimLoop_d__52__MoveNext (Dino_BusSand_App_UI_MainHudPanel__AnimLoop_d__52_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel.<AnimLoop>d__52$$MoveNext
   bool Dino_BusSand_App_UI_MainHudPanel__AnimLoop_d__52__MoveNext
   (Dino_BusSand_App_UI_MainHudPanel__AnimLoop_d__52_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_MainHudPanel__AnimLoop_d__52__MoveNext_22fec60(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  
  if ((bRam0000000004f9c4c6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9c4c6 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_023fef64;
        lVar4 = UnityEngine_Animation__get_Item_4334ee8
                          (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),0);
        plVar7 = (long *)(param_1 + 0x38);
        *plVar7 = lVar4;
        thunk_FUN_02134474(plVar7,lVar4);
        uVar3 = UnityEngine_TrackedReference__op_Equality_43c6a1c(*plVar7,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_023fef64;
          uVar6 = UnityEngine_Animation__get_clip_43341a8(*(long *)(param_1 + 0x20),0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023feaf0 with catch @ 023fedc8
                        */
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
                    /* try { // try from 023fede0 to 024fedf7 has its CatchHandler @ 023fee4c */
          uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
          if ((uVar3 & 1) != 0) {
            lVar4 = *(long *)(param_1 + 0x20);
                    /* try { // try from 023fedf8 to 024fee3b has its CatchHandler @ 023fe9a0 */
            if ((lVar4 == 0) ||
               (lVar5 = UnityEngine_Animation__get_clip_43341a8(lVar4,0), lVar5 == 0))
            goto LAB_023fef64;
            uVar6 = UnityEngine_Object__get_name_43c71a4(lVar5,0);
            lVar4 = UnityEngine_Animation__get_Item_4334ee8(lVar4,uVar6,0);
            *plVar7 = lVar4;
            thunk_FUN_02134474(plVar7,lVar4);
          }
        }
                    /* try { // try from 023fee3c to 024fee4b has its CatchHandler @ 023fee4c */
        uVar3 = UnityEngine_TrackedReference__op_Equality_43c6a1c(*plVar7,0,0);
        if ((uVar3 & 1) != 0) goto LAB_023fee48;
        if (*plVar7 == 0) goto LAB_023fef64;
        uVar6 = UnityEngine_AnimationState__get_name_43372e0(*plVar7,0);
        *(undefined8 *)(param_1 + 0x40) = uVar6;
        thunk_FUN_02134474();
        uVar8 = *(undefined4 *)(param_1 + 0x30);
        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
        UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar8,uVar6,0);
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
        uVar8 = 1;
        goto LAB_023feef0;
      }
    }
    else {
      if (iVar1 != 1) {
        return 0;
      }
LAB_023feccc:
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_023fef64;
        UnityEngine_AnimationState__set_wrapMode_4337024(*(long *)(param_1 + 0x38),1,0);
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_023fef64;
        UnityEngine_AnimationState__set_time_43370c0(0,*(long *)(param_1 + 0x38),0);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_023fef64;
        UnityEngine_Animation__Play_4335164
                  (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x40),0);
        goto LAB_023fee58;
      }
    }
LAB_023fee48:
    uVar6 = 0;
                    /* catch() { ... } // from try @ 023fede0 with catch @ 023fee4c
                       catch() { ... } // from try @ 023fee3c with catch @ 023fee4c */
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 0;
      }
      goto LAB_023feccc;
    }
                    /* try { // try from 023fee50 to 024fee53 has its CatchHandler @ 023fee5c */
                    /* try { // try from 023fee54 to 024fee5f has its CatchHandler @ 023fe9a0 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_023fee58:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023fee50 with catch @ 023fee5c
                        */
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
LAB_023fef64:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar3 = UnityEngine_Animation__IsPlaying_4334cf8
                        (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x40),0);
      if ((uVar3 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        uVar8 = 2;
        goto LAB_023feef0;
      }
    }
    uVar8 = *(undefined4 *)(param_1 + 0x34);
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar8,uVar6,0);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
    uVar8 = 3;
LAB_023feef0:
    uVar6 = 1;
    *(undefined4 *)(param_1 + 0x10) = uVar8;
  }
  return uVar6;
}

