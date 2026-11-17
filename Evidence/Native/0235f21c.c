/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$AdvanceChase
void Dino_BusSand_App_Meta_RacingRobotAgent__AdvanceChase (Dino_BusSand_App_Meta_RacingRobotAgent_o* __this, int32_t playerProgress, float sessionElapsed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$AdvanceChase
   void Dino_BusSand_App_Meta_RacingRobotAgent__AdvanceChase
   (Dino_BusSand_App_Meta_RacingRobotAgent_o* __this, int32_t playerProgress, float sessionElapsed,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotAgent__AdvanceChase_225f21c
               (undefined4 param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  double dStack_58;
  
                    /* try { // try from 0235f220 to 0245f223 has its CatchHandler @ 0235f238 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0235f10c with catch @ 0235f224
                       try { // try from 0235f224 to 0245f257 has its CatchHandler @ 0235f064 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0235f1c8 with catch @ 0235f228
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0235f154 with catch @ 0235f22c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0235f128 with catch @ 0235f230
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0235f1e0 with catch @ 0235f234
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0235f110 with catch @ 0235f238
                       catch(type#1 @ 049bb748) { ... } // from try @ 0235f220 with catch @ 0235f238
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0235f180 with catch @ 0235f23c
                        */
  if ((bRam0000000004f9c030 & 1) == 0) {
                    /* try { // try from 0235f258 to 0245f25b has its CatchHandler @ 0235f278 */
    FUN_02132f7c(PTR_DAT_04cb4388);
                    /* try { // try from 0235f25c to 0245f27b has its CatchHandler @ 0235f064 */
    FUN_02132f7c(PTR_DAT_04cb4380);
    FUN_02132f7c(PTR_DAT_04cb4378);
                    /* catch() { ... } // from try @ 0235f258 with catch @ 0235f278 */
                    /* try { // try from 0235f27c to 0245f283 has its CatchHandler @ 0235f28c */
    FUN_02132f7c(PTR_DAT_04caa200);
                    /* try { // try from 0235f284 to 0245f28f has its CatchHandler @ 0235f064 */
    FUN_02132f7c(PTR_DAT_04cb4390);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0235f27c with catch @ 0235f28c
                        */
    bRam0000000004f9c030 = 1;
  }
  iVar7 = *(int *)(param_2 + 0x98);
  if (iVar7 < 0) {
    *(int *)(param_2 + 0x98) = param_3;
  }
  else {
    *(int *)(param_2 + 0x98) = param_3;
    if (iVar7 == param_3) {
      return;
    }
  }
  if (*(int *)(param_2 + 0x50) == 1) {
    fVar12 = *(float *)(param_2 + 0x54);
    fVar13 = *(float *)(param_2 + 0x58);
  }
  else {
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4378);
    System_Collections_Generic_Dictionary_object__double____ctor_34a5244
              (lVar9,*(undefined8 *)PTR_DAT_04cb4380);
    if (lVar9 == 0) goto LAB_0235f4e0;
    System_Collections_Generic_Dictionary_object__double___Add_34a5fbc
              ((double)*(float *)(param_2 + 0x1c),lVar9,*(undefined8 *)PTR_DAT_04cb4390,
               *(undefined8 *)PTR_DAT_04cb4388);
    dStack_58 = 0.0;
    uVar10 = Dino_BusSand_App_Meta_YachtRacingExpr__TryEvaluate_2259218
                       (*(undefined8 *)(param_2 + 0x60),lVar9,*(undefined8 *)(param_2 + 0x88),
                        &dStack_58,0);
    fVar12 = (float)dStack_58;
    dStack_58 = 0.0;
    if ((uVar10 & 1) == 0) {
      fVar12 = 0.0;
    }
    uVar10 = Dino_BusSand_App_Meta_YachtRacingExpr__TryEvaluate_2259218
                       (*(undefined8 *)(param_2 + 0x68),lVar9,*(undefined8 *)(param_2 + 0x88),
                        &dStack_58,0);
    fVar13 = (float)dStack_58;
    if ((uVar10 & 1) == 0) {
      fVar13 = 0.0;
    }
  }
  puVar3 = PTR_DAT_04caa200;
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar7 = -0x80000000;
  if ((float)(int)fVar12 != INFINITY) {
    iVar7 = (int)fVar12;
  }
  iVar4 = System_Math__Max_4830fc8(0,iVar7 + param_3,0);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  iVar7 = -0x80000000;
  if ((float)(int)fVar13 != INFINITY) {
    iVar7 = (int)fVar13;
  }
  uVar5 = System_Math__Min_4831118(uVar6,iVar7 + param_3,0);
  uVar6 = System_Math__Min_4831118(uVar6,uVar5,0);
  iVar7 = System_Math__Max_4830fc8(0,uVar6,0);
  if (iVar7 <= iVar4) {
    iVar4 = iVar7;
  }
  plVar11 = *(long **)(param_2 + 0x88);
  if (*(int *)(param_2 + 0x70) == 1) {
    if (plVar11 == (long *)0x0) {
LAB_0235f4e0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar8 = (**(code **)(*plVar11 + 0x198))
                      (plVar11,iVar4,iVar7 + 1,*(undefined8 *)(*plVar11 + 0x1a0));
    iVar2 = *(int *)(param_2 + 0x9c);
    iVar1 = -(uint)(iVar8 < iVar2);
    if (iVar2 < iVar8) {
      iVar1 = 1;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = System_Math__Min_4831118(iVar7,iVar1 + iVar2,0);
    iVar7 = System_Math__Max_4830fc8(iVar4,uVar6,0);
  }
  else {
    if (plVar11 == (long *)0x0) goto LAB_0235f4e0;
    iVar7 = (**(code **)(*plVar11 + 0x198))
                      (plVar11,iVar4,iVar7 + 1,*(undefined8 *)(*plVar11 + 0x1a0));
  }
  if ((*(int *)(param_2 + 0x80) < 1) ||
     (*(int *)(param_2 + 0x9c) < *(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x80))) {
    if (iVar7 != *(int *)(param_2 + 0x9c)) {
      *(undefined4 *)(param_2 + 0xac) = param_1;
    }
                    /* try { // try from 0235f4bc to 0245f737 has its CatchHandler @ 0235f4bc
                       catch() { ... } // from try @ 0235f4bc with catch @ 0235f4bc
                       catch() { ... } // from try @ 0235f784 with catch @ 0235f4bc
                       catch() { ... } // from try @ 0235f7e4 with catch @ 0235f4bc
                       catch() { ... } // from try @ 0235f810 with catch @ 0235f4bc */
    *(int *)(param_2 + 0x9c) = iVar7;
  }
  return;
}

