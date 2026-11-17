/* IL2CPP: Dino.BusSand.App.UI.RemoveAdsPanel$$NoAdsAlone
void Dino_BusSand_App_UI_RemoveAdsPanel__NoAdsAlone (Dino_BusSand_App_UI_ArtPopup_Parts_o* a, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.RemoveAdsPanel$$NoAdsAlone
   void Dino_BusSand_App_UI_RemoveAdsPanel__NoAdsAlone (Dino_BusSand_App_UI_ArtPopup_Parts_o* a,
   float x, const MethodInfo* method); */

void Dino_BusSand_App_UI_RemoveAdsPanel__NoAdsAlone_22b44e4(float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar1 = PTR_DAT_04cb6138;
  if ((bRam0000000004f9c2e0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad4b0);
    FUN_02132f7c(PTR_DAT_04cb6138);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb6170);
    FUN_02132f7c(PTR_DAT_04cb6180);
    FUN_02132f7c(PTR_DAT_04cb0138);
    FUN_02132f7c(PTR_DAT_04cb6218);
    bRam0000000004f9c2e0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UI_RemoveAdsPanel__AdsBadge_22b5160(param_1 + 3.5,_UNK_00e20218,param_2);
  puVar1 = PTR_DAT_04ca9d18;
  if (param_2 != 0) {
    uVar8 = Dino_BusSand_App_UI_ArtPopup_Parts__get_Root_217ea74(param_2,0);
    lVar10 = *(long *)puVar1;
    lVar9 = *(long *)(lVar10 + 0x38);
    if (lVar9 == 0) {
      FUN_0216b4cc(lVar10);
      lVar9 = *(long *)(lVar10 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04cad330;
    lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470();
    }
    puVar7 = PTR_DAT_04cb6218;
    puVar6 = PTR_DAT_04cb6180;
    puVar5 = PTR_DAT_04cb6170;
    puVar4 = PTR_DAT_04cb0138;
    puVar3 = PTR_DAT_04cad4b0;
    puVar2 = PTR_DAT_04cac878;
    uVar11 = **(undefined8 **)(lVar9 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar11 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                       (*(undefined8 *)puVar4,*(undefined8 *)puVar6,uVar11,0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    System_Nullable_Color____ctor_2bc9090
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_78,*(undefined8 *)puVar2);
    uStack_80 = uStack_68;
    uStack_88 = uStack_70;
    uStack_90 = uStack_78;
    uVar8 = Dino_BusSand_App_UI_UiKit__Text_2282314
                      (0x42340000,0x43960000,0x42700000,0,0,uVar8,*(undefined8 *)puVar7,uVar11,
                       *(undefined8 *)puVar5,&uStack_90,0x202,0);
    Dino_BusSand_App_UI_ArtPopup_Parts__At_object__2970578
              (param_1 + -4.0,_UNK_00e1fe58,param_2,uVar8,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

