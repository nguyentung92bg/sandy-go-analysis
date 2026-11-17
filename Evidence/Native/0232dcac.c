/* IL2CPP: Dino.BusSand.App.Meta.Ev07Util$$Reward
System_Collections_Generic_List_int____o* Dino_BusSand_App_Meta_Ev07Util__Reward (System_Int32_array* itemCountPairs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Ev07Util$$Reward
   System_Collections_Generic_List_int____o* Dino_BusSand_App_Meta_Ev07Util__Reward
   (System_Int32_array* itemCountPairs, const MethodInfo* method); */

long Dino_BusSand_App_Meta_Ev07Util__Reward_222dcac(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  puVar3 = PTR_DAT_04cb2ed8;
  puVar2 = PTR_DAT_04cb2ed0;
  if ((bRam0000000004f9be4d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb2ee0);
    FUN_02132f7c(PTR_DAT_04cb2ed8);
    FUN_02132f7c(PTR_DAT_04cb2ed0);
    bRam0000000004f9be4d = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar4,*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_04cb2ee0;
  puVar2 = PTR_DAT_04caec70;
  if (param_1 != 0) {
    if (1 < *(int *)(param_1 + 0x18)) {
      uVar8 = 1;
      do {
        lVar5 = FUN_02133068(*(undefined8 *)puVar2,2);
        uVar1 = *(uint *)(param_1 + 0x18);
        if (uVar1 <= uVar8 - 1) {
LAB_0232de20:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        if (lVar5 == 0) goto LAB_0232de24;
        if (((*(int *)(lVar5 + 0x18) == 0) ||
            (*(undefined4 *)(lVar5 + 0x20) =
                  *(undefined4 *)(param_1 + (long)(int)(uVar8 - 1) * 4 + 0x20), uVar1 <= uVar8)) ||
           (*(int *)(lVar5 + 0x18) == 1)) goto LAB_0232de20;
        *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)(param_1 + (long)(int)uVar8 * 4 + 0x20);
        if (lVar4 == 0) goto LAB_0232de24;
        lVar6 = *(long *)(lVar4 + 0x10);
        lVar7 = *(long *)puVar3;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_0232de24;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar4,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        uVar8 = uVar8 + 2;
      } while ((int)uVar8 < *(int *)(param_1 + 0x18));
    }
    return lVar4;
  }
LAB_0232de24:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

