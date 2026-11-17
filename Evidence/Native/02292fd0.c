/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$get_Overlay
Dino_BusSand_App_UI_BattleRoyalePanel_o* Dino_BusSand_App_UI_BattleRoyaleScenePanel__get_Overlay (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$get_Overlay
   Dino_BusSand_App_UI_BattleRoyalePanel_o* Dino_BusSand_App_UI_BattleRoyaleScenePanel__get_Overlay
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleScenePanel__get_Overlay_2192fd0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  
  if ((bRam0000000004f9b9ae & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae190);
    bRam0000000004f9b9ae = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
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
    return 0;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar4 = **(long **)(*(long *)puVar2 + 0xb8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar5 = *(long *)PTR_DAT_04cae190;
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1b78);
    FUN_02132f7c(PTR_DAT_04cb1b80);
    if (*(long *)(lVar5 + 0x38) == 0) {
      FUN_0216b4cc(lVar5);
    }
  }
  puVar1 = PTR_DAT_04cb1b80;
  if (*(long *)(lVar4 + 0x38) != 0) {
    iVar8 = *(int *)(*(long *)(lVar4 + 0x38) + 0x18);
    if (-1 < iVar8 + -1) {
      do {
        if (*(long *)(lVar4 + 0x38) == 0) goto LAB_02a45294;
        iVar8 = iVar8 + -1;
        uVar7 = System_Collections_Generic_List_object___get_Item_3a81924
                          (*(long *)(lVar4 + 0x38),iVar8,*(undefined8 *)puVar1);
        lVar6 = **(long **)(lVar5 + 0x38);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0216b470(lVar6);
        }
        lVar6 = thunk_FUN_0216e7a0(uVar7,lVar6);
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0x2c) == '\0')) {
          return lVar6;
        }
      } while (0 < iVar8);
    }
    return 0;
  }
LAB_02a45294:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

