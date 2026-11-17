/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$get_QaFrame
System_String_o* Dino_BusSand_App_UI_HomeStage__get_QaFrame (Dino_BusSand_App_UI_HomeStage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$get_QaFrame
   System_String_o* Dino_BusSand_App_UI_HomeStage__get_QaFrame (Dino_BusSand_App_UI_HomeStage_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeStage__get_QaFrame_22efa88(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9c460 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb7710);
    bRam0000000004f9c460 = 1;
  }
  plVar2 = (long *)FUN_02133068(*(undefined8 *)puVar1,6);
  puVar1 = PTR_DAT_04ca9ac8;
  uStack_24 = *(undefined4 *)(param_1 + 0x94);
  lVar3 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x78),&uStack_24);
  if (plVar2 == (long *)0x0) {
LAB_023efcf4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_0216e7a0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
  goto LAB_023efce8;
  if ((int)plVar2[3] == 0) goto LAB_023efce4;
  plVar2[4] = lVar3;
  thunk_FUN_02134474(plVar2 + 4,lVar3);
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_023efcf4;
  uStack_28 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x60);
  lVar3 = FUN_02133100(*(undefined8 *)(puVar1 + 0x78),&uStack_28);
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_0216e7a0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_023efce8:
    uVar5 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar5,0);
  }
  if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
    plVar2[5] = lVar3;
    thunk_FUN_02134474(plVar2 + 5,lVar3);
    uStack_34 = *(undefined4 *)(param_1 + 0x98);
    lVar3 = FUN_02133100(*(undefined8 *)(puVar1 + 0x78),&uStack_34);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_0216e7a0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_023efce8;
    if (2 < *(uint *)(plVar2 + 3)) {
      plVar2[6] = lVar3;
      thunk_FUN_02134474(plVar2 + 6,lVar3);
      uStack_38 = *(undefined4 *)(param_1 + 0x9c);
      lVar3 = FUN_02133100(*(undefined8 *)(puVar1 + 0x78),&uStack_38);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_0216e7a0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_023efce8;
      if ((*(uint *)(plVar2 + 3) & 0xfffffffc) != 0) {
        plVar2[7] = lVar3;
        thunk_FUN_02134474(plVar2 + 7,lVar3);
        uStack_3c = *(undefined4 *)(param_1 + 0xa0);
        lVar3 = FUN_02133100(*(undefined8 *)(puVar1 + 0x78),&uStack_3c);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_0216e7a0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_023efce8;
        if (4 < *(uint *)(plVar2 + 3)) {
          plVar2[8] = lVar3;
          thunk_FUN_02134474(plVar2 + 8,lVar3);
          uStack_40 = *(undefined4 *)(param_1 + 0x8c);
          lVar3 = FUN_02133100(*(undefined8 *)(puVar1 + 0x78),&uStack_40);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_0216e7a0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_023efce8;
          puVar1 = PTR_DAT_04cb7710;
          if (5 < *(uint *)(plVar2 + 3)) {
            plVar2[9] = lVar3;
            thunk_FUN_02134474(plVar2 + 9,lVar3);
            System_String__Format_46d3570(*(undefined8 *)puVar1,plVar2,0);
            return;
          }
        }
      }
    }
  }
LAB_023efce4:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

