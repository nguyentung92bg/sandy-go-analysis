/* IL2CPP: Dino.BusSand.App.LanguageFonts$$Apply
void Dino_BusSand_App_LanguageFonts__Apply (System_String_o* lang, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.LanguageFonts$$Apply
   void Dino_BusSand_App_LanguageFonts__Apply (System_String_o* lang, const MethodInfo* method); */

void Dino_BusSand_App_LanguageFonts__Apply_2152684(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  long lVar15;
  long *plVar16;
  
  plVar11 = (long *)PTR_DAT_04cab530;
  if ((bRam0000000004f9b7ca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab560);
    FUN_02132f7c(PTR_DAT_04cab5b0);
                    /* catch() { ... } // from try @ 022527d4 with catch @ 022526d0 */
    FUN_02132f7c(PTR_DAT_04cab530);
    FUN_02132f7c(PTR_DAT_04cab5b8);
    FUN_02132f7c(PTR_DAT_04cab5c0);
    FUN_02132f7c(PTR_DAT_04cab5c8);
    FUN_02132f7c(PTR_DAT_04cab5d0);
    FUN_02132f7c(PTR_DAT_04cab5d8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab5e0);
    FUN_02132f7c(PTR_DAT_04cab5e8);
    FUN_02132f7c(PTR_DAT_04cab5f0);
    FUN_02132f7c(PTR_DAT_04cab5f8);
    bRam0000000004f9b7ca = 1;
  }
  lVar3 = *plVar11;
                    /* try { // try from 02252760 to 0235276b has its CatchHandler @ 02252814 */
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *plVar11;
  }
  uVar4 = System_String__op_Equality_46d1108
                    (*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30),param_1,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar3 = *plVar11;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *plVar11;
  }
                    /* try { // try from 022527a8 to 023527b3 has its CatchHandler @ 02252800 */
  puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30);
  *puVar5 = param_1;
  thunk_FUN_02134474(puVar5,param_1);
  uVar6 = Dino_BusSand_App_LanguageFonts__FallbackFor_2152b44(param_1);
  uVar7 = Dino_BusSand_App_LanguageFonts__DefaultFallback_2151ff0();
                    /* try { // try from 022527c8 to 023527d3 has its CatchHandler @ 022527f8 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 022527d4 to 02352823 has its CatchHandler @ 022526d0 */
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    lVar3 = *plVar11;
    if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 022527c8 with catch @ 022527f8 */
      thunk_FUN_0218fdac();
      lVar3 = *plVar11;
    }
                    /* catch() { ... } // from try @ 022527a8 with catch @ 02252800 */
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x70);
    if (lVar3 == 0) goto LAB_02252b40;
                    /* catch() { ... } // from try @ 02252760 with catch @ 02252814 */
    System_Collections_Generic_HashSet_object___Add_37e654c
              (lVar3,uVar6,*(undefined8 *)PTR_DAT_04cab560);
  }
  lVar3 = UnityEngine_Resources__FindObjectsOfTypeAll_object__2891d1c
                    (*(undefined8 *)PTR_DAT_04cab5e8);
  puVar2 = PTR_DAT_04cab5b0;
  if (lVar3 != 0) {
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar4 = 0;
      uVar12 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      plVar16 = (long *)PTR_DAT_04cab5f8;
      do {
        if (uVar12 <= uVar4) goto LAB_02252b3c;
        lVar13 = *(long *)(lVar3 + 0x20 + uVar4 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar12 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
        if ((uVar12 & 1) == 0) {
                    /* catch() { ... } // from try @ 022528e4 with catch @ 02252890 */
          lVar8 = *plVar11;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar8 = *plVar11;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
          if (lVar8 == 0) goto LAB_02252b40;
          uVar12 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                             (lVar8,lVar13,*(undefined8 *)puVar2);
          if ((uVar12 & 1) == 0) {
            if (lVar13 == 0) goto LAB_02252b40;
            if (*(int *)(lVar13 + 0x110) != 1) {
              lVar8 = *(long *)(lVar13 + 0x188);
              if (lVar8 == 0) {
                    /* try { // try from 022528dc to 023528e3 has its CatchHandler @ 02252930 */
                    /* try { // try from 022528e4 to 02352943 has its CatchHandler @ 02252890 */
                uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab5d0);
                System_Collections_Generic_List_object____ctor_3a8138c
                          (uVar9,*(undefined8 *)PTR_DAT_04cab5c8);
                *(undefined8 *)(lVar13 + 0x188) = uVar9;
                thunk_FUN_02134474(lVar13 + 0x188,uVar9);
                lVar8 = *(long *)(lVar13 + 0x188);
              }
              lVar10 = *plVar16;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar10 = *plVar16;
              }
              puVar5 = *(undefined8 **)(lVar10 + 0xb8);
              lVar15 = puVar5[1];
              if (lVar15 == 0) {
                    /* catch() { ... } // from try @ 022528dc with catch @ 02252930 */
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                    /* try { // try from 02252950 to 02352953 has its CatchHandler @ 0225295c */
                  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04cab5f8 + 0xb8);
                }
                uVar9 = *puVar5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02252950 with catch @ 0225295c
                        */
                    /* try { // try from 02252960 to 0235298f has its CatchHandler @ 02252960
                       catch() { ... } // from try @ 02252960 with catch @ 02252960
                       catch() { ... } // from try @ 0225299c with catch @ 02252960 */
                lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab5e0);
                System_Predicate_object____ctor_2c4e748
                          (lVar15,uVar9,*(undefined8 *)PTR_DAT_04cab5f0,0);
                    /* try { // try from 02252990 to 0235299b has its CatchHandler @ 022529bc */
                    /* try { // try from 0225299c to 023529d7 has its CatchHandler @ 02252960 */
                plVar11 = (long *)(*(long *)(*(long *)PTR_DAT_04cab5f8 + 0xb8) + 8);
                *plVar11 = lVar15;
                thunk_FUN_02134474(plVar11,lVar15);
                plVar11 = (long *)PTR_DAT_04cab530;
              }
              if (lVar8 == 0) goto LAB_02252b40;
                    /* catch() { ... } // from try @ 02252990 with catch @ 022529bc */
              System_Collections_Generic_List_object___RemoveAll_3a83234
                        (lVar8,lVar15,*(undefined8 *)PTR_DAT_04cab5c0);
                    /* try { // try from 022529d8 to 02352a4b has its CatchHandler @ 022529d8
                       catch() { ... } // from try @ 022529d8 with catch @ 022529d8
                       catch() { ... } // from try @ 02252a60 with catch @ 022529d8 */
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
              plVar16 = (long *)PTR_DAT_04cab5f8;
              if ((uVar12 & 1) == 0) {
                uVar14 = 0;
              }
              else {
                if (*(long *)(lVar13 + 0x188) == 0) goto LAB_02252b40;
                System_Collections_Generic_List_object___Insert_3a828b4
                          (*(long *)(lVar13 + 0x188),0,uVar6,*(undefined8 *)PTR_DAT_04cab5b8);
                uVar14 = 1;
              }
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
                    /* try { // try from 02252a4c to 02352a5f has its CatchHandler @ 02252a74 */
              if ((uVar12 & 1) != 0) {
                if (*(long *)(lVar13 + 0x188) == 0) goto LAB_02252b40;
                    /* try { // try from 02252a60 to 02352a8b has its CatchHandler @ 022529d8 */
                System_Collections_Generic_List_object___Insert_3a828b4
                          (*(long *)(lVar13 + 0x188),uVar14,uVar7,*(undefined8 *)PTR_DAT_04cab5b8);
              }
            }
          }
        }
        uVar12 = (ulong)*(uint *)(lVar3 + 0x18);
                    /* catch() { ... } // from try @ 02252a4c with catch @ 02252a74 */
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = UnityEngine_Object__FindObjectsByType_object__2804e38
                      (1,0,*(undefined8 *)PTR_DAT_04cab5d8);
    if (lVar3 != 0) {
      if ((int)*(ulong *)(lVar3 + 0x18) < 1) {
        return;
      }
      uVar4 = 0;
      uVar12 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar4) {
LAB_02252b3c:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar11 = *(long **)(lVar3 + 0x20 + uVar4 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar12 = UnityEngine_Object__op_Inequality_43c8dec(plVar11,0,0);
        if ((uVar12 & 1) != 0) {
          if (plVar11 == (long *)0x0) break;
          (**(code **)(*plVar11 + 0x2d8))(plVar11,*(undefined8 *)(*plVar11 + 0x2e0));
        }
        uVar12 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
        if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar4) {
          return;
        }
      } while( true );
    }
  }
LAB_02252b40:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

