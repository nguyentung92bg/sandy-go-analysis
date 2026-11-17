/* IL2CPP: Dino.BusSand.App.UI.PassportPanel.<UnlockEffect>d__56$$MoveNext
bool Dino_BusSand_App_UI_PassportPanel__UnlockEffect_d__56__MoveNext (Dino_BusSand_App_UI_PassportPanel__UnlockEffect_d__56_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel.<UnlockEffect>d__56$$MoveNext
   bool Dino_BusSand_App_UI_PassportPanel__UnlockEffect_d__56__MoveNext
   (Dino_BusSand_App_UI_PassportPanel__UnlockEffect_d__56_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_PassportPanel__UnlockEffect_d__56__MoveNext_21d98bc(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  if ((bRam0000000004f9bb74 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cad688);
    FUN_02132f7c(PTR_DAT_04cad698);
    FUN_02132f7c(PTR_DAT_04cad6a8);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cad6c0);
    FUN_02132f7c(PTR_DAT_04cad6d0);
    FUN_02132f7c(PTR_DAT_04cad6f0);
    FUN_02132f7c(PTR_DAT_04cad728);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0900);
    FUN_02132f7c(PTR_DAT_04cb0908);
                    /* try { // try from 022d9984 to 023d99a3 has its CatchHandler @ 022d9a34 */
    FUN_02132f7c(PTR_DAT_04cb08b0);
    FUN_02132f7c(PTR_DAT_04cb0910);
    FUN_02132f7c(PTR_DAT_04cb0870);
                    /* try { // try from 022d99a4 to 023d99ef has its CatchHandler @ 022d9808 */
    FUN_02132f7c(PTR_DAT_04cb0868);
    bRam0000000004f9bb74 = 1;
  }
  puVar3 = PTR_DAT_04cad728;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar15 = *(long *)(param_1 + 0x20);
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar3 = PTR_DAT_04cad6d0;
    if (*(long *)(param_1 + 0x28) != 0) {
                    /* try { // try from 022d9bb8 to 023d9bd7 has its CatchHandler @ 022d9c68 */
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_98,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cad6d0);
      puVar5 = PTR_DAT_04cad698;
      puVar4 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022d9bd8 to 023d9c23 has its CatchHandler @ 022d9a58 */
      puStack_78 = puStack_90;
      uStack_80 = uStack_98;
      lStack_70 = lStack_88;
      uStack_98 = 0;
      puStack_90 = &uStack_80;
      while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_80,*(undefined8 *)puVar5), lVar9 = lStack_70,
            (uVar10 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
                    /* try { // try from 022d9c24 to 023d9c37 has its CatchHandler @ 022d9c50 */
        if ((uVar10 & 1) != 0) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
                    /* try { // try from 022d9c38 to 023d9c7b has its CatchHandler @ 022d9a58 */
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          UnityEngine_GameObject__SetActive_43c1408(lVar9,0,0);
        }
      }
                    /* catch() { ... } // from try @ 022d9c24 with catch @ 022d9c50 */
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_80,*(undefined8 *)PTR_DAT_04cad688);
      if (lVar15 != 0) {
                    /* catch() { ... } // from try @ 022d9bb8 with catch @ 022d9c68 */
        if ((*(char *)(lVar15 + 0x48) == '\0') && (*(char *)(lVar15 + 0x49) == '\0')) {
          Dino_BusSand_App_UI_PassportPanel__RefreshAll_21d42e8(lVar15);
        }
        if (*(long *)(lVar15 + 0x78) != 0) {
                    /* try { // try from 022d9c8c to 023d9deb has its CatchHandler @ 022d9c8c
                       catch() { ... } // from try @ 022d9c8c with catch @ 022d9c8c
                       catch() { ... } // from try @ 022d9e0c with catch @ 022d9c8c
                       catch() { ... } // from try @ 022d9e6c with catch @ 022d9c8c */
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_98,*(long *)(lVar15 + 0x78),*(undefined8 *)puVar3);
          puVar7 = PTR_DAT_04cb0900;
          puVar6 = PTR_DAT_04cb08b0;
          puVar3 = PTR_DAT_04caec68;
          puStack_78 = puStack_90;
          uStack_80 = uStack_98;
          puStack_90 = &uStack_80;
          lStack_70 = lStack_88;
          uStack_98 = 0;
          while( true ) {
            do {
              uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                 (&uStack_80,*(undefined8 *)puVar5);
              if ((uVar10 & 1) == 0) {
                    /* try { // try from 022d9e6c to 023d9eaf has its CatchHandler @ 022d9c8c */
                System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                          (&uStack_80,*(undefined8 *)PTR_DAT_04cad688);
                return 0;
                    /* catch() { ... } // from try @ 022d9e58 with catch @ 022d9e84 */
              }
              if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar15 = UnityEngine_Transform__Find_43d4bec(lStack_70,*(undefined8 *)puVar7,0);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar15,0,0);
            } while ((uVar10 & 1) == 0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0);
            if (lVar9 == 0) break;
            uVar10 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar9,0);
            if ((uVar10 & 1) != 0) {
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(lVar15,*(undefined8 *)puVar6,0);
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
                    /* try { // try from 022d99f0 to 023d9a03 has its CatchHandler @ 022d9a1c */
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
                    /* try { // try from 022d9a04 to 023d9a47 has its CatchHandler @ 022d9808 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 022d99f0 with catch @ 022d9a1c */
    System_Collections_Generic_List_object____ctor_3a8138c(lVar9,*(undefined8 *)PTR_DAT_04cad6f0);
    plVar16 = (long *)(param_1 + 0x28);
    *plVar16 = lVar9;
                    /* catch() { ... } // from try @ 022d9984 with catch @ 022d9a34 */
    thunk_FUN_02134474(plVar16,lVar9);
    if ((lVar15 != 0) && (*(long *)(lVar15 + 0x78) != 0)) {
                    /* try { // try from 022d9a58 to 023d9bb7 has its CatchHandler @ 022d9a58
                       catch() { ... } // from try @ 022d9a58 with catch @ 022d9a58
                       catch() { ... } // from try @ 022d9bd8 with catch @ 022d9a58
                       catch() { ... } // from try @ 022d9c38 with catch @ 022d9a58 */
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_98,*(long *)(lVar15 + 0x78),*(undefined8 *)PTR_DAT_04cad6d0);
      puVar8 = PTR_DAT_04cb0910;
      puVar7 = PTR_DAT_04cb0868;
      puVar6 = PTR_DAT_04caec68;
      puVar5 = PTR_DAT_04cad6c0;
      puVar4 = PTR_DAT_04cad698;
      puVar3 = PTR_DAT_04ca9ae8;
      puStack_78 = puStack_90;
      uStack_80 = uStack_98;
      lStack_70 = lStack_88;
      puStack_90 = &uStack_80;
      fVar19 = 0.0;
      uStack_98 = 0;
LAB_022d9aa8:
      uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                         (&uStack_80,*(undefined8 *)puVar4);
      if ((uVar10 & 1) != 0) {
        if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar9 = UnityEngine_Transform__Find_43d4bec(lStack_70,*(undefined8 *)puVar7,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
        if ((uVar10 & 1) == 0) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          UnityEngine_GameObject__SetActive_43c1408(lVar11,1,0);
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar18 = (float)Dino_BusSand_App_UI_GiftPackUi__Play_21ada68
                                    (lVar9,*(undefined8 *)puVar8,0);
          lVar11 = *plVar16;
          if (fVar19 <= fVar18) {
            fVar19 = fVar18;
          }
          if (lVar11 != 0) {
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar14 = *(long *)puVar5;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 != 0) {
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                plVar13 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
                *plVar13 = lVar9;
                thunk_FUN_02134474(plVar13,lVar9);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar11,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_022d9aa8;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_022d9aa8;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_80,*(undefined8 *)PTR_DAT_04cad688);
      uVar17 = *(undefined8 *)(lVar15 + 0x68);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar17,0,0);
      lVar9 = 0;
      if ((uVar10 & 1) != 0) {
        if (*(long *)(lVar15 + 0x68) == 0) goto LAB_022d9f50;
        lVar9 = UnityEngine_Transform__Find_43d4bec
                          (*(long *)(lVar15 + 0x68),*(undefined8 *)PTR_DAT_04cb0870,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
      if ((uVar10 & 1) != 0) {
        if ((lVar9 == 0) ||
           (lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0), lVar15 == 0))
        goto LAB_022d9f50;
                    /* try { // try from 022d9dec to 023d9e0b has its CatchHandler @ 022d9e9c */
        UnityEngine_GameObject__SetActive_43c1408(lVar15,1,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 022d9e0c to 023d9e57 has its CatchHandler @ 022d9c8c */
        fVar18 = (float)Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(lVar9,*(undefined8 *)puVar8,0);
        lVar15 = *plVar16;
        if (fVar19 <= fVar18) {
          fVar19 = fVar18;
        }
        if (lVar15 == 0) goto LAB_022d9f50;
        lVar11 = *(long *)(lVar15 + 0x10);
        lVar12 = *(long *)puVar5;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_022d9f50;
        uVar2 = *(uint *)(lVar15 + 0x18);
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                    /* try { // try from 022d9e58 to 023d9e6b has its CatchHandler @ 022d9e84 */
          *(uint *)(lVar15 + 0x18) = uVar2 + 1;
          plVar16 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
          *plVar16 = lVar9;
          thunk_FUN_02134474(plVar16,lVar9);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar15,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                    );
        }
      }
                    /* catch() { ... } // from try @ 022d9dec with catch @ 022d9e9c */
      if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 022d9ec0 to 023da06b has its CatchHandler @ 022d9ec0
                       catch() { ... } // from try @ 022d9ec0 with catch @ 022d9ec0
                       catch() { ... } // from try @ 022da180 with catch @ 022d9ec0
                       catch() { ... } // from try @ 022da2c4 with catch @ 022d9ec0 */
      Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cb0908,0);
      if (fVar19 <= 0.0) {
        fVar19 = 0.5;
      }
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar17 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(fVar19,0);
      if (param_1 != 0) {
        *(undefined8 *)(param_1 + 0x18) = uVar17;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar17);
        *(undefined4 *)(param_1 + 0x10) = 2;
        return 1;
      }
    }
  }
LAB_022d9f50:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

