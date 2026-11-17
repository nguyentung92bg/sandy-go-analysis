/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro$$Migrate
void Dino_BusSand_App_Meta_BoosterIntro__Migrate (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro$$Migrate
   void Dino_BusSand_App_Meta_BoosterIntro__Migrate (const MethodInfo* method); */

void Dino_BusSand_App_Meta_BoosterIntro__Migrate_2202ac4(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  puVar3 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bcb4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c70);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cb1c98);
    FUN_02132f7c(PTR_DAT_04cad218);
    FUN_02132f7c(PTR_DAT_04cb1ca0);
    FUN_02132f7c(PTR_DAT_04cb1ca8);
    FUN_02132f7c(PTR_DAT_04cad220);
    FUN_02132f7c(PTR_DAT_04cad228);
    FUN_02132f7c(PTR_DAT_04cb1cb0);
    FUN_02132f7c(PTR_DAT_04caede0);
    FUN_02132f7c(PTR_DAT_04cad240);
    FUN_02132f7c(PTR_DAT_04cb1cb8);
    FUN_02132f7c(PTR_DAT_04cb1cc0);
                    /* try { // try from 02302b8c to 02402b9f has its CatchHandler @ 02302bb8 */
    FUN_02132f7c(PTR_DAT_04cab718);
                    /* try { // try from 02302ba0 to 02402bcf has its CatchHandler @ 02302aa4 */
    FUN_02132f7c(PTR_DAT_04cad248);
    FUN_02132f7c(PTR_DAT_04cad230);
                    /* catch() { ... } // from try @ 02302b8c with catch @ 02302bb8 */
    FUN_02132f7c(PTR_DAT_04cad258);
    FUN_02132f7c(PTR_DAT_04cab740);
                    /* try { // try from 02302bd0 to 02402cd3 has its CatchHandler @ 02302bd0
                       catch() { ... } // from try @ 02302bd0 with catch @ 02302bd0
                       catch() { ... } // from try @ 02302ce8 with catch @ 02302bd0 */
    FUN_02132f7c(PTR_DAT_04cb1cc8);
    FUN_02132f7c(PTR_DAT_04cad260);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb1cd0);
    FUN_02132f7c(PTR_DAT_04cb1cd8);
    FUN_02132f7c(PTR_DAT_04cb1c90);
    FUN_02132f7c(PTR_DAT_04caccc8);
    FUN_02132f7c(PTR_DAT_04cb1ce0);
    FUN_02132f7c(PTR_DAT_04cab340);
    FUN_02132f7c(PTR_DAT_04cb1ce8);
    bRam0000000004f9bcb4 = 1;
  }
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  lStack_80 = 0;
  puStack_68 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar7 == 0) {
    return;
  }
  if (1 < *(int *)(lVar7 + 0x10)) {
    return;
  }
  *(undefined4 *)(lVar7 + 0x10) = 2;
  if (*(long *)(lVar7 + 0x1d0) == 0) {
                    /* try { // try from 02302cd4 to 02402ce7 has its CatchHandler @ 02302d00 */
    uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad260);
                    /* try { // try from 02302ce8 to 02402d17 has its CatchHandler @ 02302bd0 */
    System_Collections_Generic_List_object____ctor_3a8138c(uVar8,*(undefined8 *)PTR_DAT_04cad258);
                    /* catch() { ... } // from try @ 02302cd4 with catch @ 02302d00 */
    *(undefined8 *)(lVar7 + 0x1d0) = uVar8;
    thunk_FUN_02134474(lVar7 + 0x1d0,uVar8);
  }
  puVar4 = PTR_DAT_04cb1c90;
  uVar1 = *(undefined4 *)(lVar7 + 0x14);
  lVar9 = *(long *)PTR_DAT_04cb1c90;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar4;
  }
  puVar13 = *(undefined8 **)(lVar9 + 0xb8);
  lVar15 = puVar13[2];
  if (lVar15 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar13 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar8 = *puVar13;
    lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caede0);
    System_Func_int__bool____ctor_37a2278(lVar15,uVar8,*(undefined8 *)PTR_DAT_04cb1cd0,0);
    plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    *plVar10 = lVar15;
    thunk_FUN_02134474(plVar10,lVar15);
    lVar9 = *(long *)puVar4;
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar4;
  }
  puVar13 = *(undefined8 **)(lVar9 + 0xb8);
  lVar16 = puVar13[3];
  if (lVar16 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar13 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar8 = *puVar13;
    lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caede0);
    System_Func_int__bool____ctor_37a2278(lVar16,uVar8,*(undefined8 *)PTR_DAT_04cb1cd8,0);
    plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    *plVar10 = lVar16;
    thunk_FUN_02134474(plVar10,lVar16);
  }
  if (*(int *)(*(long *)PTR_DAT_04cb1c70 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_App_Meta_BoosterIntro__Plan_2203308(uVar1,lVar15,lVar16);
  if (lVar9 != 0) {
    System_Collections_Generic_Dictionary_int__int___GetEnumerator_342d490
              (&uStack_b0,lVar9,*(undefined8 *)PTR_DAT_04cb1c98);
    puVar6 = PTR_DAT_04cb1ca8;
    puVar5 = PTR_DAT_04cad248;
    puVar4 = PTR_DAT_04cad240;
    puStack_68 = puStack_a8;
    uStack_70 = uStack_b0;
    uStack_58 = uStack_98;
    lStack_60 = lStack_a0;
    uStack_b0 = 0;
    puStack_a8 = &uStack_70;
    while (uVar11 = System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext_362fc2c
                              (&uStack_70,*(undefined8 *)puVar6), lVar9 = lStack_60,
          (uVar11 & 1) != 0) {
      lVar16 = *(long *)(lVar7 + 0x1d0);
      lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                    /* try { // try from 02302e98 to 02402e9b has its CatchHandler @ 02303160 */
      Dino_BusSand_App_Meta_IntPair___ctor_226f05c(lVar15,0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      *(int *)(lVar15 + 0x10) = (int)lVar9;
      *(long *)(lVar15 + 0x18) = lVar9 >> 0x20;
      if (lVar16 == 0) {
LAB_0230311c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar9 = *(long *)(lVar16 + 0x10);
      lVar14 = *(long *)puVar5;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_0230311c;
      uVar2 = *(uint *)(lVar16 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar2 + 1;
        plVar10 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
        *plVar10 = lVar15;
        thunk_FUN_02134474(plVar10,lVar15);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar16,lVar15,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
        ;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose_362fd34
              (&uStack_70,*(undefined8 *)PTR_DAT_04cb1ca0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
    if (*(long *)(lVar7 + 0x1d0) != 0) {
      if (0 < *(int *)(*(long *)(lVar7 + 0x1d0) + 0x18)) {
        lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab748);
        System_Collections_Generic_List_object____ctor_3a8138c
                  (lVar9,*(undefined8 *)PTR_DAT_04cab740);
        if (*(long *)(lVar7 + 0x1d0) == 0) goto LAB_0230312c;
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_b0,*(long *)(lVar7 + 0x1d0),*(undefined8 *)PTR_DAT_04cad230);
        puVar5 = PTR_DAT_04cb1ce8;
        puVar4 = PTR_DAT_04cad220;
        puVar3 = PTR_DAT_04cab718;
        puStack_88 = puStack_a8;
        uStack_90 = uStack_b0;
        puStack_a8 = &uStack_90;
        lStack_80 = lStack_a0;
        uStack_b0 = 0;
        while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                  (&uStack_90,*(undefined8 *)puVar4), lVar15 = lStack_80,
              (uVar11 & 1) != 0) {
          if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar8 = System_Int32__ToString_482d750(lStack_80 + 0x10,0);
          uVar12 = System_Int64__ToString_482e7e4(lVar15 + 0x18,0);
          uVar8 = System_String__Concat_46d2b84(uVar8,*(undefined8 *)puVar5,uVar12,0);
          if (lVar9 == 0) {
LAB_02303120:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar15 = *(long *)(lVar9 + 0x10);
          lVar16 = *(long *)puVar3;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_02303120;
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
            thunk_FUN_02134474();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar9,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_90,*(undefined8 *)PTR_DAT_04cad218);
        uVar8 = System_Int32__ToString_482d750((undefined4 *)(lVar7 + 0x14),0);
        uVar12 = System_String__Join_46d39a4(*(undefined8 *)PTR_DAT_04cab340,lVar9,0);
        uVar8 = System_String__Concat_46d30e8
                          (*(undefined8 *)PTR_DAT_04cb1ce0,uVar8,*(undefined8 *)PTR_DAT_04caccc8,
                           uVar12,0);
        if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
        }
        UnityEngine_Debug__Log_4360fc8(uVar8,0);
      }
      return;
    }
  }
LAB_0230312c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

