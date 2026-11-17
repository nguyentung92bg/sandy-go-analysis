/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$OnCloseClick
void Dino_BusSand_App_UI_StorePanel__OnCloseClick (Dino_BusSand_App_UI_StorePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$OnCloseClick
   void Dino_BusSand_App_UI_StorePanel__OnCloseClick (Dino_BusSand_App_UI_StorePanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_StorePanel__OnCloseClick_22b7c40(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uStack_54;
  
  if ((bRam0000000004f9c2ec & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6348);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb6318);
    FUN_02132f7c(PTR_DAT_04cb6350);
    bRam0000000004f9c2ec = 1;
  }
  if ((*(char *)(param_1 + 0x50) != '\0') || (*(char *)(param_1 + 0x60) != '\0')) {
    return;
  }
  plVar4 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
  puVar2 = PTR_DAT_04cb6318;
  if (plVar4 == (long *)0x0) {
LAB_023b7fec:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cb6318 != 0) &&
     (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb6318,*(undefined8 *)(*plVar4 + 0x40)),
     lVar5 == 0)) {
LAB_023b7ff0:
    uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar9,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = *(long *)puVar2;
    thunk_FUN_02134474();
    uStack_54 = *(undefined4 *)(param_1 + 0x38);
    lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_54);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_023b7ff0;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
      plVar4[5] = lVar5;
      thunk_FUN_02134474(plVar4 + 5,lVar5);
      if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb6350,plVar4,0);
      *(undefined1 *)(param_1 + 0x60) = 1;
      Dino_BusSand_App_UI_KitNav__Select_2286bb4(*(undefined8 *)(param_1 + 0x68),1,0);
      puVar2 = PTR_DAT_04ca9ae8;
      uVar9 = *(undefined8 *)(param_1 + 0x70);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_023b7fec;
        Dino_BusSand_App_UI_HomePanel__ShowNav_22eb1b4(*(long *)(param_1 + 0x70),1,0);
      }
      puVar3 = PTR_DAT_04cad4c0;
      uVar1 = _UNK_00e201f0;
      lVar5 = *(long *)(param_1 + 0x58);
      if (lVar5 == 0) {
        Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
        return;
      }
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar7 = 0;
        uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar8 <= uVar7) goto LAB_023b7fe8;
          lVar6 = *(long *)(lVar5 + 0x20 + uVar7 * 8);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
          if ((uVar8 & 1) != 0) {
            if (lVar6 == 0) goto LAB_023b7fec;
            UnityEngine_CanvasGroup__set_interactable_467aec4(lVar6,0,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_UI_UiMotion__Fade_2291234(0,uVar1,0,lVar6,0);
          }
          uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
      puVar2 = PTR_DAT_04cad568;
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      if (**(long **)(lVar5 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__Whoosh_2382bbc(_UNK_00e1fea8,**(long **)(lVar5 + 0xb8),0);
      }
      uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* try { // try from 023b7f5c to 024b809b has its CatchHandler @ 023b7f5c
                       catch() { ... } // from try @ 023b7f5c with catch @ 023b7f5c
                       catch() { ... } // from try @ 023b80a4 with catch @ 023b7f5c
                       catch() { ... } // from try @ 023b820c with catch @ 023b7f5c
                       catch() { ... } // from try @ 023b8238 with catch @ 023b7f5c */
      System_Action___ctor_47b5ed0(uVar9,param_1,*(undefined8 *)PTR_DAT_04cb6348,0);
      if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = Dino_BusSand_App_Tween__Delayed_2161264(_UNK_00e201f0,uVar9,0);
      if ((lVar5 != 0) &&
         (lVar5 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar5,1,0), lVar5 != 0)) {
        Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar5,param_1,0);
        return;
      }
      goto LAB_023b7fec;
    }
  }
LAB_023b7fe8:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

