/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$ClaimResult
System_Collections_Generic_List_int____o* Dino_BusSand_App_Meta_WeeklyCupModel__ClaimResult (Dino_BusSand_App_Meta_WeeklyCupModel_o* __this, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$ClaimResult
   System_Collections_Generic_List_int____o* Dino_BusSand_App_Meta_WeeklyCupModel__ClaimResult
   (Dino_BusSand_App_Meta_WeeklyCupModel_o* __this, int64_t nowMs, const MethodInfo* method); */

long Dino_BusSand_App_Meta_WeeklyCupModel__ClaimResult_2230df4(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  
  if ((bRam0000000004f9be7b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2ed8);
    FUN_02132f7c(PTR_DAT_04cb3108);
    FUN_02132f7c(PTR_DAT_04cb2ed0);
    FUN_02132f7c(PTR_DAT_04cb3110);
    bRam0000000004f9be7b = 1;
  }
  puVar2 = PTR_DAT_04cb2ed8;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
LAB_02330f18:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (((*(char *)(lVar10 + 0x18) == '\0') || (param_2 < *(long *)(lVar10 + 0x10) + 0x240c8400)) ||
     (*(char *)(lVar10 + 0x30) != '\0')) {
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2ed0);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar10,*(undefined8 *)puVar2);
    return lVar10;
  }
  iVar4 = Dino_BusSand_App_Meta_WeeklyCupModel__PlayerRank_2230c7c(param_1);
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) goto LAB_02330f18;
  *(int *)(lVar10 + 0x34) = iVar4;
  puVar2 = PTR_DAT_04cb3110;
  *(undefined1 *)(lVar10 + 0x18) = 0;
  *(undefined1 *)(lVar10 + 0x30) = 1;
  uVar7 = *(undefined8 *)puVar2;
  *(undefined4 *)(lVar10 + 0x1c) = 0;
  uVar7 = thunk_FUN_0216e89c(uVar7);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar7,*(undefined8 *)PTR_DAT_04cb3108);
  *(undefined8 *)(lVar10 + 0x28) = uVar7;
  thunk_FUN_02134474((undefined8 *)(lVar10 + 0x28),uVar7);
  if ((bRam0000000004f9be7a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb2ed8);
    FUN_02132f7c(PTR_DAT_04cb2ed0);
    FUN_02132f7c(PTR_DAT_04cb3138);
    bRam0000000004f9be7a = 1;
  }
  if (iVar4 == 3) {
    lVar10 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,2);
    if (lVar10 == 0) {
LAB_023316a0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((*(int *)(lVar10 + 0x18) == 0) ||
       (*(undefined4 *)(lVar10 + 0x20) = 0x3e9, *(int *)(lVar10 + 0x18) == 1)) {
LAB_0233169c:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    uVar8 = 400;
  }
  else if (iVar4 == 2) {
    lVar10 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,2);
    if (lVar10 == 0) goto LAB_023316a0;
    if ((*(int *)(lVar10 + 0x18) == 0) ||
       (*(undefined4 *)(lVar10 + 0x20) = 0x3e9, *(int *)(lVar10 + 0x18) == 1)) goto LAB_0233169c;
    uVar8 = 600;
  }
  else {
    if (iVar4 == 1) {
      lVar10 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,4);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
                (lVar10,*(undefined8 *)PTR_DAT_04cb3138,0);
      goto Dino_BusSand_App_Meta_Ev07Util__Reward_222dcac;
    }
    if (iVar4 - 0xbU < 0xfffffff9) {
      lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2ed0);
      System_Collections_Generic_List_object____ctor_3a8138c(lVar10,*(undefined8 *)PTR_DAT_04cb2ed8)
      ;
      return lVar10;
    }
    lVar10 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,2);
    if (lVar10 == 0) goto LAB_023316a0;
    if ((*(int *)(lVar10 + 0x18) == 0) ||
       (*(undefined4 *)(lVar10 + 0x20) = 0x3e9, *(int *)(lVar10 + 0x18) == 1)) goto LAB_0233169c;
    uVar8 = 100;
  }
  *(undefined4 *)(lVar10 + 0x24) = uVar8;
Dino_BusSand_App_Meta_Ev07Util__Reward_222dcac:
  puVar3 = PTR_DAT_04cb2ed8;
  puVar2 = PTR_DAT_04cb2ed0;
  if ((bRam0000000004f9be4d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb2ee0);
    FUN_02132f7c(PTR_DAT_04cb2ed8);
    FUN_02132f7c(PTR_DAT_04cb2ed0);
    bRam0000000004f9be4d = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar5,*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_04cb2ee0;
  puVar2 = PTR_DAT_04caec70;
  if (lVar10 != 0) {
    if (1 < *(int *)(lVar10 + 0x18)) {
      uVar12 = 1;
      do {
        lVar6 = FUN_02133068(*(undefined8 *)puVar2,2);
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 <= uVar12 - 1) {
LAB_0232de20:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        if (lVar6 == 0) goto LAB_0232de24;
        if (((*(int *)(lVar6 + 0x18) == 0) ||
            (*(undefined4 *)(lVar6 + 0x20) =
                  *(undefined4 *)(lVar10 + (long)(int)(uVar12 - 1) * 4 + 0x20), uVar1 <= uVar12)) ||
           (*(int *)(lVar6 + 0x18) == 1)) goto LAB_0232de20;
        *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(lVar10 + (long)(int)uVar12 * 4 + 0x20);
        if (lVar5 == 0) goto LAB_0232de24;
        lVar9 = *(long *)(lVar5 + 0x10);
        lVar11 = *(long *)puVar3;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_0232de24;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
          ;
        }
        uVar12 = uVar12 + 2;
      } while ((int)uVar12 < *(int *)(lVar10 + 0x18));
    }
    return lVar5;
  }
LAB_0232de24:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

