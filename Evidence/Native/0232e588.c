/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$DayReward
System_Collections_Generic_List_int____o* Dino_BusSand_App_Meta_DailyChallengeModel__DayReward (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$DayReward
   System_Collections_Generic_List_int____o* Dino_BusSand_App_Meta_DailyChallengeModel__DayReward
   (const MethodInfo* method); */

long Dino_BusSand_App_Meta_DailyChallengeModel__DayReward_222e588(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04caec70;
                    /* catch() { ... } // from try @ 0232e578 with catch @ 0232e594 */
                    /* try { // try from 0232e598 to 0242e59f has its CatchHandler @ 0232e5a8 */
                    /* try { // try from 0232e5a0 to 0242e5ab has its CatchHandler @ 0232e200 */
  if ((bRam0000000004f9be54 & 1) == 0) {
                    /* catch() { ... } // from try @ 0232e598 with catch @ 0232e5a8 */
    FUN_02132f7c(PTR_DAT_04caec70);
    bRam0000000004f9be54 = 1;
  }
  lVar6 = FUN_02133068(*(undefined8 *)puVar2,2);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(int *)(lVar6 + 0x18) == 0) ||
     (*(undefined4 *)(lVar6 + 0x20) = 0x3e9, *(int *)(lVar6 + 0x18) == 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  *(undefined4 *)(lVar6 + 0x24) = 0x32;
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
  if (lVar6 != 0) {
    if (1 < *(int *)(lVar6 + 0x18)) {
      uVar9 = 1;
      do {
        lVar5 = FUN_02133068(*(undefined8 *)puVar2,2);
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 <= uVar9 - 1) {
LAB_0232de20:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        if (lVar5 == 0) goto LAB_0232de24;
        if (((*(int *)(lVar5 + 0x18) == 0) ||
            (*(undefined4 *)(lVar5 + 0x20) =
                  *(undefined4 *)(lVar6 + (long)(int)(uVar9 - 1) * 4 + 0x20), uVar1 <= uVar9)) ||
           (*(int *)(lVar5 + 0x18) == 1)) goto LAB_0232de20;
        *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)(lVar6 + (long)(int)uVar9 * 4 + 0x20);
        if (lVar4 == 0) goto LAB_0232de24;
        lVar7 = *(long *)(lVar4 + 0x10);
        lVar8 = *(long *)puVar3;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_0232de24;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar4,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        uVar9 = uVar9 + 2;
      } while ((int)uVar9 < *(int *)(lVar6 + 0x18));
    }
    return lVar4;
  }
LAB_0232de24:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

