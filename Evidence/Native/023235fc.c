/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$SelectPersonToDead
System_Collections_Generic_List_int__o* Dino_BusSand_App_Meta_BattleRoyaleRules__SelectPersonToDead (Dino_BusSand_App_Meta_BattleRoyaleData_o* d, int32_t count, int32_t stage, System_Random_o* rng, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$SelectPersonToDead
   System_Collections_Generic_List_int__o*
   Dino_BusSand_App_Meta_BattleRoyaleRules__SelectPersonToDead
   (Dino_BusSand_App_Meta_BattleRoyaleData_o* d, int32_t count, int32_t stage, System_Random_o* rng,
   const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleRules__SelectPersonToDead_22235fc
               (long param_1,int param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  
  if ((bRam0000000004f9bdf0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae210);
    FUN_02132f7c(PTR_DAT_04cae220);
    FUN_02132f7c(PTR_DAT_04cb2b00);
    FUN_02132f7c(PTR_DAT_04cae200);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa188);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bdf0 = 1;
  }
  if (((param_1 == 0) || (*(char *)(param_1 + 0x80) == '\0')) ||
     (param_3 <= *(int *)(param_1 + 0x98))) {
    return 0;
  }
  Dino_BusSand_App_Meta_BattleRoyaleData__EnsureLists_221f420(param_1);
  puVar2 = PTR_DAT_04cae200;
  uVar14 = *(undefined8 *)(param_1 + 0x90);
  *(int *)(param_1 + 0x98) = param_3;
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_HashSet_int____ctor_37dafa0
            (lVar6,uVar14,*(undefined8 *)PTR_DAT_04cb2b00);
  puVar3 = PTR_DAT_04caa1c8;
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
  System_Collections_Generic_List_int____ctor_3a2b7dc(lVar7,*(undefined8 *)PTR_DAT_04cad6e8);
  puVar4 = PTR_DAT_04cae220;
  puVar2 = PTR_DAT_04caa160;
  if (0 < *(int *)(param_1 + 0x84)) {
    if (lVar6 == 0) goto LAB_023239f0;
    iVar13 = 0;
    do {
      uVar8 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                        (lVar6,iVar13,*(undefined8 *)puVar4);
      if ((uVar8 & 1) == 0) {
        if (lVar7 == 0) goto LAB_023239f0;
        lVar9 = *(long *)(lVar7 + 0x10);
        lVar10 = *(long *)puVar2;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_023239f0;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = iVar13;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar7,iVar13,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                    );
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(param_1 + 0x84));
  }
  if (lVar7 != 0) {
    iVar13 = *(int *)(lVar7 + 0x18);
    if (param_2 <= *(int *)(lVar7 + 0x18)) {
      iVar13 = param_2;
    }
    Dino_BusSand_App_Meta_BattleRoyaleRules__Shuffle_int__26ec074
              (lVar7,param_4,*(undefined8 *)PTR_DAT_04cae210);
    lVar6 = *(long *)(param_1 + 0xa0);
    if (lVar6 != 0) {
      lVar9 = *(long *)PTR_DAT_04caa200;
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = System_Math__Max_4830fc8(0,iVar13,0);
      lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Collections_Generic_List_int____ctor_3a2b854
                (lVar6,uVar5,*(undefined8 *)PTR_DAT_04caa188);
      puVar3 = PTR_DAT_04cae230;
      puVar2 = PTR_DAT_04caa160;
      if (iVar13 < 1) {
        return lVar6;
      }
      iVar12 = 0;
      while (uVar5 = System_Collections_Generic_List_int___get_Item_3a2bd74
                               (lVar7,iVar12,*(undefined8 *)puVar3), lVar6 != 0) {
        lVar9 = *(long *)(lVar6 + 0x10);
        lVar10 = *(long *)puVar2;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar9 == 0) break;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar6,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
          ;
        }
        lVar9 = *(long *)(param_1 + 0x90);
        uVar5 = System_Collections_Generic_List_int___get_Item_3a2bd74
                          (lVar7,iVar12,*(undefined8 *)puVar3);
        if (lVar9 == 0) break;
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)puVar2;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) break;
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar9,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
          ;
        }
        lVar9 = *(long *)(param_1 + 0xa0);
        uVar5 = System_Collections_Generic_List_int___get_Item_3a2bd74
                          (lVar7,iVar12,*(undefined8 *)puVar3);
        if (lVar9 == 0) break;
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)puVar2;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) break;
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar9,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
          ;
        }
        iVar12 = iVar12 + 1;
        if (iVar13 == iVar12) {
          return lVar6;
        }
      }
    }
  }
LAB_023239f0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

