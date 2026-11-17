/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$Begin
Dino_BusSand_App_UI_KitAdopt_Scope_o* Dino_BusSand_App_UI_KitAdopt__Begin (UnityEngine_Transform_o* root, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$Begin
   Dino_BusSand_App_UI_KitAdopt_Scope_o* Dino_BusSand_App_UI_KitAdopt__Begin
   (UnityEngine_Transform_o* root, System_String_o* key, const MethodInfo* method); */

long Dino_BusSand_App_UI_KitAdopt__Begin_227d2a0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c12d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4b88);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04cb4b90);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb4b98);
    FUN_02132f7c(PTR_DAT_04cb0b40);
    FUN_02132f7c(PTR_DAT_04cad608);
    bRam0000000004f9c12d = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar6 & 1) != 0) {
                    /* try { // try from 0237d5f8 to 0247d91b has its CatchHandler @ 0237d5f8
                       catch() { ... } // from try @ 0237d5f8 with catch @ 0237d5f8
                       catch() { ... } // from try @ 0237d9bc with catch @ 0237d5f8
                       catch() { ... } // from try @ 0237db9c with catch @ 0237d5f8
                       catch() { ... } // from try @ 0237dbe4 with catch @ 0237d5f8
                       catch() { ... } // from try @ 0237dc10 with catch @ 0237d5f8 */
    return 0;
  }
  if (param_1 != 0) {
    iVar4 = UnityEngine_Transform__get_childCount_43d4480(param_1,0);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = UnityEngine_Transform__get_childCount_43d4480(param_1,0);
    lVar7 = UnityEngine_Transform__GetChild_43d5294(param_1,iVar4 + -1,0);
    if (lVar7 != 0) {
      uVar8 = UnityEngine_Object__get_name_43c71a4(lVar7,0);
      puVar3 = PTR_DAT_04cad608;
      uVar6 = System_String__op_Inequality_46d110c(uVar8,*(undefined8 *)PTR_DAT_04cad608,0);
      if ((uVar6 & 1) != 0) {
        lVar7 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)puVar3,0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
      puVar2 = PTR_DAT_04cac4f8;
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar9 = Dino_BusSand_App_UI_KitPrefabs__Get_2181940(param_2,0);
      if (lVar9 == 0) {
        return 0;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = Dino_BusSand_App_UI_KitPrefabs__get_Hold_2181d88(0);
      if (lVar7 != 0) {
        UnityEngine_Transform__SetParent_43d1e34(lVar7,uVar8,0,0);
        lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4b98);
        Dino_BusSand_App_UI_KitAdopt_Scope___ctor_227d634();
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x10) = param_1;
          thunk_FUN_02134474((long *)(lVar10 + 0x10),param_1);
          *(long *)(lVar10 + 0x18) = lVar7;
          thunk_FUN_02134474((long *)(lVar10 + 0x18),lVar7);
          *(long *)(lVar10 + 0x20) = lVar9;
          thunk_FUN_02134474((long *)(lVar10 + 0x20),lVar9);
          uVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb0b40,*(undefined4 *)(lVar9 + 0x20));
          puVar13 = (undefined8 *)(lVar10 + 0x28);
          *puVar13 = uVar8;
          thunk_FUN_02134474(puVar13,uVar8);
          uVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb4b88,*(undefined4 *)(lVar9 + 0x20));
          *(undefined8 *)(lVar10 + 0x30) = uVar8;
          thunk_FUN_02134474();
          uVar1 = *(uint *)(lVar9 + 0x20);
          uVar5 = UnityEngine_Transform__get_childCount_43d4480(lVar7,0);
          if ((int)uVar5 <= (int)uVar1) {
            uVar1 = uVar5;
          }
          if (0 < (int)uVar1) {
            uVar6 = 0;
            lVar9 = 0x20;
            do {
              plVar14 = (long *)*puVar13;
              lVar11 = UnityEngine_Transform__GetChild_43d5294(lVar7,uVar6 & 0xffffffff,0);
              if (plVar14 == (long *)0x0) goto LAB_0237d620;
              if ((lVar11 != 0) &&
                 (lVar12 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0)
                 ) {
                uVar8 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                FUN_021330e8(uVar8,0);
              }
              if (*(uint *)(plVar14 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              *(long *)((long)plVar14 + lVar9) = lVar11;
              thunk_FUN_02134474((long)plVar14 + lVar9,lVar11);
              uVar6 = uVar6 + 1;
              lVar9 = lVar9 + 8;
            } while (uVar1 != uVar6);
          }
          puVar2 = PTR_DAT_04cad7b8;
          lVar7 = *(long *)PTR_DAT_04cad7b8;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar2;
          }
          lVar7 = **(long **)(lVar7 + 0xb8);
          if (lVar7 != 0) {
            lVar9 = *(long *)(lVar7 + 0x10);
            lVar11 = *(long *)PTR_DAT_04cb4b90;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                plVar14 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                *plVar14 = lVar10;
                thunk_FUN_02134474(plVar14,lVar10);
                return lVar10;
              }
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar7,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              return lVar10;
            }
          }
        }
      }
    }
  }
LAB_0237d620:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

