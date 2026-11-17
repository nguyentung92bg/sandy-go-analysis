/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$CalcRequiredSeconds
float Dino_BusSand_App_Meta_RacingRobotAgent__CalcRequiredSeconds (Dino_BusSand_App_Meta_RacingRobotAgent_o* __this, int32_t progress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$CalcRequiredSeconds
   float Dino_BusSand_App_Meta_RacingRobotAgent__CalcRequiredSeconds
   (Dino_BusSand_App_Meta_RacingRobotAgent_o* __this, int32_t progress, const MethodInfo* method);
    */

float Dino_BusSand_App_Meta_RacingRobotAgent__CalcRequiredSeconds_225eff8
                (long param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  float fVar11;
  double dStack_28;
  
  if ((bRam0000000004f9c032 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c032 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_0235f174:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x14) == 3) {
    return 3.4028235e+38;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (1 < iVar1 - 3U) {
    if (iVar1 != 2) {
                    /* try { // try from 0235f064 to 0245f10b has its CatchHandler @ 0235f064
                       catch() { ... } // from try @ 0235f064 with catch @ 0235f064
                       catch() { ... } // from try @ 0235f224 with catch @ 0235f064
                       catch() { ... } // from try @ 0235f25c with catch @ 0235f064
                       catch() { ... } // from try @ 0235f284 with catch @ 0235f064 */
      if (iVar1 != 1) {
        return 60.0;
      }
      lVar8 = *(long *)(param_1 + 0x48);
      if ((lVar8 != 0) && (lVar7 = *(long *)(lVar8 + 0x18), lVar7 != 0)) {
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)(lVar8 + 0x18);
        }
        uVar2 = System_Math__Min_4831118((int)lVar7 + -1,param_2,0);
        uVar3 = System_Math__Max_4830fc8(0,uVar2,0);
        if (uVar3 < *(uint *)(lVar8 + 0x18)) {
          return *(float *)(lVar8 + (long)(int)uVar3 * 4 + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      return *(float *)(param_1 + 0x34);
    }
    uVar4 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(param_1 + 0x40),0);
    if ((uVar4 & 1) != 0) {
      plVar5 = *(long **)(param_1 + 0x88);
      if (plVar5 != (long *)0x0) {
        fVar11 = *(float *)(param_1 + 0x38);
        dVar10 = (double)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
        return fVar11 + (*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x38)) * (float)dVar10;
                    /* try { // try from 0235f10c to 0245f10f has its CatchHandler @ 0235f224 */
      }
      goto LAB_0235f174;
    }
  }
                    /* try { // try from 0235f110 to 0245f117 has its CatchHandler @ 0235f238 */
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = Dino_BusSand_App_Meta_RacingRobotAgent__SpeedVars_225f924(param_1,param_2);
                    /* try { // try from 0235f128 to 0245f12f has its CatchHandler @ 0235f230 */
  dStack_28 = 0.0;
  uVar4 = Dino_BusSand_App_Meta_YachtRacingExpr__TryEvaluate_2259218
                    (uVar9,uVar6,*(undefined8 *)(param_1 + 0x88),&dStack_28,0);
  fVar11 = (float)dStack_28;
  if ((uVar4 & 1) == 0) {
    fVar11 = 60.0;
  }
                    /* try { // try from 0235f154 to 0245f15f has its CatchHandler @ 0235f22c */
  return fVar11;
}

