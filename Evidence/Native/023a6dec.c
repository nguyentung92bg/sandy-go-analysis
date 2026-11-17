/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel$$OnSendClick
void Dino_BusSand_App_UI_CommentPopPanel__OnSendClick (Dino_BusSand_App_UI_CommentPopPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel$$OnSendClick
   void Dino_BusSand_App_UI_CommentPopPanel__OnSendClick (Dino_BusSand_App_UI_CommentPopPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommentPopPanel__OnSendClick_22a6dec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uStack_34;
  
  if ((bRam0000000004f9c287 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb5d30);
    FUN_02132f7c(PTR_DAT_04cb22a0);
    FUN_02132f7c(PTR_DAT_04cb5d38);
    FUN_02132f7c(PTR_DAT_04cabc50);
    FUN_02132f7c(PTR_DAT_04cb5d40);
    FUN_02132f7c(PTR_DAT_04cb5d48);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c287 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    return;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  plVar4 = (long *)PTR_DAT_04ca9c30;
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_023a7134;
    plVar4 = (long *)(*(long *)(param_1 + 0x68) + 0x210);
  }
  lVar8 = *plVar4;
  plVar4 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,4);
  puVar2 = PTR_DAT_04cb22a0;
  if (plVar4 == (long *)0x0) {
LAB_023a7134:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cb22a0 != 0) &&
     (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb22a0,*(undefined8 *)(*plVar4 + 0x40)),
     lVar5 == 0)) {
LAB_023a7128:
    uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar7,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = *(long *)puVar2;
    thunk_FUN_02134474();
    uStack_34 = *(undefined4 *)(param_1 + 0x40);
    lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_023a7128;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
      plVar4[5] = lVar5;
      thunk_FUN_02134474(plVar4 + 5,lVar5);
      puVar2 = PTR_DAT_04cabc50;
      if ((*(long *)PTR_DAT_04cabc50 != 0) &&
         (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabc50,*(undefined8 *)(*plVar4 + 0x40)),
         lVar5 == 0)) goto LAB_023a7128;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = *(long *)puVar2;
        thunk_FUN_02134474();
        uVar3 = System_String__IsNullOrWhiteSpace_46d20a0(lVar8,0);
        uVar7 = *(undefined8 *)PTR_DAT_04cb5d38;
        lVar5 = *(long *)PTR_DAT_04cb5d48;
        if ((uVar3 & 1) == 0) {
          lVar5 = lVar8;
        }
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_023a7128;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
          plVar4[7] = lVar5;
          thunk_FUN_02134474(plVar4 + 7,lVar5);
          if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Analytics__Log_216d0c8(uVar7,plVar4,0);
          Dino_BusSand_App_Meta_Feedback__Send_220ff60(lVar8,*(undefined4 *)(param_1 + 0x40),0);
          Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
          if (cRam0000000004f9b94d == '\0') {
            FUN_02132f7c(PTR_DAT_04cad1b0);
            cRam0000000004f9b94d = '\x01';
          }
          puVar2 = PTR_DAT_04cad1b0;
          uVar7 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
          if ((uVar3 & 1) == 0) {
            return;
          }
          if (cRam0000000004f9b94d == '\0') {
            FUN_02132f7c(PTR_DAT_04cad1b0);
            cRam0000000004f9b94d = '\x01';
          }
          if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
            Dino_BusSand_App_UI_UIManager__Open_object__2945314
                      (**(long **)(*(long *)puVar2 + 0xb8),*(undefined8 *)PTR_DAT_04cb5d40,2,0,
                       *(undefined8 *)PTR_DAT_04cb5d30);
            return;
          }
          goto LAB_023a7134;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

