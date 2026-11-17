/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$SplitOuterComma
System_Collections_Generic_List_string__o* Dino_BusSand_App_Meta_RacingRobotParser__SplitOuterComma (System_String_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$SplitOuterComma
   System_Collections_Generic_List_string__o*
   Dino_BusSand_App_Meta_RacingRobotParser__SplitOuterComma (System_String_o* s, const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_RacingRobotParser__SplitOuterComma_225e8ac(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  puVar3 = PTR_DAT_04cab748;
  puVar2 = PTR_DAT_04cab740;
  if ((bRam0000000004f9c02c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04cab748);
    bRam0000000004f9c02c = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar5,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_04cab718;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) < 1) {
      iVar10 = 0;
    }
    else {
      iVar9 = 0;
      iVar10 = 0;
      iVar11 = 0;
      do {
        uVar4 = System_String__get_Chars_46ccb24(param_1,iVar9,0);
        if (uVar4 < 0x2c) {
          if (uVar4 == 0x28) {
LAB_0235e990:
            iVar11 = iVar11 + 1;
          }
          else if (uVar4 == 0x29) goto LAB_0235e988;
        }
        else if (uVar4 == 0x2c) {
          if (iVar11 == 0) {
            uVar6 = System_String__Substring_46d4848(param_1,iVar10,iVar9 - iVar10,0);
            if (lVar5 == 0) goto LAB_0235eab0;
            lVar7 = *(long *)(lVar5 + 0x10);
            lVar8 = *(long *)puVar2;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_0235eab0;
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar5,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            iVar11 = 0;
            iVar10 = iVar9 + 1;
          }
        }
        else if (uVar4 == 0x5d) {
LAB_0235e988:
          iVar11 = iVar11 + -1;
        }
        else if (uVar4 == 0x5b) goto LAB_0235e990;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x10));
    }
    uVar6 = System_String__Substring_46d6a94(param_1,iVar10,0);
    if (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 0x10);
      lVar8 = *(long *)puVar2;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        return lVar5;
      }
    }
  }
LAB_0235eab0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

