/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$BuildMultiplier
void Dino_BusSand_App_UI_WinPanel__BuildMultiplier (Dino_BusSand_App_UI_WinPanel_o* __this, UnityEngine_RectTransform_o* box, float centreY, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$BuildMultiplier
   void Dino_BusSand_App_UI_WinPanel__BuildMultiplier (Dino_BusSand_App_UI_WinPanel_o* __this,
   UnityEngine_RectTransform_o* box, float centreY, const MethodInfo* method); */

void Dino_BusSand_App_UI_WinPanel__BuildMultiplier_2312318
               (float param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  int iStack_98;
  uint uStack_94;
  
                    /* try { // try from 02412328 to 0251232b has its CatchHandler @ 02412624 */
                    /* try { // try from 02412344 to 0251234b has its CatchHandler @ 02412628 */
                    /* try { // try from 0241234c to 0251263f has its CatchHandler @ 02411e88 */
  if ((bRam0000000004f9c555 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf410);
    FUN_02132f7c(PTR_DAT_04cad530);
    FUN_02132f7c(PTR_DAT_04cb82f0);
    FUN_02132f7c(PTR_DAT_04caea20);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cabb10);
    FUN_02132f7c(PTR_DAT_04caf5e8);
    FUN_02132f7c(PTR_DAT_04cb82f8);
    FUN_02132f7c(PTR_DAT_04cb8300);
    FUN_02132f7c(PTR_DAT_04cb8308);
    FUN_02132f7c(PTR_DAT_04cb8310);
    FUN_02132f7c(PTR_DAT_04cb8318);
    FUN_02132f7c(PTR_DAT_04cb8320);
    FUN_02132f7c(PTR_DAT_04cafc38);
    FUN_02132f7c(PTR_DAT_04cb8328);
    FUN_02132f7c(PTR_DAT_04cafcf0);
    FUN_02132f7c(PTR_DAT_04cb8330);
    bRam0000000004f9c555 = 1;
  }
  puVar3 = PTR_DAT_04caadd0;
  puVar2 = PTR_DAT_04caa200;
  lVar16 = *(long *)(param_2 + 0x78);
  iStack_98 = 0;
  uStack_94 = 0;
  if (lVar16 != 0) {
    uVar18 = *(ulong *)(lVar16 + 0x18);
    iVar17 = (int)uVar18;
    if (iVar17 < 1) {
      lVar16 = FUN_02133068(*(undefined8 *)PTR_DAT_04caadd0,uVar18 & 0xffffffff);
      fVar21 = 0.0;
      fVar25 = 1.0;
      iVar6 = 0;
    }
    else {
      uVar19 = 0;
      iVar6 = 0;
      uVar11 = uVar18;
      do {
        if ((uVar11 & 0xffffffff) <= uVar19) goto LAB_02412bc0;
        uVar22 = *(undefined4 *)(lVar16 + 0x20 + uVar19 * 4);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar6 = System_Math__Max_4830fc8(iVar6,uVar22,0);
        uVar11 = (ulong)*(uint *)(lVar16 + 0x18);
        uVar19 = uVar19 + 1;
      } while ((long)uVar19 < (long)(int)*(uint *)(lVar16 + 0x18));
      lVar16 = FUN_02133068(*(undefined8 *)puVar3,uVar18 & 0xffffffff);
      if (iVar17 < 1) {
        fVar21 = 0.0;
        fVar25 = 1.0;
      }
      else {
        fVar21 = 0.0;
        uVar19 = 0;
        do {
          if (uVar19 == 0) {
            uVar13 = 0;
            uVar22 = 0x42dc0000;
          }
          else {
            if (iVar17 - 1 == uVar19) {
              uVar22 = 0x42dc0000;
            }
            else {
              lVar15 = *(long *)(param_2 + 0x78);
              if (lVar15 == 0) goto LAB_02412bbc;
              if (*(uint *)(lVar15 + 0x18) <= uVar19) goto LAB_02412bc0;
              uVar22 = 0x42fa0000;
              if (iVar6 <= *(int *)(lVar15 + uVar19 * 4 + 0x20)) {
                uVar22 = 0x43250000;
              }
            }
            uVar13 = (uint)uVar19;
          }
          if (lVar16 == 0) goto LAB_02412bbc;
          uVar11 = *(ulong *)(lVar16 + 0x18);
          if (((uint)uVar11 <= uVar13) ||
             (*(undefined4 *)(lVar16 + (long)(int)uVar13 * 4 + 0x20) = uVar22,
             (uVar11 & 0xffffffff) <= uVar19)) goto LAB_02412bc0;
          lVar15 = uVar19 * 4;
          uVar19 = uVar19 + 1;
          fVar21 = fVar21 + *(float *)(lVar16 + 0x20 + lVar15);
        } while ((uVar18 & 0xffffffff) != uVar19);
        fVar25 = 1.0;
        if (640.0 / fVar21 <= 1.0) {
          fVar25 = 640.0 / fVar21;
        }
        if (0 < iVar17) {
          uVar13 = *(uint *)(lVar16 + 0x18);
          lVar15 = 0;
          do {
            if ((ulong)uVar13 * 4 - lVar15 == 0) goto LAB_02412bc0;
            lVar9 = lVar16 + lVar15;
            lVar15 = lVar15 + 4;
            *(float *)(lVar9 + 0x20) = fVar25 * *(float *)(lVar9 + 0x20);
          } while ((uVar18 & 0xffffffff) * 4 - lVar15 != 0);
        }
      }
    }
    puVar2 = PTR_DAT_04cad330;
    fVar21 = fVar21 * fVar25;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02412328 with catch @ 02412624
                        */
    if (cRam0000000004f9b948 == '\0') {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02412344 with catch @ 02412628
                        */
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar5 = PTR_DAT_04cb8320;
    puVar4 = PTR_DAT_04cb8318;
    puVar3 = PTR_DAT_04caf410;
                    /* try { // try from 02412640 to 02512657 has its CatchHandler @ 024126a0 */
                    /* try { // try from 02412658 to 0251268f has its CatchHandler @ 02411e88 */
    uVar22 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
    uVar24 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 02412690 to 0251269f has its CatchHandler @ 024126a0 */
                    /* catch() { ... } // from try @ 02412640 with catch @ 024126a0
                       catch() { ... } // from try @ 02412690 with catch @ 024126a0 */
                    /* try { // try from 024126a4 to 025126a7 has its CatchHandler @ 024126b0 */
                    /* try { // try from 024126a8 to 025126b3 has its CatchHandler @ 02411e88 */
    uStack_b0 = 0;
    uStack_a8 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024126a4 with catch @ 024126b0
                        */
    uStack_a0 = 0;
    uVar7 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                      (fVar21 + 30.0,0x43020000,uVar22,uVar24,_UNK_00e20204,param_3,
                       *(undefined8 *)puVar4,*(undefined8 *)puVar5,&uStack_b0,0);
    Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c(param_1,0,uVar7,*(undefined8 *)puVar3);
    *(undefined8 *)(param_2 + 0x50) = uVar7;
    thunk_FUN_02134474((undefined8 *)(param_2 + 0x50),uVar7);
    uVar22 = _UNK_00e20698;
    uStack_94 = 0;
    if (0 < iVar17) {
      fVar25 = fVar21 * -0.5;
      do {
        lVar15 = *(long *)(param_2 + 0x78);
        if (lVar15 == 0) goto LAB_02412bbc;
        if (*(uint *)(lVar15 + 0x18) <= uStack_94) {
LAB_02412bc0:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        iStack_98 = *(int *)(lVar15 + (long)(int)uStack_94 * 4 + 0x20);
        puVar12 = (undefined8 *)PTR_DAT_04cb8330;
        if (iVar6 <= iStack_98) {
          puVar12 = (undefined8 *)PTR_DAT_04cb8310;
        }
        uVar8 = *puVar12;
        if (uStack_94 == iVar17 - 1U) {
          uVar8 = *(undefined8 *)PTR_DAT_04cb82f8;
        }
        uVar10 = *(undefined8 *)PTR_DAT_04cb82f8;
        if (uStack_94 != 0) {
          uVar10 = uVar8;
        }
        uVar8 = System_Int32__ToString_482d750(&uStack_94,0);
        uVar8 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb8308,uVar8,0);
        if (lVar16 == 0) goto LAB_02412bbc;
        if (*(uint *)(lVar16 + 0x18) <= uStack_94) goto LAB_02412bc0;
        fVar23 = *(float *)(lVar16 + (long)(int)uStack_94 * 4 + 0x20);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar15 = Dino_BusSand_App_UI_UiKit__Img_228203c
                           (fVar23,0x42c80000,fVar25 + fVar23 * 0.5,0,uVar22,uVar7,uVar8,uVar10,1,0)
        ;
        if ((iVar17 != 1) && (uStack_94 == iVar17 - 1U)) {
          if ((lVar15 == 0) ||
             (lVar9 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar15,0), lVar9 == 0))
          goto LAB_02412bbc;
          UnityEngine_Transform__set_localScale_43d1be0(0xbf800000,0x3f800000,0x3f800000,lVar9,0);
        }
        uVar8 = System_Int32__ToString_482d750(&uStack_94,0);
        uVar8 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04caf5e8,uVar8,0);
        uVar10 = System_Int32__ToString_482d750(&iStack_98,0);
        uVar10 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabb10,uVar10,0);
        puVar12 = (undefined8 *)PTR_DAT_04cafc38;
        if (iVar6 <= iStack_98) {
          puVar12 = (undefined8 *)PTR_DAT_04cafcf0;
        }
        uVar20 = *puVar12;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        System_Nullable_Color____ctor_2bc9090
                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_c8,
                   *(undefined8 *)PTR_DAT_04cac878);
        if (*(uint *)(lVar16 + 0x18) <= uStack_94) goto LAB_02412bc0;
        fVar23 = *(float *)(lVar16 + (long)(int)uStack_94 * 4 + 0x20);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uStack_d0 = uStack_b8;
        uStack_d8 = uStack_c0;
        uStack_e0 = uStack_c8;
        uVar8 = Dino_BusSand_App_UI_UiKit__Text_2282314
                          (0x42680000,fVar23,0x42a00000,fVar25 + fVar23 * 0.5,0x40000000,uVar7,uVar8
                           ,uVar10,uVar20,&uStack_e0,0x202,0);
        if (lVar15 == 0) goto LAB_02412bbc;
        lVar9 = *(long *)(param_2 + 0x70);
        uVar10 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar15,0);
        if (lVar9 == 0) goto LAB_02412bbc;
        lVar15 = *(long *)(lVar9 + 0x10);
        lVar14 = *(long *)PTR_DAT_04cad530;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_02412bbc;
        uVar13 = *(uint *)(lVar9 + 0x18);
        if (uVar13 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar13 + 1;
          *(undefined8 *)(lVar15 + (long)(int)uVar13 * 8 + 0x20) = uVar10;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar9,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
        }
        lVar15 = *(long *)(param_2 + 0xa8);
        if (lVar15 == 0) goto LAB_02412bbc;
        lVar9 = *(long *)(lVar15 + 0x10);
        lVar14 = *(long *)PTR_DAT_04cb82f0;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_02412bbc;
        uVar13 = *(uint *)(lVar15 + 0x18);
        if (uVar13 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar15 + 0x18) = uVar13 + 1;
          puVar12 = (undefined8 *)(lVar9 + (long)(int)uVar13 * 8 + 0x20);
          *puVar12 = uVar8;
          thunk_FUN_02134474(puVar12,uVar8);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar15,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
        }
        puVar3 = PTR_DAT_04caea20;
        uVar13 = *(uint *)(lVar16 + 0x18);
        if (uVar13 <= uStack_94) goto LAB_02412bc0;
        lVar15 = *(long *)(param_2 + 0xb0);
        if (lVar15 == 0) goto LAB_02412bbc;
        lVar9 = *(long *)(lVar15 + 0x10);
        fVar23 = *(float *)(lVar16 + (long)(int)uStack_94 * 4 + 0x20);
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_02412bbc;
        uVar1 = *(uint *)(lVar15 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
          *(float *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = fVar25 + fVar23;
        }
        else {
          System_Collections_Generic_List_float___AddWithResize_3ac28c0
                    (lVar15,*(undefined8 *)
                             (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70));
          uVar13 = *(uint *)(lVar16 + 0x18);
        }
        if (uVar13 <= uStack_94) goto LAB_02412bc0;
        lVar15 = (long)(int)uStack_94;
        uStack_94 = uStack_94 + 1;
        fVar25 = fVar25 + *(float *)(lVar16 + lVar15 * 4 + 0x20);
      } while ((int)uStack_94 < iVar17);
    }
    puVar4 = PTR_DAT_04cb8328;
    puVar3 = PTR_DAT_04cb8300;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar16 = Dino_BusSand_App_UI_UiKit__Img_228203c
                       (0x42d20000,0x42be0000,0,0,0x3f800000,param_3,*(undefined8 *)puVar4,
                        *(undefined8 *)puVar3,0,0);
    puVar2 = PTR_DAT_04caf410;
    if (lVar16 != 0) {
      uVar7 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar16,0);
      puVar12 = (undefined8 *)(param_2 + 0x68);
      *puVar12 = uVar7;
      thunk_FUN_02134474(puVar12,uVar7);
      Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
                (param_1 + 75.0,0,*puVar12,*(undefined8 *)puVar2);
      *(float *)(param_2 + 0x94) = fVar21;
      uVar7 = Dino_BusSand_App_UI_WinPanel__NeedleLoop_23135dc(fVar21,param_2);
      Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_2,uVar7,0);
      return;
    }
  }
LAB_02412bbc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

