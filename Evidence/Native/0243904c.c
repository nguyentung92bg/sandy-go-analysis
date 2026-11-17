/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$OnChestTap
void Dino_BusSand_App_UI_WinStreakPanel__OnChestTap (Dino_BusSand_App_UI_WinStreakPanel_o* __this, Dino_BusSand_App_UI_WinStreakPanel_Stop_o* st, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$OnChestTap
   void Dino_BusSand_App_UI_WinStreakPanel__OnChestTap (Dino_BusSand_App_UI_WinStreakPanel_o*
   __this, Dino_BusSand_App_UI_WinStreakPanel_Stop_o* st, const MethodInfo* method); */

void Dino_BusSand_App_UI_WinStreakPanel__OnChestTap_233904c(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam0000000004f9c64c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb93f8);
    bRam0000000004f9c64c = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(char *)(param_1 + 0xb4) != '\0') {
    return;
  }
  if (param_2 == 0) goto LAB_024391ac;
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(char *)(param_1 + 0xb4) != '\0') {
      return;
    }
    if (param_2 != 0) {
      uVar2 = Dino_BusSand_App_Meta_WinStreak__Claimed_2294568(*(undefined8 *)(param_2 + 0x10),0);
      if ((uVar2 & 1) != 0) {
        return;
      }
      lVar3 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
      if ((lVar3 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
        if (*(int *)(lVar3 + 0x18) < *(int *)(*(long *)(param_2 + 0x10) + 0x14)) {
          return;
        }
        Dino_BusSand_App_UI_WinStreakPanel__HideTooltip_233923c(param_1);
        lVar3 = Dino_BusSand_App_UI_WinStreakPanel__OpenChest_2339c24(param_1,param_2);
        goto UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02438f90 with catch @ 0243911c
                        */
    if (*(long *)(param_1 + 0x80) == 0) {
LAB_024391ac:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar7 = UnityEngine_Object__get_name_43c71a4(*(long *)(param_1 + 0x80),0);
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_024391ac;
                    /* try { // try from 02439138 to 0253913b has its CatchHandler @ 02439154 */
                    /* try { // try from 0243913c to 02539157 has its CatchHandler @ 02438e44 */
    uVar4 = System_Int32__ToString_482d750(*(long *)(param_2 + 0x10) + 0x10,0);
                    /* catch() { ... } // from try @ 02439138 with catch @ 02439154 */
                    /* try { // try from 02439158 to 0253915f has its CatchHandler @ 02439168 */
    uVar4 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb93f8,uVar4,0);
                    /* try { // try from 02439160 to 0253916b has its CatchHandler @ 02438e44 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02439158 with catch @ 02439168
                        */
    uVar2 = System_String__op_Equality_46d1108(uVar7,uVar4,0);
    puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 0243916c to 0253979f has its CatchHandler @ 0243916c
                       catch() { ... } // from try @ 0243916c with catch @ 0243916c
                       catch() { ... } // from try @ 024397d4 with catch @ 0243916c
                       catch() { ... } // from try @ 02439868 with catch @ 0243916c
                       catch() { ... } // from try @ 02439894 with catch @ 0243916c */
    if ((uVar2 & 1) != 0) {
      if ((bRam0000000004f9c64f & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9c64f = 1;
      }
      plVar5 = (long *)(param_1 + 0x80);
      lVar3 = *plVar5;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
      if ((uVar2 & 1) == 0) {
        if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar7 = UnityEngine_Component__get_gameObject_43bcde8(*plVar5,0);
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar3);
        }
        UnityEngine_Object__Destroy_43c8114(uVar7,0);
        *plVar5 = 0;
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << ((ulong)plVar5 >> 0xc & 0x3f),
                       ((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
      return;
    }
  }
  lVar3 = Dino_BusSand_App_UI_WinStreakPanel__FocusThenTip_23392f4(param_1,param_2);
UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4:
  if (lVar3 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
    uVar4 = thunk_FUN_0216e89c();
    uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
    System_NullReferenceException___ctor_483267c(uVar4,uVar7,0);
  }
  else {
    uVar2 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
    if ((uVar2 & 1) != 0) {
      if ((bRam0000000004fa84ef & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7890);
        bRam0000000004fa84ef = 1;
      }
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 != 0) {
        if (pcRam0000000004fa8560 == (code *)0x0) {
          pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
        }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8560)(lVar6,lVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
    }
    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
    uVar4 = thunk_FUN_0216e89c();
    uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
    System_ArgumentException___ctor_47b660c(uVar4,uVar7,0);
  }
  uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar4,uVar7);
}

