/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$RefreshLockRow
void Dino_BusSand_App_UI_PassportPanel__RefreshLockRow (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022adcf4) */
/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$RefreshLockRow
   void Dino_BusSand_App_UI_PassportPanel__RefreshLockRow (Dino_BusSand_App_UI_PassportPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__RefreshLockRow_21d68e0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bb5c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb07c0);
    bRam0000000004f9bb5c = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
LAB_022d69e8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 022d69e8 to 023d6a93 has its CatchHandler @ 022d6454 */
    FUN_02133224();
  }
  uVar2 = Dino_BusSand_App_Meta_PassportFeature__IsReachBonusBank_2246e10
                    (*(long *)(param_1 + 0x40),0);
  if ((*(long *)(param_1 + 0x70) == 0) ||
     (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x70),0), lVar4 == 0
     )) goto LAB_022d69e8;
  UnityEngine_GameObject__SetActive_43c1408(lVar4,(uVar2 ^ 1) & 1,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x49) != '\0') {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x70);
  if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uVar6 = *(undefined8 *)PTR_DAT_04cb07c0;
  if ((bRam0000000004f9ba70 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada30,uVar6,0,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ba70 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
  lVar5 = 0;
  if ((uVar3 & 1) != 0) {
    if (lVar4 == 0) goto LAB_022add34;
    lVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                      (lVar4,*(undefined8 *)PTR_DAT_04cada30);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = System_String__IsNullOrEmpty_46d2084(uVar6,0);
    lVar4 = 0;
    if ((uVar3 & 1) == 0) {
      if (lVar5 == 0) goto LAB_022add34;
      lVar4 = UnityEngine_Animation__get_Item_4334ee8(lVar5,uVar6,0);
    }
    uVar3 = UnityEngine_TrackedReference__op_Equality_43c6a1c(lVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (lVar5 == 0) goto LAB_022add34;
      uVar6 = UnityEngine_Animation__get_clip_43341a8(lVar5,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = UnityEngine_Animation__get_clip_43341a8(lVar5,0);
        if (lVar4 == 0) goto LAB_022add34;
        uVar6 = UnityEngine_Object__get_name_43c71a4(lVar4,0);
        lVar4 = UnityEngine_Animation__get_Item_4334ee8(lVar5,uVar6,0);
      }
    }
    uVar3 = UnityEngine_TrackedReference__op_Equality_43c6a1c(lVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if ((lVar5 != 0) && (UnityEngine_Animation__Stop_4334660(lVar5,0), lVar4 != 0)) {
        UnityEngine_AnimationState__set_enabled_4336edc(lVar4,1,0);
        UnityEngine_AnimationState__set_weight_4336f78(0x3f800000,lVar4,0);
        UnityEngine_AnimationState__set_time_43370c0(lVar4,0);
        UnityEngine_Animation__Sample_4334b90(lVar5,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224(0,0,0);
        }
        lVar5 = *(long *)(lVar4 + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
        }
        if (pcRam0000000004fa4d30 == (code *)0x0) {
          pcRam0000000004fa4d30 = (code *)FUN_02132f40(&UNK_00e482f2);
        }
                    /* WARNING: Could not recover jumptable at 0x04436f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa4d30)(lVar5,0);
        return;
      }
LAB_022add34:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

