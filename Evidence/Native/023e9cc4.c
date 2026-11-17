/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$BuildRemoveAds
void Dino_BusSand_App_UI_HomePanel__BuildRemoveAds (Dino_BusSand_App_UI_HomePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$BuildRemoveAds
   void Dino_BusSand_App_UI_HomePanel__BuildRemoveAds (Dino_BusSand_App_UI_HomePanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HomePanel__BuildRemoveAds_22e9cc4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  
  if ((bRam0000000004f9c448 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb74d8);
    FUN_02132f7c(PTR_DAT_04cb74e0);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb74e8);
    FUN_02132f7c(PTR_DAT_04cb7458);
    FUN_02132f7c(PTR_DAT_04cb74f0);
    FUN_02132f7c(PTR_DAT_04cb6180);
    FUN_02132f7c(PTR_DAT_04cb0138);
    FUN_02132f7c(PTR_DAT_04cb74f8);
    FUN_02132f7c(PTR_DAT_04cb7500);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c448 = 1;
  }
  uVar10 = Dino_BusSand_App_Meta_Monetization__get_RemoveAdsHomeButton_226711c(0);
  puVar1 = PTR_DAT_04ca9d18;
  if ((uVar10 & 1) == 0) {
    return;
  }
  uVar11 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  lVar16 = *(long *)puVar1;
  lVar13 = *(long *)(lVar16 + 0x38);
  if (lVar13 == 0) {
    FUN_0216b4cc(lVar16);
    lVar13 = *(long *)(lVar16 + 0x38);
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0216b470();
  }
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cad330;
  lVar13 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0216b470();
  }
  puVar8 = PTR_DAT_04cb7500;
  puVar7 = PTR_DAT_04cb74f8;
  puVar6 = PTR_DAT_04cb74f0;
  puVar5 = PTR_DAT_04cb74e8;
  puVar4 = PTR_DAT_04cb7458;
  puVar3 = PTR_DAT_04cb6180;
  puVar2 = PTR_DAT_04cb0138;
  uVar17 = **(undefined8 **)(lVar13 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar17 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                     (*(undefined8 *)puVar2,*(undefined8 *)puVar3,uVar17,0);
  lVar13 = Dino_BusSand_App_UI_HomeSideArt__Build_22e7c00
                     (0xc40d0000,0x3f800000,0xc0000000,0x41c00000,_UNK_00e20838,uVar11,
                      *(undefined8 *)puVar7,1,*(undefined8 *)puVar6,*(undefined8 *)puVar8,
                      *(undefined8 *)puVar4,*(undefined8 *)puVar5,uVar17,2);
  if (lVar13 != 0) {
    plVar15 = (long *)(param_1 + 0x80);
    *plVar15 = *(long *)(lVar13 + 0x10);
    thunk_FUN_02134474(plVar15);
    if (*plVar15 != 0) {
      uVar11 = UnityEngine_Component__get_gameObject_43bcde8(*plVar15,0);
      puVar1 = PTR_DAT_04cb74e0;
      lVar13 = *(long *)PTR_DAT_04cb74e0;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar13);
        lVar13 = *(long *)puVar1;
      }
      puVar14 = *(undefined8 **)(lVar13 + 0xb8);
      lVar16 = puVar14[1];
      if (lVar16 == 0) {
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar13);
          puVar14 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar17 = *puVar14;
        lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(lVar16,uVar17,*(undefined8 *)PTR_DAT_04cb74d8,0);
        plVar12 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar12 = lVar16;
        thunk_FUN_02134474(plVar12,lVar16);
      }
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar11,lVar16,1,*(undefined8 *)PTR_DAT_04cad948,0);
      if (*plVar15 != 0) {
        lVar13 = UnityEngine_Component__get_gameObject_43bcde8(*plVar15,0);
        uVar9 = Dino_BusSand_App_Meta_NoAdsOffer__get_HomeButton_220d208(0);
        if (lVar13 != 0) {
          if ((bRam0000000004fa8360 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf5bd0,uVar9 & 1,0);
            bRam0000000004fa8360 = 1;
          }
          if (lVar13 != 0) {
            lVar16 = *(long *)(lVar13 + 0x10);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar13,0);
            }
            if (pcRam0000000004fa8430 == (code *)0x0) {
              pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
            }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8430)(lVar16,uVar9 & 1);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

