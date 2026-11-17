/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotScore$$CalcStage1Score
float Dino_BusSand_App_Meta_RacingRobotScore__CalcStage1Score (Dino_BusSand_App_Meta_RacingRobotGlobalConfig_o* cfg, int32_t oneTimeClearLast10, float todayIapUsd, float playerAssets, int32_t levelProgress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotScore$$CalcStage1Score
   float Dino_BusSand_App_Meta_RacingRobotScore__CalcStage1Score
   (Dino_BusSand_App_Meta_RacingRobotGlobalConfig_o* cfg, int32_t oneTimeClearLast10, float
   todayIapUsd, float playerAssets, int32_t levelProgress, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_RacingRobotScore__CalcStage1Score_2265760
          (float param_1,float param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  
  if ((bRam0000000004f9c055 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c055 = 1;
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar2 = *(int *)(param_3 + 0x10);
  iVar4 = *(int *)(param_3 + 0x14);
  iVar3 = *(int *)(param_3 + 0x18);
  iVar5 = *(int *)(param_3 + 0x1c);
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar1 = iVar4 + iVar2 + iVar3 + iVar5;
                    /* try { // try from 023657e8 to 0246582f has its CatchHandler @ 023657e8
                       catch() { ... } // from try @ 023657e8 with catch @ 023657e8
                       catch() { ... } // from try @ 02365840 with catch @ 023657e8
                       catch() { ... } // from try @ 02365880 with catch @ 023657e8
                       catch() { ... } // from try @ 02365968 with catch @ 023657e8 */
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  fVar11 = (float)iVar1;
  fVar7 = (float)System_Math__Max_4830ff4(100.0 - param_1,0x3f800000,0);
                    /* try { // try from 02365830 to 0246583f has its CatchHandler @ 02365850 */
  uVar8 = System_Math__Pow_48317a0((double)param_2,0x3fe0000000000000,0);
  uVar6 = _UNK_00e69cb8;
                    /* try { // try from 02365840 to 02465867 has its CatchHandler @ 023657e8 */
  dVar9 = (double)System_Math__Min_48310e8(uVar8,_UNK_00e69cb8,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02365830 with catch @ 02365850
                        */
  uVar8 = System_Math__Pow_48317a0((double)param_5,0x3fe0000000000000,0);
                    /* try { // try from 02365868 to 0246587f has its CatchHandler @ 02365960 */
  dVar10 = (double)System_Math__Min_48310e8(uVar8,uVar6,0);
                    /* try { // try from 02365880 to 0246594f has its CatchHandler @ 023657e8 */
  System_Math__Min_4831144
            (0x42c80000,
             ((float)iVar2 / fVar11) * 10.0 * (float)param_4 + ((float)iVar4 / fVar11) * fVar7 +
             ((float)iVar3 / fVar11) * (float)dVar9 + ((float)iVar5 / fVar11) * (float)dVar10,0);
  return 0;
}

