/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$CreateGroup
void Dino_BusSand_App_Meta_BattleRoyaleRules__CreateGroup (Dino_BusSand_App_Meta_BattleRoyaleData_o* d, int32_t maxCount, int32_t minHaveHead, int32_t maxHaveHead, System_Collections_Generic_List_int__o* headIds, System_Random_o* rng, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$CreateGroup
   void Dino_BusSand_App_Meta_BattleRoyaleRules__CreateGroup
   (Dino_BusSand_App_Meta_BattleRoyaleData_o* d, int32_t maxCount, int32_t minHaveHead, int32_t
   maxHaveHead, System_Collections_Generic_List_int__o* headIds, System_Random_o* rng, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleRules__CreateGroup_222257c
               (long param_1,int param_2,undefined4 param_3,int param_4,long param_5,long *param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  
  if ((bRam0000000004f9bdef & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadef8);
    FUN_02132f7c(PTR_DAT_04cae210);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cae238);
    FUN_02132f7c(PTR_DAT_04cae240);
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa188);
    FUN_02132f7c(PTR_DAT_04cb2af0);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    bRam0000000004f9bdef = 1;
  }
  if ((param_1 != 0) &&
     (Dino_BusSand_App_Meta_BattleRoyaleData__EnsureLists_221f420(param_1),
     puVar4 = PTR_DAT_04cae210, puVar3 = PTR_DAT_04caa1c8, puVar2 = PTR_DAT_04caa188,
     param_6 != (long *)0x0)) {
    iVar5 = (**(code **)(*param_6 + 0x198))
                      (param_6,param_3,param_4 + 1,*(undefined8 *)(*param_6 + 0x1a0));
    if (param_2 <= iVar5) {
      iVar5 = param_2;
    }
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    if (param_5 == 0) {
      System_Collections_Generic_List_int____ctor_3a2b7dc(lVar7,*(undefined8 *)PTR_DAT_04cad6e8);
    }
    else {
      System_Collections_Generic_List_int____ctor_3a2b918
                (lVar7,param_5,*(undefined8 *)PTR_DAT_04cb2af0);
    }
    Dino_BusSand_App_Meta_BattleRoyaleRules__Shuffle_int__26ec074
              (lVar7,param_6,*(undefined8 *)puVar4);
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Collections_Generic_List_int____ctor_3a2b854(lVar8,param_2,*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_04caa160;
    if (0 < param_2) {
      if (lVar8 == 0) goto LAB_02322904;
      iVar14 = 0;
      lVar10 = *(long *)PTR_DAT_04caa160;
      do {
        lVar12 = *(long *)(lVar8 + 0x10);
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_02322904;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(int *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = iVar14;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar8,iVar14,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                    );
          lVar10 = *(long *)puVar2;
        }
        iVar14 = iVar14 + 1;
      } while (param_2 != iVar14);
    }
    Dino_BusSand_App_Meta_BattleRoyaleRules__Shuffle_int__26ec074
              (lVar8,param_6,*(undefined8 *)puVar4);
    lVar10 = *(long *)(param_1 + 0x88);
    *(int *)(param_1 + 0x84) = param_2;
    *(undefined1 *)(param_1 + 0x80) = 1;
    if (lVar10 != 0) {
      iVar14 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (0 < iVar14) {
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar10 + 0x10),0,iVar14,0);
      }
      lVar10 = *(long *)(param_1 + 0x90);
      if (lVar10 != 0) {
        lVar12 = *(long *)(param_1 + 0xa0);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar12 != 0) {
          iVar14 = *(int *)(lVar12 + 0x1c);
          *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
          *(undefined4 *)(lVar12 + 0x18) = 0;
          *(int *)(lVar12 + 0x1c) = iVar14 + 1;
          puVar4 = PTR_DAT_04cae238;
          puVar3 = PTR_DAT_04cae230;
          puVar2 = PTR_DAT_04cadef8;
          if (0 < iVar5) {
            iVar14 = 0;
            do {
              lVar12 = *(long *)(param_1 + 0x88);
              lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
              *(undefined4 *)(lVar10 + 0x14) = 0xffffffff;
              System_Object___ctor_4870e5c(lVar10,0);
              if (lVar8 == 0) goto LAB_02322904;
              uVar6 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                (lVar8,iVar14,*(undefined8 *)puVar3);
              *(undefined4 *)(lVar10 + 0x10) = uVar6;
              if (lVar7 == 0) goto LAB_02322904;
              if (iVar14 < *(int *)(lVar7 + 0x18)) {
                uVar6 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                  (lVar7,iVar14,*(undefined8 *)puVar3);
              }
              else {
                uVar6 = 0xffffffff;
              }
              *(undefined4 *)(lVar10 + 0x14) = uVar6;
              if (lVar12 == 0) goto LAB_02322904;
              lVar11 = *(long *)(lVar12 + 0x10);
              lVar13 = *(long *)puVar4;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_02322904;
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                *plVar9 = lVar10;
                thunk_FUN_02134474(plVar9,lVar10);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar12,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              iVar14 = iVar14 + 1;
            } while (iVar5 != iVar14);
          }
          return;
        }
      }
    }
  }
LAB_02322904:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

