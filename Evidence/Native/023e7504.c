/* IL2CPP: Dino.BusSand.App.UI.HomeEntries$$RegisterCore
void Dino_BusSand_App_UI_HomeEntries__RegisterCore (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeEntries$$RegisterCore
   void Dino_BusSand_App_UI_HomeEntries__RegisterCore (const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeEntries__RegisterCore_22e7504(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar3 = PTR_DAT_04caf600;
  if ((bRam0000000004f9c42d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac8c0);
    FUN_02132f7c(PTR_DAT_04cb41b8);
    FUN_02132f7c(PTR_DAT_04caf600);
    FUN_02132f7c(PTR_DAT_04cb73a0);
    FUN_02132f7c(PTR_DAT_04cb73a8);
    FUN_02132f7c(PTR_DAT_04cb73b0);
    FUN_02132f7c(PTR_DAT_04cb73b8);
    FUN_02132f7c(PTR_DAT_04cb7398);
    FUN_02132f7c(PTR_DAT_04cb73c0);
    FUN_02132f7c(PTR_DAT_04cb73c8);
    FUN_02132f7c(PTR_DAT_04cb73d0);
    FUN_02132f7c(PTR_DAT_04cb73d8);
    FUN_02132f7c(PTR_DAT_04cb73e0);
    bRam0000000004f9c42d = 1;
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(lVar6 + 0xb8);
  if (*(char *)(lVar8 + 8) != '\0') {
    return;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
  }
  puVar4 = PTR_DAT_04cb73a0;
  *(undefined1 *)(lVar8 + 8) = 1;
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  *(undefined4 *)(lVar6 + 0x60) = 0x3f800000;
  System_Object___ctor_4870e5c(lVar6,0);
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)PTR_DAT_04cb73d0;
  thunk_FUN_02134474();
  puVar4 = PTR_DAT_04cb73c0;
  *(undefined1 *)(lVar6 + 0x18) = 1;
  *(undefined4 *)(lVar6 + 0x1c) = 0x14;
  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar4;
  thunk_FUN_02134474();
  *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)PTR_DAT_04cb73c8;
  thunk_FUN_02134474();
  *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)PTR_DAT_04cb73d8;
  thunk_FUN_02134474();
  *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)PTR_DAT_04cb73e0;
  thunk_FUN_02134474();
  puVar4 = PTR_DAT_04cb7398;
  uVar12 = _UNK_00e6a910;
  *(undefined4 *)(lVar6 + 0x6c) = 3;
  lVar8 = *(long *)puVar4;
  *(undefined8 *)(lVar6 + 100) = uVar12;
  *(undefined1 *)(lVar6 + 0x70) = 1;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar4;
  }
  puVar9 = *(undefined8 **)(lVar8 + 0xb8);
  lVar11 = puVar9[2];
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar9;
    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
    System_Func_bool____ctor_379d5fc(lVar11,uVar12,*(undefined8 *)PTR_DAT_04cb73a8,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    *plVar7 = lVar11;
    thunk_FUN_02134474(plVar7,lVar11);
  }
  *(long *)(lVar6 + 0x28) = lVar11;
  thunk_FUN_02134474((long *)(lVar6 + 0x28),lVar11);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar4;
  }
  puVar9 = *(undefined8 **)(lVar8 + 0xb8);
  lVar11 = puVar9[3];
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar9;
    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb41b8);
    System_Func_object____ctor_379de3c(lVar11,uVar12,*(undefined8 *)PTR_DAT_04cb73b0,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    *plVar7 = lVar11;
    thunk_FUN_02134474(plVar7,lVar11);
  }
  *(long *)(lVar6 + 0x30) = lVar11;
  thunk_FUN_02134474((long *)(lVar6 + 0x30),lVar11);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar4;
  }
  puVar9 = *(undefined8 **)(lVar8 + 0xb8);
  lVar11 = puVar9[4];
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
                    /* try { // try from 023e7834 to 024e78d7 has its CatchHandler @ 023e7834
                       catch() { ... } // from try @ 023e7834 with catch @ 023e7834
                       catch() { ... } // from try @ 023e78dc with catch @ 023e7834
                       catch() { ... } // from try @ 023e7984 with catch @ 023e7834
                       catch() { ... } // from try @ 023e79e0 with catch @ 023e7834 */
    uVar12 = *puVar9;
    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(lVar11,uVar12,*(undefined8 *)PTR_DAT_04cb73b8,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
    *plVar7 = lVar11;
    thunk_FUN_02134474(plVar7,lVar11);
  }
  *(long *)(lVar6 + 0x40) = lVar11;
  thunk_FUN_02134474((long *)(lVar6 + 0x40),lVar11);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cb7358;
  if ((bRam0000000004f9c42c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7360);
    FUN_02132f7c(PTR_DAT_04caf600);
    FUN_02132f7c(PTR_DAT_04cb7368);
    FUN_02132f7c(PTR_DAT_04cb7370);
    FUN_02132f7c(PTR_DAT_04cb7378);
    FUN_02132f7c(PTR_DAT_04cb7380);
    FUN_02132f7c(PTR_DAT_04cb7388);
    FUN_02132f7c(PTR_DAT_04cb7390);
    FUN_02132f7c(PTR_DAT_04cb7358);
    FUN_02132f7c(PTR_DAT_04cb7398);
    bRam0000000004f9c42c = 1;
  }
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar8,0);
  puVar5 = PTR_DAT_04cb7390;
  puVar4 = PTR_DAT_04cb7380;
  puVar3 = PTR_DAT_04caf600;
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 0x10);
    *plVar7 = lVar6;
    thunk_FUN_02134474(plVar7,lVar6);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar3;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
    System_Predicate_object____ctor_2c4e748(uVar12,lVar8,*(undefined8 *)puVar5,0);
    if (lVar6 != 0) {
      System_Collections_Generic_List_object___RemoveAll_3a83234
                (lVar6,uVar12,*(undefined8 *)PTR_DAT_04cb7370);
      lVar6 = **(long **)(*(long *)puVar3 + 0xb8);
      if (lVar6 != 0) {
        lVar11 = *(long *)(lVar6 + 0x10);
        lVar8 = *plVar7;
        lVar10 = *(long *)PTR_DAT_04cb7368;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        puVar4 = PTR_DAT_04cb7398;
        if (lVar11 != 0) {
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            plVar7 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
            *plVar7 = lVar8;
            thunk_FUN_02134474(plVar7);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar6,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = *(long *)puVar4;
          lVar8 = **(long **)(*(long *)puVar3 + 0xb8);
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar4;
          }
          puVar9 = *(undefined8 **)(lVar6 + 0xb8);
          lVar11 = puVar9[1];
          if (lVar11 == 0) {
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
            }
            uVar12 = *puVar9;
            lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb7360);
            System_Comparison_object____ctor_3326afc
                      (lVar11,uVar12,*(undefined8 *)PTR_DAT_04cb7388,0);
            plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
            *plVar7 = lVar11;
            thunk_FUN_02134474(plVar7,lVar11);
          }
          if (lVar8 != 0) {
            lVar6 = *(long *)PTR_DAT_04cb7378;
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              System_ThrowHelper__ThrowArgumentNullException_48419e0(0x22);
            }
            iVar1 = *(int *)(lVar8 + 0x18);
            if (1 < iVar1) {
              uVar12 = *(undefined8 *)(lVar8 + 0x10);
              lVar10 = *(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x1c0);
              if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_0216b470();
              }
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              System_Collections_Generic_ArraySortHelper_object___Sort_2a6d6f4
                        (uVar12,0,iVar1,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x1b8));
            }
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

