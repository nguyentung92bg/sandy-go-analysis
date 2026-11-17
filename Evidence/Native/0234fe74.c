/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$SliderList
System_Collections_Generic_List_Vector3__o* Dino_BusSand_App_Meta_StreakRateFeature__SliderList (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s, int32_t addScore, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$SliderList
   System_Collections_Generic_List_Vector3__o* Dino_BusSand_App_Meta_StreakRateFeature__SliderList
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s,
   int32_t addScore, const MethodInfo* method); */

long Dino_BusSand_App_Meta_StreakRateFeature__SliderList_224fe74
               (undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  
  puVar3 = PTR_DAT_04cb3c10;
  puVar2 = PTR_DAT_04caa1d0;
                    /* try { // try from 0234fea0 to 0244fee3 has its CatchHandler @ 02350118 */
  if ((bRam0000000004f9bfba & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    bRam0000000004f9bfba = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_Vector3____ctor_3af944c(lVar5,*(undefined8 *)puVar3);
  if (param_2 != 0) {
                    /* try { // try from 0234fef8 to 0244ff2b has its CatchHandler @ 0235011c */
    lVar6 = Dino_BusSand_App_Meta_StreakRateFeature__NeedScores_224bf28(param_1,param_2);
    lVar7 = Dino_BusSand_App_Meta_StreakRateFeature__RewardIds_224bf94(param_1,param_2);
    if (lVar6 == 0) {
LAB_023500b4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(long *)(lVar6 + 0x18) != 0) {
      iVar15 = *(int *)(param_2 + 0x4c);
      lVar13 = (long)*(int *)(param_2 + 0x48);
      iVar4 = Dino_BusSand_App_Meta_StreakRateFeature__CurMaxScore_224c1d0(param_1,param_2);
      puVar2 = PTR_DAT_04caa170;
      if (lVar7 == 0) goto LAB_023500b4;
      uVar9 = *(undefined8 *)(lVar7 + 0x18);
                    /* try { // try from 0234ff44 to 0244ff4b has its CatchHandler @ 02350158 */
      if (lVar13 < (int)uVar9) {
        lVar11 = lVar13 << 0x20;
        iVar15 = iVar15 + param_3;
        do {
          iVar16 = iVar15 - iVar4;
          uVar12 = (uint)lVar13;
          if (iVar15 < iVar4) {
            if ((uint)uVar9 <= uVar12) {
LAB_023500b8:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            if (lVar5 != 0) {
              lVar6 = *(long *)(lVar5 + 0x10);
              iVar16 = *(int *)(lVar7 + (lVar11 >> 0x1e) + 0x20);
              lVar7 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    /* try { // try from 02350044 to 0245004b has its CatchHandler @ 02350140 */
              if (lVar6 != 0) {
                uVar12 = *(uint *)(lVar5 + 0x18);
                if (uVar12 < *(uint *)(lVar6 + 0x18)) {
                  lVar6 = lVar6 + (long)(int)uVar12 * 0xc;
                  *(uint *)(lVar5 + 0x18) = uVar12 + 1;
                  *(float *)(lVar6 + 0x20) = (float)iVar15;
                  *(float *)(lVar6 + 0x24) = (float)iVar4;
                  *(float *)(lVar6 + 0x28) = (float)iVar16;
                  return lVar5;
                }
                    /* try { // try from 02350084 to 0245008b has its CatchHandler @ 02350138 */
                System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                          (lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                return lVar5;
              }
            }
            goto LAB_023500b4;
          }
                    /* try { // try from 0234ff6c to 0244ffaf has its CatchHandler @ 023501d4 */
          if ((uint)uVar9 <= uVar12) goto LAB_023500b8;
          if (lVar5 == 0) goto LAB_023500b4;
          lVar8 = *(long *)(lVar5 + 0x10);
          iVar15 = *(int *)(lVar7 + 0x20 + lVar13 * 4);
          lVar10 = *(long *)puVar2;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_023500b4;
          fVar14 = (float)iVar4;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar1 * 0xc;
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(float *)(lVar8 + 0x20) = fVar14;
            *(float *)(lVar8 + 0x24) = fVar14;
            *(float *)(lVar8 + 0x28) = (float)iVar15;
          }
          else {
                    /* try { // try from 0234ffd8 to 0244ffdb has its CatchHandler @ 02350150 */
            System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                      (fVar14,fVar14,lVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          if ((int)(*(uint *)(lVar6 + 0x18) - 1) < (int)(uVar12 + 1)) {
            return lVar5;
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar12 + 1) goto LAB_023500b8;
          lVar11 = lVar11 + 0x100000000;
          uVar9 = *(undefined8 *)(lVar7 + 0x18);
          lVar13 = lVar13 + 1;
                    /* try { // try from 0235000c to 02450013 has its CatchHandler @ 02350148 */
          iVar4 = *(int *)(lVar6 + (lVar11 >> 0x1e) + 0x20);
          iVar15 = iVar16;
        } while (lVar13 < (int)uVar9);
      }
    }
  }
  return lVar5;
}

