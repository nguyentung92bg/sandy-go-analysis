/* IL2CPP: Dino.BusSand.App.UI.HomeEntries$$Register
void Dino_BusSand_App_UI_HomeEntries__Register (Dino_BusSand_App_UI_HomeEntry_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeEntries$$Register
   void Dino_BusSand_App_UI_HomeEntries__Register (Dino_BusSand_App_UI_HomeEntry_o* e, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeEntries__Register_22e7290(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
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
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar6,0);
  puVar5 = PTR_DAT_04cb7390;
  puVar4 = PTR_DAT_04cb7380;
  puVar3 = PTR_DAT_04caf600;
  if (lVar6 != 0) {
    puVar12 = (undefined8 *)(lVar6 + 0x10);
    *puVar12 = param_1;
    thunk_FUN_02134474(puVar12,param_1);
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar3;
    }
    lVar7 = **(long **)(lVar7 + 0xb8);
    uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
    System_Predicate_object____ctor_2c4e748(uVar8,lVar6,*(undefined8 *)puVar5,0);
    if (lVar7 != 0) {
      System_Collections_Generic_List_object___RemoveAll_3a83234
                (lVar7,uVar8,*(undefined8 *)PTR_DAT_04cb7370);
      lVar6 = **(long **)(*(long *)puVar3 + 0xb8);
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + 0x10);
        uVar8 = *puVar12;
        lVar11 = *(long *)PTR_DAT_04cb7368;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        puVar4 = PTR_DAT_04cb7398;
        if (lVar7 != 0) {
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            puVar12 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
            *puVar12 = uVar8;
            thunk_FUN_02134474(puVar12);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar6,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = *(long *)puVar4;
          lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar4;
          }
          puVar12 = *(undefined8 **)(lVar6 + 0xb8);
          lVar11 = puVar12[1];
          if (lVar11 == 0) {
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              puVar12 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
            }
            uVar8 = *puVar12;
            lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb7360);
            System_Comparison_object____ctor_3326afc(lVar11,uVar8,*(undefined8 *)PTR_DAT_04cb7388,0)
            ;
            plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
            *plVar9 = lVar11;
            thunk_FUN_02134474(plVar9,lVar11);
          }
          if (lVar7 != 0) {
            lVar6 = *(long *)PTR_DAT_04cb7378;
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              System_ThrowHelper__ThrowArgumentNullException_48419e0(0x22);
            }
            iVar1 = *(int *)(lVar7 + 0x18);
            if (1 < iVar1) {
              uVar8 = *(undefined8 *)(lVar7 + 0x10);
              lVar10 = *(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x1c0);
              if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_0216b470();
              }
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              System_Collections_Generic_ArraySortHelper_object___Sort_2a6d6f4
                        (uVar8,0,iVar1,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x1b8));
            }
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

