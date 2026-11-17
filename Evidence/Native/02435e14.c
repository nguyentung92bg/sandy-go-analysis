/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$BuildSky
void Dino_BusSand_App_UI_WinStreakPanel__BuildSky (Dino_BusSand_App_UI_WinStreakPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$BuildSky
   void Dino_BusSand_App_UI_WinStreakPanel__BuildSky (Dino_BusSand_App_UI_WinStreakPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_WinStreakPanel__BuildSky_2335e14(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  
  puVar2 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c63e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cb1b08);
    FUN_02132f7c(PTR_DAT_04cb62e0);
    FUN_02132f7c(PTR_DAT_04cb9250);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb9258);
    FUN_02132f7c(PTR_DAT_04caf260);
    FUN_02132f7c(PTR_DAT_04cb9260);
    FUN_02132f7c(PTR_DAT_04cb9268);
    FUN_02132f7c(PTR_DAT_04cb9270);
    FUN_02132f7c(PTR_DAT_04cb9278);
    FUN_02132f7c(PTR_DAT_04cb9280);
    bRam0000000004f9c63e = 1;
  }
  puVar3 = PTR_DAT_04caf260;
  uVar6 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  lVar7 = Dino_BusSand_App_UI_UiKit__Fill_22817d8(0,0,0,0,uVar6,*(undefined8 *)puVar3,0);
  if ((lVar7 != 0) && (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar8 != 0))
  {
    UnityEngine_GameObject__AddComponent_object__275a54c(lVar8,*(undefined8 *)PTR_DAT_04cb1b08);
    lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
    puVar2 = PTR_DAT_04cb9260;
    if (lVar8 != 0) {
      plVar9 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                 (lVar8,*(undefined8 *)PTR_DAT_04cacf98);
      uVar6 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)puVar2,0);
      if (plVar9 != (long *)0x0) {
        UnityEngine_UI_Image__set_sprite_44a7258(plVar9,uVar6,0);
        (**(code **)(*plVar9 + 0x2c8))(plVar9,0,*(undefined8 *)(*plVar9 + 0x2d0));
        lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
        puVar5 = PTR_DAT_04cb9280;
        puVar4 = PTR_DAT_04cb9278;
        puVar3 = PTR_DAT_04cb9268;
        puVar2 = PTR_DAT_04cb9258;
        if (lVar7 != 0) {
          UnityEngine_GameObject__AddComponent_object__275a54c
                    (lVar7,*(undefined8 *)PTR_DAT_04cb62e0);
          uVar6 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
          uVar6 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                            (0x44870000,_UNK_00e20028,0,0,uVar6,*(undefined8 *)puVar3,0,0,0);
          puVar12 = (undefined8 *)(param_1 + 0x48);
          *puVar12 = uVar6;
          thunk_FUN_02134474(puVar12,uVar6);
          lVar7 = Dino_BusSand_App_UI_UiKit__Img_228203c
                            (_UNK_00e201ac,0x44910000,0x43960000,0xc2f00000,0x3f800000,*puVar12,
                             *(undefined8 *)puVar5,*(undefined8 *)puVar2,0,0);
          plVar9 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                     (_UNK_00e202f4,_UNK_00e208dc,0xc2200000,0x43820000,0x3f800000,
                                      *puVar12,*(undefined8 *)puVar4,*(undefined8 *)puVar2,0,0);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x2a8))
                      (0x3f800000,0x3f800000,0x3f800000,_UNK_00e208e8,plVar9,
                       *(undefined8 *)(*plVar9 + 0x2b0));
            lVar8 = UnityEngine_Component__get_transform_43bcd18(plVar9,0);
            puVar3 = PTR_DAT_04cb9270;
            if (lVar8 != 0) {
                    /* try { // try from 024360f4 to 0253624f has its CatchHandler @ 024360f4
                       catch() { ... } // from try @ 024360f4 with catch @ 024360f4
                       catch() { ... } // from try @ 02436258 with catch @ 024360f4
                       catch() { ... } // from try @ 02436370 with catch @ 024360f4
                       catch() { ... } // from try @ 02436394 with catch @ 024360f4 */
              UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar8,0);
              plVar10 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                          (_UNK_00e20ab0,_UNK_00e202f8,0x43eb0000,0x44020000,
                                           0x3f800000,*puVar12,*(undefined8 *)puVar3,
                                           *(undefined8 *)puVar2,0,0);
              if (plVar10 != (long *)0x0) {
                (**(code **)(*plVar10 + 0x2a8))
                          (0x3f800000,0x3f800000,0x3f800000,_UNK_00e20994,plVar10,
                           *(undefined8 *)(*plVar10 + 0x2b0));
                lVar8 = UnityEngine_Component__get_transform_43bcd18(plVar10,0);
                puVar2 = PTR_DAT_04cb9250;
                if (lVar8 != 0) {
                  UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar8,0);
                  plVar11 = (long *)FUN_02133068(*(undefined8 *)puVar2,3);
                  if (plVar11 != (long *)0x0) {
                    if ((lVar7 != 0) &&
                       (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar8 == 0)) {
LAB_0243628c:
                      uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                      FUN_021330e8(uVar6,0);
                    }
                    if ((int)plVar11[3] != 0) {
                      plVar11[4] = lVar7;
                      thunk_FUN_02134474(plVar11 + 4,lVar7);
                      lVar7 = thunk_FUN_0216e7a0(plVar9,*(undefined8 *)(*plVar11 + 0x40));
                      if (lVar7 == 0) goto LAB_0243628c;
                      if ((*(uint *)(plVar11 + 3) & 0xfffffffe) != 0) {
                        plVar11[5] = (long)plVar9;
                        thunk_FUN_02134474(plVar11 + 5,plVar9);
                        lVar7 = thunk_FUN_0216e7a0(plVar10,*(undefined8 *)(*plVar11 + 0x40));
                        if (lVar7 == 0) goto LAB_0243628c;
                        if (2 < *(uint *)(plVar11 + 3)) {
                          plVar11[6] = (long)plVar10;
                          thunk_FUN_02134474(plVar11 + 6,plVar10);
                          uVar1 = *(uint *)(plVar11 + 3);
                          if (0 < (int)uVar1) {
                            lVar7 = 0;
                            do {
                              if (uVar1 <= (uint)lVar7) goto LAB_02436288;
                              plVar9 = (long *)plVar11[lVar7 + 4];
                              if (plVar9 == (long *)0x0) goto LAB_02436284;
                    /* try { // try from 02436250 to 02536257 has its CatchHandler @ 02436350 */
                    /* try { // try from 02436258 to 0253636b has its CatchHandler @ 024360f4 */
                              (**(code **)(*plVar9 + 0x2c8))
                                        (plVar9,0,*(undefined8 *)(*plVar9 + 0x2d0));
                              uVar1 = *(uint *)(plVar11 + 3);
                              lVar7 = lVar7 + 1;
                            } while ((int)lVar7 < (int)uVar1);
                          }
                          return;
                        }
                      }
                    }
LAB_02436288:
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02436284:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

