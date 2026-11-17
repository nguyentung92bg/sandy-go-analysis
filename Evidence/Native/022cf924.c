/* IL2CPP: Dino.BusSand.App.UI.PassportContinuePanel$$OnCloseClick
void Dino_BusSand_App_UI_PassportContinuePanel__OnCloseClick (Dino_BusSand_App_UI_PassportContinuePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportContinuePanel$$OnCloseClick
   void Dino_BusSand_App_UI_PassportContinuePanel__OnCloseClick
   (Dino_BusSand_App_UI_PassportContinuePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportContinuePanel__OnCloseClick_21cf924(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((bRam0000000004f9bb32 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04caab38);
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb0358);
    FUN_02132f7c(PTR_DAT_04cb0380);
    FUN_02132f7c(PTR_DAT_04cb0360);
    FUN_02132f7c(PTR_DAT_04cb0370);
    bRam0000000004f9bb32 = 1;
  }
  puVar1 = PTR_DAT_04ca9c20;
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  plVar2 = (long *)FUN_02133068(*(undefined8 *)puVar1,2);
  puVar1 = PTR_DAT_04cb0360;
  if (plVar2 != (long *)0x0) {
    if ((*(long *)PTR_DAT_04cb0360 != 0) &&
       (lVar3 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb0360,*(undefined8 *)(*plVar2 + 0x40)),
       lVar3 == 0)) {
LAB_022cfb3c:
      uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar6,0);
    }
    if ((int)plVar2[3] == 0) {
LAB_022cfb38:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar2[4] = *(long *)puVar1;
    thunk_FUN_02134474();
    lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b08);
    System_Collections_Generic_Dictionary_object__object____ctor_34b3628
              (lVar3,*(undefined8 *)PTR_DAT_04ca9b50);
    if (lVar3 != 0) {
      System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                (lVar3,*(undefined8 *)PTR_DAT_04cb0370,*(undefined8 *)PTR_DAT_04cb0380,
                 *(undefined8 *)PTR_DAT_04caab38);
      lVar4 = thunk_FUN_0216e7a0(lVar3,*(undefined8 *)(*plVar2 + 0x40));
      if (lVar4 == 0) goto LAB_022cfb3c;
      if ((*(uint *)(plVar2 + 3) & 0xfffffffe) == 0) goto LAB_022cfb38;
      plVar2[5] = lVar3;
      thunk_FUN_02134474(plVar2 + 5,lVar3);
      if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb0358,plVar2,0);
      lVar3 = *(long *)(param_1 + 0x38);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x10) = 0;
        lVar4 = *(long *)(lVar3 + 0x18);
        thunk_FUN_02134474((undefined8 *)(lVar3 + 0x10),0);
        if (*(long *)(param_1 + 0x38) != 0) {
          puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
          *puVar5 = 0;
          thunk_FUN_02134474(puVar5,0);
          Dino_BusSand_App_UI_ContinueBottomPanel__HaveContinueAniClose_22bf694(1,0);
          Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
          if (lVar4 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x022cfb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

