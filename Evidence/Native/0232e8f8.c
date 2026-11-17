/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$ClaimMilestone
System_Collections_Generic_List_int____o* Dino_BusSand_App_Meta_DailyChallengeModel__ClaimMilestone (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int32_t index, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$ClaimMilestone
   System_Collections_Generic_List_int____o*
   Dino_BusSand_App_Meta_DailyChallengeModel__ClaimMilestone
   (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int32_t index, int64_t nowMs, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_DailyChallengeModel__ClaimMilestone_222e8f8
               (long param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  if ((bRam0000000004f9be58 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf808);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cb2ed8);
    FUN_02132f7c(PTR_DAT_04cb2ed0);
    bRam0000000004f9be58 = 1;
  }
  iVar4 = Dino_BusSand_App_Meta_DailyChallengeModel__MilestoneState_222e7c4(param_1,param_2,param_3)
  ;
  puVar2 = PTR_DAT_04cb2ed8;
  if (iVar4 != 1) {
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2ed0);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar5,*(undefined8 *)puVar2);
    return lVar5;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x28), lVar5 != 0)) {
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar10 = *(long *)PTR_DAT_04caa160;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar11 = *(uint *)(lVar5 + 0x18);
      if (uVar11 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar11 + 1;
        *(int *)(lVar8 + (long)(int)uVar11 * 4 + 0x20) = param_2;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                  (lVar5,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      if (*(int *)(*(long *)PTR_DAT_04caf808 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if ((bRam0000000004f9be55 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caec70);
        FUN_02132f7c(PTR_DAT_04cb2ed8);
        FUN_02132f7c(PTR_DAT_04cb2ed0);
        FUN_02132f7c(PTR_DAT_04cb2ef0);
        FUN_02132f7c(PTR_DAT_04cb2ef8);
        FUN_02132f7c(PTR_DAT_04cb2f00);
        FUN_02132f7c(PTR_DAT_04cb2f08);
        bRam0000000004f9be55 = 1;
      }
      if (param_2 < 2) {
        if (param_2 == 0) {
          lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,4);
          puVar7 = (undefined8 *)PTR_DAT_04cb2f08;
        }
        else {
          if (param_2 != 1) {
LAB_0232e6d4:
            lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2ed0);
            System_Collections_Generic_List_object____ctor_3a8138c
                      (lVar5,*(undefined8 *)PTR_DAT_04cb2ed8);
            return lVar5;
          }
          lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,4);
          puVar7 = (undefined8 *)PTR_DAT_04cb2f00;
        }
      }
      else if (param_2 == 2) {
        lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,6);
        puVar7 = (undefined8 *)PTR_DAT_04cb2ef0;
      }
      else {
        if (param_2 != 3) goto LAB_0232e6d4;
        lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,4);
        puVar7 = (undefined8 *)PTR_DAT_04cb2ef8;
      }
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc(lVar5,*puVar7,0);
      puVar3 = PTR_DAT_04cb2ed8;
      puVar2 = PTR_DAT_04cb2ed0;
      if ((bRam0000000004f9be4d & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caec70);
        FUN_02132f7c(PTR_DAT_04cb2ee0);
        FUN_02132f7c(PTR_DAT_04cb2ed8);
        FUN_02132f7c(PTR_DAT_04cb2ed0);
        bRam0000000004f9be4d = 1;
      }
      lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Collections_Generic_List_object____ctor_3a8138c(lVar8,*(undefined8 *)puVar3);
      puVar3 = PTR_DAT_04cb2ee0;
      puVar2 = PTR_DAT_04caec70;
      if (lVar5 != 0) {
        if (1 < *(int *)(lVar5 + 0x18)) {
          uVar11 = 1;
          do {
            lVar10 = FUN_02133068(*(undefined8 *)puVar2,2);
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 <= uVar11 - 1) {
LAB_0232de20:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            if (lVar10 == 0) goto LAB_0232de24;
            if (((*(int *)(lVar10 + 0x18) == 0) ||
                (*(undefined4 *)(lVar10 + 0x20) =
                      *(undefined4 *)(lVar5 + (long)(int)(uVar11 - 1) * 4 + 0x20), uVar1 <= uVar11))
               || (*(int *)(lVar10 + 0x18) == 1)) goto LAB_0232de20;
            *(undefined4 *)(lVar10 + 0x24) = *(undefined4 *)(lVar5 + (long)(int)uVar11 * 4 + 0x20);
            if (lVar8 == 0) goto LAB_0232de24;
            lVar6 = *(long *)(lVar8 + 0x10);
            lVar9 = *(long *)puVar3;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar6 == 0) goto LAB_0232de24;
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar10;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar8,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            uVar11 = uVar11 + 2;
          } while ((int)uVar11 < *(int *)(lVar5 + 0x18));
        }
        return lVar8;
      }
LAB_0232de24:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

