/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$OnFlyArrived
void Dino_BusSand_App_UI_CommerceCoinBar__OnFlyArrived (Dino_BusSand_App_UI_CommerceCoinBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$OnFlyArrived
   void Dino_BusSand_App_UI_CommerceCoinBar__OnFlyArrived (Dino_BusSand_App_UI_CommerceCoinBar_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_CommerceCoinBar__OnFlyArrived_22a87b4(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 uVar10;
  undefined1 auVar9 [16];
  
  puVar4 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c296 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c296 = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  iVar1 = *(int *)(*(long *)puVar4 + 0xe4);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_Meta_Profile__Count_225b150(uVar2,0);
  Dino_BusSand_App_UI_CommerceCoinBar__AnimateTo_22a8474(0x3f000000,param_1,uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  uVar5 = extraout_d0;
  uVar10 = extraout_var;
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar5 = UnityEngine_Animation__get_clip_43341a8(*(long *)(param_1 + 0x38),0);
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar8);
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
      uVar5 = extraout_d0_00;
      uVar10 = extraout_var_00;
      if ((uVar6 & 1) == 0) goto LAB_023a88f4;
      lVar8 = *(long *)(param_1 + 0x38);
      if ((lVar8 != 0) && (lVar7 = UnityEngine_Animation__get_clip_43341a8(lVar8,0), lVar7 != 0)) {
        uVar5 = UnityEngine_Object__get_name_43c71a4(lVar7,0);
        if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac7b8);
        }
        puVar4 = PTR_DAT_04ca9ae8;
        if ((bRam0000000004f9c2af & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          bRam0000000004f9c2af = 1;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
        if (((uVar6 & 1) == 0) &&
           (uVar6 = System_String__IsNullOrEmpty_46d2084(uVar5,0), (uVar6 & 1) == 0)) {
          if (lVar8 != 0) {
            lVar7 = UnityEngine_Animation__get_Item_4334ee8(lVar8,uVar5,0);
            uVar6 = UnityEngine_TrackedReference__op_Equality_43c6a1c(lVar7,0,0);
            if ((uVar6 & 1) != 0) goto LAB_023a899c;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar8,1,0);
            UnityEngine_Animation__Stop_4334660(lVar8,0);
            if (lVar7 != 0) {
              UnityEngine_AnimationState__set_time_43370c0(0,lVar7,0);
              UnityEngine_Animation__Play_4335164(lVar8,uVar5,0);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224(0,0);
              }
              lVar8 = *(long *)(lVar7 + 0x10);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
              }
              if (pcRam0000000004fa4d58 == (code *)0x0) {
                pcRam0000000004fa4d58 = (code *)FUN_02132f40(&UNK_00e3f77f);
              }
                    /* WARNING: Could not recover jumptable at 0x04437260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              auVar9 = (*pcRam0000000004fa4d58)(lVar8);
              return auVar9;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
LAB_023a899c:
        return ZEXT816(0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_023a88f4:
  auVar9._8_8_ = uVar10;
  auVar9._0_8_ = uVar5;
  return auVar9;
}

