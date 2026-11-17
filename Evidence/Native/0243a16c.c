/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<>c__DisplayClass36_0$$<BuildStop>b__0
void Dino_BusSand_App_UI_WinStreakPanel___c__DisplayClass36_0___BuildStop_b__0 (Dino_BusSand_App_UI_WinStreakPanel___c__DisplayClass36_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<>c__DisplayClass36_0$$<BuildStop>b__0
   void Dino_BusSand_App_UI_WinStreakPanel___c__DisplayClass36_0___BuildStop_b__0
   (Dino_BusSand_App_UI_WinStreakPanel___c__DisplayClass36_0_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_WinStreakPanel___c__DisplayClass36_0___BuildStop_b__0_233a16c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if ((bRam0000000004f9c64c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb93f8);
    bRam0000000004f9c64c = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(char *)(lVar6 + 0xb4) != '\0') {
    return;
  }
  if (lVar5 == 0) goto LAB_024391ac;
  uVar8 = *(undefined8 *)(lVar5 + 0x30);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(char *)(lVar6 + 0xb4) != '\0') {
      return;
    }
    if (lVar5 != 0) {
      uVar2 = Dino_BusSand_App_Meta_WinStreak__Claimed_2294568(*(undefined8 *)(lVar5 + 0x10),0);
      if ((uVar2 & 1) != 0) {
        return;
      }
      lVar3 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
      if ((lVar3 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
        if (*(int *)(lVar3 + 0x18) < *(int *)(*(long *)(lVar5 + 0x10) + 0x14)) {
          return;
        }
        Dino_BusSand_App_UI_WinStreakPanel__HideTooltip_233923c(lVar6);
        lVar5 = Dino_BusSand_App_UI_WinStreakPanel__OpenChest_2339c24(lVar6,lVar5);
        goto UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar8 = *(undefined8 *)(lVar6 + 0x80);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(lVar6 + 0x80) == 0) {
LAB_024391ac:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar8 = UnityEngine_Object__get_name_43c71a4(*(long *)(lVar6 + 0x80),0);
    if (*(long *)(lVar5 + 0x10) == 0) goto LAB_024391ac;
    uVar4 = System_Int32__ToString_482d750(*(long *)(lVar5 + 0x10) + 0x10,0);
    uVar4 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb93f8,uVar4,0);
    uVar2 = System_String__op_Equality_46d1108(uVar8,uVar4,0);
    puVar1 = PTR_DAT_04ca9ae8;
    if ((uVar2 & 1) != 0) {
      if ((bRam0000000004f9c64f & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9c64f = 1;
      }
      plVar7 = (long *)(lVar6 + 0x80);
      lVar6 = *plVar7;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
      if ((uVar2 & 1) == 0) {
        if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar8 = UnityEngine_Component__get_gameObject_43bcde8(*plVar7,0);
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar6);
        }
        UnityEngine_Object__Destroy_43c8114(uVar8,0);
        *plVar7 = 0;
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << ((ulong)plVar7 >> 0xc & 0x3f),
                       ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
      return;
    }
  }
  lVar5 = Dino_BusSand_App_UI_WinStreakPanel__FocusThenTip_23392f4(lVar6,lVar5);
UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4:
  if (lVar5 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
    uVar4 = thunk_FUN_0216e89c();
    uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
    System_NullReferenceException___ctor_483267c(uVar4,uVar8,0);
  }
  else {
    uVar2 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
    if ((uVar2 & 1) != 0) {
      if ((bRam0000000004fa84ef & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7890);
        bRam0000000004fa84ef = 1;
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar3 = *(long *)(lVar6 + 0x10);
      if (lVar3 != 0) {
        if (pcRam0000000004fa8560 == (code *)0x0) {
          pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
        }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8560)(lVar3,lVar5);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
    }
    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
    uVar4 = thunk_FUN_0216e89c();
    uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
    System_ArgumentException___ctor_47b660c(uVar4,uVar8,0);
  }
  uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar4,uVar8);
}

