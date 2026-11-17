/* IL2CPP: Dino.BusSand.App.LanguageFonts$$Reapply
void Dino_BusSand_App_LanguageFonts__Reapply (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.LanguageFonts$$Reapply
   void Dino_BusSand_App_LanguageFonts__Reapply (const MethodInfo* method); */

void Dino_BusSand_App_LanguageFonts__Reapply_2152e00(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  long lVar16;
  
  puVar1 = PTR_DAT_04cab530;
  if ((bRam0000000004f9b7cb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab530);
    bRam0000000004f9b7cb = 1;
  }
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar13);
    lVar13 = *(long *)puVar1;
  }
  lVar10 = *(long *)(lVar13 + 0xb8);
  lVar14 = *(long *)(lVar10 + 0x30);
  if (lVar14 == 0) {
                    /* try { // try from 02252e94 to 02352e9b has its CatchHandler @ 02252ec4 */
    return;
  }
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar13);
    lVar10 = *(long *)(*(long *)puVar1 + 0xb8);
    lVar14 = *(long *)(lVar10 + 0x30);
  }
                    /* try { // try from 02252e70 to 02352e93 has its CatchHandler @ 02252e70
                       catch() { ... } // from try @ 02252e70 with catch @ 02252e70
                       catch() { ... } // from try @ 02252e9c with catch @ 02252e70 */
  *(undefined8 *)(lVar10 + 0x30) = 0;
  thunk_FUN_02134474((undefined8 *)(lVar10 + 0x30),0);
  plVar9 = (long *)PTR_DAT_04cab530;
  if ((bRam0000000004f9b7ca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab560);
    FUN_02132f7c(PTR_DAT_04cab5b0);
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
  lVar13 = *plVar9;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *plVar9;
  }
  uVar3 = System_String__op_Equality_46d1108
                    (*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x30),lVar14,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar13 = *plVar9;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *plVar9;
  }
  plVar4 = (long *)(*(long *)(lVar13 + 0xb8) + 0x30);
  *plVar4 = lVar14;
  thunk_FUN_02134474(plVar4,lVar14);
  uVar5 = Dino_BusSand_App_LanguageFonts__FallbackFor_2152b44(lVar14);
  uVar6 = Dino_BusSand_App_LanguageFonts__DefaultFallback_2151ff0();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    lVar13 = *plVar9;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *plVar9;
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x70);
    if (lVar13 == 0) goto LAB_02252b40;
    System_Collections_Generic_HashSet_object___Add_37e654c
              (lVar13,uVar5,*(undefined8 *)PTR_DAT_04cab560);
  }
  lVar13 = UnityEngine_Resources__FindObjectsOfTypeAll_object__2891d1c
                     (*(undefined8 *)PTR_DAT_04cab5e8);
  puVar2 = PTR_DAT_04cab5b0;
  if (lVar13 != 0) {
    if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
      uVar3 = 0;
      uVar11 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
      plVar4 = (long *)PTR_DAT_04cab5f8;
      do {
        if (uVar11 <= uVar3) goto LAB_02252b3c;
        lVar10 = *(long *)(lVar13 + 0x20 + uVar3 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
        if ((uVar11 & 1) == 0) {
          lVar14 = *plVar9;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar14 = *plVar9;
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x28);
          if (lVar14 == 0) goto LAB_02252b40;
          uVar11 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                             (lVar14,lVar10,*(undefined8 *)puVar2);
          if ((uVar11 & 1) == 0) {
            if (lVar10 == 0) goto LAB_02252b40;
            if (*(int *)(lVar10 + 0x110) != 1) {
              lVar14 = *(long *)(lVar10 + 0x188);
              if (lVar14 == 0) {
                uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab5d0);
                System_Collections_Generic_List_object____ctor_3a8138c
                          (uVar7,*(undefined8 *)PTR_DAT_04cab5c8);
                *(undefined8 *)(lVar10 + 0x188) = uVar7;
                thunk_FUN_02134474(lVar10 + 0x188,uVar7);
                lVar14 = *(long *)(lVar10 + 0x188);
              }
              lVar8 = *plVar4;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar8 = *plVar4;
              }
              puVar12 = *(undefined8 **)(lVar8 + 0xb8);
              lVar16 = puVar12[1];
              if (lVar16 == 0) {
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  puVar12 = *(undefined8 **)(*(long *)PTR_DAT_04cab5f8 + 0xb8);
                }
                uVar7 = *puVar12;
                lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab5e0);
                System_Predicate_object____ctor_2c4e748
                          (lVar16,uVar7,*(undefined8 *)PTR_DAT_04cab5f0,0);
                plVar9 = (long *)(*(long *)(*(long *)PTR_DAT_04cab5f8 + 0xb8) + 8);
                *plVar9 = lVar16;
                thunk_FUN_02134474(plVar9,lVar16);
                plVar9 = (long *)PTR_DAT_04cab530;
              }
              if (lVar14 == 0) goto LAB_02252b40;
              System_Collections_Generic_List_object___RemoveAll_3a83234
                        (lVar14,lVar16,*(undefined8 *)PTR_DAT_04cab5c0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
              plVar4 = (long *)PTR_DAT_04cab5f8;
              if ((uVar11 & 1) == 0) {
                uVar15 = 0;
              }
              else {
                if (*(long *)(lVar10 + 0x188) == 0) goto LAB_02252b40;
                System_Collections_Generic_List_object___Insert_3a828b4
                          (*(long *)(lVar10 + 0x188),0,uVar5,*(undefined8 *)PTR_DAT_04cab5b8);
                uVar15 = 1;
              }
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
              if ((uVar11 & 1) != 0) {
                if (*(long *)(lVar10 + 0x188) == 0) goto LAB_02252b40;
                System_Collections_Generic_List_object___Insert_3a828b4
                          (*(long *)(lVar10 + 0x188),uVar15,uVar6,*(undefined8 *)PTR_DAT_04cab5b8);
              }
            }
          }
        }
        uVar11 = (ulong)*(uint *)(lVar13 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar13 + 0x18));
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar13 = UnityEngine_Object__FindObjectsByType_object__2804e38
                       (1,0,*(undefined8 *)PTR_DAT_04cab5d8);
    if (lVar13 != 0) {
      if ((int)*(ulong *)(lVar13 + 0x18) < 1) {
        return;
      }
      uVar3 = 0;
      uVar11 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
      do {
        if (uVar11 <= uVar3) {
LAB_02252b3c:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar9 = *(long **)(lVar13 + 0x20 + uVar3 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = UnityEngine_Object__op_Inequality_43c8dec(plVar9,0,0);
        if ((uVar11 & 1) != 0) {
          if (plVar9 == (long *)0x0) break;
          (**(code **)(*plVar9 + 0x2d8))(plVar9,*(undefined8 *)(*plVar9 + 0x2e0));
        }
        uVar11 = (ulong)*(uint *)(lVar13 + 0x18);
        uVar3 = uVar3 + 1;
        if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar3) {
          return;
        }
      } while( true );
    }
  }
LAB_02252b40:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

