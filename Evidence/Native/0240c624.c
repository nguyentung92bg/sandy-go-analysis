/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$BuildPips
void Dino_BusSand_App_UI_HudPanel__BuildPips (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t cap, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$BuildPips
   void Dino_BusSand_App_UI_HudPanel__BuildPips (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t
   cap, const MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__BuildPips_230c624(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  int iStack_54;
  
  if ((bRam0000000004f9c524 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5cb8);
    FUN_02132f7c(PTR_DAT_04cb5cc0);
    FUN_02132f7c(PTR_DAT_04cb5cc8);
    FUN_02132f7c(PTR_DAT_04cafe88);
    FUN_02132f7c(PTR_DAT_04cb81a8);
    FUN_02132f7c(PTR_DAT_04cb5cd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb81b0);
    FUN_02132f7c(PTR_DAT_04cb8190);
    bRam0000000004f9c524 = 1;
  }
  puVar10 = PTR_DAT_04cb81b0;
  puVar9 = PTR_DAT_04cb8190;
  puVar8 = PTR_DAT_04cb5cc0;
  puVar7 = PTR_DAT_04cb5cb8;
  puVar6 = PTR_DAT_04cafe88;
  puVar5 = PTR_DAT_04cad330;
  puVar4 = PTR_DAT_04ca9ae8;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  lStack_90 = 0;
  iStack_54 = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_b8,*(long *)(param_1 + 0x98),*(undefined8 *)PTR_DAT_04cb5cd0);
    lStack_90 = lStack_a8;
    puStack_98 = puStack_b0;
    uStack_a0 = uStack_b8;
    uStack_b8 = 0;
    puStack_b0 = &uStack_a0;
    while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_a0,*(undefined8 *)puVar8), lVar13 = lStack_90,
          (uVar11 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
      if ((uVar11 & 1) != 0) {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        UnityEngine_Object__Destroy_43c8114(uVar12,0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_a0,*(undefined8 *)puVar7);
    lVar13 = *(long *)(param_1 + 0x98);
    if (lVar13 != 0) {
      iVar1 = *(int *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x18) = 0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar13 + 0x10),0,iVar1,0);
      }
      if (8 < (int)param_2) {
        param_2 = 9;
      }
      if ((int)param_2 < 2) {
        param_2 = 1;
      }
      if (*(long *)(param_1 + 0x70) != 0) {
        fVar17 = 31.0;
        fVar18 = 5.0;
        fVar19 = 26.0;
        if (param_2 < 7) {
          fVar19 = 31.0;
        }
        if (param_2 < 7) {
          fVar18 = 6.0;
        }
        fVar20 = fVar19 * (float)(int)param_2 + fVar18 * (float)(int)(param_2 - 1);
        fVar18 = fVar20 + 64.0;
        if (param_2 < 7) {
          fVar17 = 37.0;
        }
        fVar3 = 230.0;
        if (230.0 <= fVar18) {
          fVar3 = fVar18;
        }
        UnityEngine_RectTransform__set_sizeDelta_43cfa70
                  (fVar3,0x42e00000,*(long *)(param_1 + 0x70),0);
        iStack_54 = 0;
        while( true ) {
          uVar16 = *(undefined8 *)(param_1 + 0x70);
          uVar12 = System_Int32__ToString_482d750(&iStack_54,0);
          uVar12 = System_String__Concat_46c82e0(*(undefined8 *)puVar10,uVar12,0);
          iVar1 = iStack_54;
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar5);
          }
          uVar12 = Dino_BusSand_App_UI_UiKit__Img_228203c
                             (fVar19,0x41300000,
                              (fVar19 * 0.5 - fVar20 * 0.5) + fVar17 * (float)iVar1,
                              0xc2000000c2000000,0x3f800000,uVar16,uVar12,*(undefined8 *)puVar9,0,0)
          ;
          lVar13 = *(long *)(param_1 + 0x98);
          if (lVar13 == 0) break;
          lVar14 = *(long *)(lVar13 + 0x10);
          lVar15 = *(long *)puVar6;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar14 == 0) break;
          uVar2 = *(uint *)(lVar13 + 0x18);
          if (uVar2 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
            thunk_FUN_02134474();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar13,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          iStack_54 = iStack_54 + 1;
          if ((int)param_2 <= iStack_54) {
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

