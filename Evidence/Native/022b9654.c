/* IL2CPP: Dino.BusSand.App.UI.GoldenView$$get_Header
System_String_o* Dino_BusSand_App_UI_GoldenView__get_Header (Dino_BusSand_App_UI_GoldenView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenView$$get_Header
   System_String_o* Dino_BusSand_App_UI_GoldenView__get_Header (Dino_BusSand_App_UI_GoldenView_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_GoldenView__get_Header_21b9654(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9bab4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf6c8);
    FUN_02132f7c(PTR_DAT_04caf6d0);
    bRam0000000004f9bab4 = 1;
  }
  plVar4 = (long *)FUN_02133068(*(undefined8 *)puVar1,1);
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar5 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc(*(long *)(param_1 + 0x10),0)
     , lVar5 != 0)) {
    uStack_34 = *(undefined4 *)(lVar5 + 0x10);
    lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
    if (plVar4 != (long *)0x0) {
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
        uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar7,0);
      }
      puVar3 = PTR_DAT_04caf6d0;
      puVar2 = PTR_DAT_04caf6c8;
      puVar1 = PTR_DAT_04cad330;
      if ((int)plVar4[3] != 0) {
        plVar4[4] = lVar5;
        thunk_FUN_02134474(plVar4 + 4,lVar5);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_UiKit__T_2285e1c(*(undefined8 *)puVar2,*(undefined8 *)puVar3,plVar4,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

