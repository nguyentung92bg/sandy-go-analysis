/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$HideClicked
void Dino_BusSand_App_UI_StreakRatePanel__HideClicked (Dino_BusSand_App_UI_StreakRatePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$HideClicked
   void Dino_BusSand_App_UI_StreakRatePanel__HideClicked (Dino_BusSand_App_UI_StreakRatePanel_o*
   __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_StreakRatePanel__HideClicked_21e5254(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022e5268 to 023e526b has its CatchHandler @ 022e5a84 */
  if ((bRam0000000004f9bbc6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0d40);
    bRam0000000004f9bbc6 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  puVar1 = PTR_DAT_04cb0d40;
  if ((uVar3 & 1) != 0) {
    return uVar3;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x70),0);
  puVar2 = PTR_DAT_04ca9ae8;
  uVar7 = *(undefined8 *)puVar1;
  if ((bRam0000000004f9bc96 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,uVar7,0,0);
    bRam0000000004f9bc96 = 1;
  }
  lVar4 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar7);
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
  if ((uVar3 & 1) != 0) {
    if ((lVar4 == 0) || (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0), lVar6 == 0)
       ) goto LAB_022f4104;
    UnityEngine_GameObject__SetActive_43c1408(lVar6,0,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (lVar4 != 0) {
    if ((bRam0000000004fa8307 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7648,0);
      FUN_02132f7c(PTR_DAT_04cf7650);
      bRam0000000004fa8307 = 1;
    }
    puVar1 = PTR_DAT_04cf7650;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = *(long *)(lVar4 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
    }
    if (pcRam0000000004fa8318 == (code *)0x0) {
      pcRam0000000004fa8318 = (code *)FUN_02132f40(&UNK_00e61486);
    }
    uVar3 = (*pcRam0000000004fa8318)(lVar6);
    lVar4 = *(long *)puVar1;
    if (*(long *)(lVar4 + 0x38) == 0) {
      FUN_0216b4cc(lVar4);
    }
    if (uVar3 != 0) {
      if (cRam0000000004f9d849 == '\0') {
        FUN_02132f7c(&DAT_04ddbd40);
        cRam0000000004f9d849 = '\x01';
      }
      if ((uVar3 & 1) == 0) {
        plVar5 = (long *)System_IntPtr__op_Explicit_487833c();
        lVar6 = *plVar5;
      }
      else {
        lVar6 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar3,0);
      }
      lVar4 = **(long **)(lVar4 + 0x38);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0216b470(lVar4);
      }
      if (lVar6 != 0) {
        uVar3 = thunk_FUN_0216e7a0(lVar6,lVar4);
        if (uVar3 != 0) {
          return uVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar6,lVar4);
      }
    }
    return 0;
  }
LAB_022f4104:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

