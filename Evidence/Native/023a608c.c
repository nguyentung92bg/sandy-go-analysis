/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel$$OnRateClick
void Dino_BusSand_App_UI_CommentPopPanel__OnRateClick (Dino_BusSand_App_UI_CommentPopPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel$$OnRateClick
   void Dino_BusSand_App_UI_CommentPopPanel__OnRateClick (Dino_BusSand_App_UI_CommentPopPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommentPopPanel__OnRateClick_22a608c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9c284 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb5c98);
    FUN_02132f7c(PTR_DAT_04cb5ca0);
    FUN_02132f7c(PTR_DAT_04cb22a0);
    FUN_02132f7c(PTR_DAT_04cb5c10);
    FUN_02132f7c(PTR_DAT_04cb5ca8);
    bRam0000000004f9c284 = 1;
  }
  puVar1 = PTR_DAT_04ca9c20;
  if ((*(char *)(param_1 + 0x44) != '\0') || (*(char *)(param_1 + 0x2c) != '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  plVar2 = (long *)FUN_02133068(*(undefined8 *)puVar1,2);
  puVar1 = PTR_DAT_04cb22a0;
  if (plVar2 == (long *)0x0) {
LAB_023a6364:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cb22a0 != 0) &&
     (lVar3 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb22a0,*(undefined8 *)(*plVar2 + 0x40)),
     lVar3 == 0)) {
LAB_023a6368:
    uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar6,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = *(long *)puVar1;
    thunk_FUN_02134474();
    uStack_24 = *(undefined4 *)(param_1 + 0x40);
    lVar3 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_24);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_0216e7a0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_023a6368;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
      plVar2[5] = lVar3;
      thunk_FUN_02134474(plVar2 + 5,lVar3);
      if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb5ca8,plVar2,0);
      puVar1 = PTR_DAT_04cabaf8;
      if (4 < *(int *)(param_1 + 0x40)) {
        if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__SetFlag_227375c(*(undefined8 *)PTR_DAT_04cb5c10,1,0);
        Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
        Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
        puVar1 = PTR_DAT_04cb5ca0;
        lVar3 = *(long *)PTR_DAT_04cb5ca0;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar3 = *(long *)puVar1;
        }
        puVar5 = *(undefined8 **)(lVar3 + 0xb8);
        lVar4 = puVar5[1];
        if (lVar4 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar6 = *puVar5;
          lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(lVar4,uVar6,*(undefined8 *)PTR_DAT_04cb5c98,0);
          plVar2 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
          *plVar2 = lVar4;
          thunk_FUN_02134474(plVar2,lVar4);
        }
        Dino_BusSand_App_Meta_StoreReview__Request_22749e4(lVar4,0);
        return;
      }
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar3 != 0) {
        *(int *)(lVar3 + 0xec) = *(int *)(lVar3 + 0xec) + 1;
        Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
        Dino_BusSand_App_UI_CommentPopPanel__ShowFeedbackStep_22a6374(param_1);
        return;
      }
      goto LAB_023a6364;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

