/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$Complete
System_Collections_Generic_List_int____o* Dino_BusSand_App_Meta_DailyChallengeModel__Complete (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$Complete
   System_Collections_Generic_List_int____o* Dino_BusSand_App_Meta_DailyChallengeModel__Complete
   (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int64_t nowMs, const MethodInfo* method);
    */

long Dino_BusSand_App_Meta_DailyChallengeModel__Complete_222e2a0(long param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  if ((bRam0000000004f9be53 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf808);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04cb2ed8);
    FUN_02132f7c(PTR_DAT_04cb2ed0);
    bRam0000000004f9be53 = 1;
  }
  lVar7 = SUB168(SEXT816((long)(86399999 - param_2)) * SEXT816(-0x636ba875fd33dc87),8);
  uVar1 = param_2 / 86400000;
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar1 = (lVar7 >> 0x19) - (lVar7 >> 0x3f);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x10) == uVar1) {
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2ed0);
      System_Collections_Generic_List_object____ctor_3a8138c(lVar7,*(undefined8 *)PTR_DAT_04cb2ed8);
      return lVar7;
    }
    Dino_BusSand_App_Meta_DailyChallengeModel__EnsureMonth_222e490(param_1,param_2);
    Dino_BusSand_App_Meta_Ev07Util__CivilFromDay_222d994
              (uVar1,&stack0xffffffffffffffd8,&stack0xffffffffffffffd4,&stack0xffffffffffffffdc);
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar7 == 0)) goto LAB_0232e48c;
                    /* try { // try from 0232e3e0 to 0242e3e7 has its CatchHandler @ 0232e54c */
    uVar5 = System_Collections_Generic_List_int___Contains_3a2c3ec
                      (lVar7,0,*(undefined8 *)PTR_DAT_04cad860);
    lVar7 = *(long *)(param_1 + 0x10);
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 0232e3f4 to 0242e3fb has its CatchHandler @ 0232e528 */
      if ((lVar7 == 0) || (lVar6 = *(long *)(lVar7 + 0x20), lVar6 == 0)) goto LAB_0232e48c;
      lVar9 = *(long *)(lVar6 + 0x10);
                    /* try { // try from 0232e410 to 0242e433 has its CatchHandler @ 0232e558 */
      lVar10 = *(long *)PTR_DAT_04caa160;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_0232e48c;
      uVar11 = *(uint *)(lVar6 + 0x18);
      if (uVar11 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar11 + 1;
        *(undefined4 *)(lVar9 + (long)(int)uVar11 * 4 + 0x20) = 0;
                    /* try { // try from 0232e440 to 0242e467 has its CatchHandler @ 0232e554 */
        goto LAB_0232e460;
      }
      System_Collections_Generic_List_int___AddWithResize_3a2c06c
                (lVar6,0,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      lVar7 = *(long *)(param_1 + 0x10);
    }
    if (lVar7 != 0) {
LAB_0232e460:
      puVar3 = PTR_DAT_04caf808;
                    /* try { // try from 0232e468 to 0242e473 has its CatchHandler @ 0232e534 */
      *(ulong *)(lVar7 + 0x10) = uVar1;
                    /* try { // try from 0232e474 to 0242e483 has its CatchHandler @ 0232e548 */
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar3 = PTR_DAT_04caec70;
                    /* try { // try from 0232e484 to 0242e493 has its CatchHandler @ 0232e530 */
      if ((bRam0000000004f9be54 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caec70);
        bRam0000000004f9be54 = 1;
      }
      lVar7 = FUN_02133068(*(undefined8 *)puVar3,2);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((*(int *)(lVar7 + 0x18) == 0) ||
         (*(undefined4 *)(lVar7 + 0x20) = 0x3e9, *(int *)(lVar7 + 0x18) == 1)) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      *(undefined4 *)(lVar7 + 0x24) = 0x32;
      puVar4 = PTR_DAT_04cb2ed8;
      puVar3 = PTR_DAT_04cb2ed0;
      if ((bRam0000000004f9be4d & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caec70);
        FUN_02132f7c(PTR_DAT_04cb2ee0);
        FUN_02132f7c(PTR_DAT_04cb2ed8);
        FUN_02132f7c(PTR_DAT_04cb2ed0);
        bRam0000000004f9be4d = 1;
      }
      lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Collections_Generic_List_object____ctor_3a8138c(lVar6,*(undefined8 *)puVar4);
      puVar4 = PTR_DAT_04cb2ee0;
      puVar3 = PTR_DAT_04caec70;
      if (lVar7 != 0) {
        if (1 < *(int *)(lVar7 + 0x18)) {
          uVar11 = 1;
          do {
            lVar9 = FUN_02133068(*(undefined8 *)puVar3,2);
            uVar2 = *(uint *)(lVar7 + 0x18);
            if (uVar2 <= uVar11 - 1) {
LAB_0232de20:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            if (lVar9 == 0) goto LAB_0232de24;
            if (((*(int *)(lVar9 + 0x18) == 0) ||
                (*(undefined4 *)(lVar9 + 0x20) =
                      *(undefined4 *)(lVar7 + (long)(int)(uVar11 - 1) * 4 + 0x20), uVar2 <= uVar11))
               || (*(int *)(lVar9 + 0x18) == 1)) goto LAB_0232de20;
            *(undefined4 *)(lVar9 + 0x24) = *(undefined4 *)(lVar7 + (long)(int)uVar11 * 4 + 0x20);
            if (lVar6 == 0) goto LAB_0232de24;
            lVar10 = *(long *)(lVar6 + 0x10);
            lVar8 = *(long *)puVar4;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_0232de24;
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar6,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            uVar11 = uVar11 + 2;
          } while ((int)uVar11 < *(int *)(lVar7 + 0x18));
        }
        return lVar6;
      }
LAB_0232de24:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
LAB_0232e48c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

