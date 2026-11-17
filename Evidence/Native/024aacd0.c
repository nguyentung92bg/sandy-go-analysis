/* IL2CPP: Dino.BusSand.View.GameView$$Ring
void Dino_BusSand_View_GameView__Ring (Dino_BusSand_View_GameView_o* __this, UnityEngine_Vector3_o c, UnityEngine_Color32_o col, int32_t n, float r, float size, float life, float h, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$Ring
   void Dino_BusSand_View_GameView__Ring (Dino_BusSand_View_GameView_o* __this,
   UnityEngine_Vector3_o c, UnityEngine_Color32_o col, int32_t n, float r, float size, float life,
   float h, const MethodInfo* method); */

void Dino_BusSand_View_GameView__Ring_23aacd0
               (undefined4 param_1,undefined4 param_2,float param_3,float param_4,undefined4 param_5
               ,float param_6,long param_7,undefined4 param_8,int param_9)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  
                    /* try { // try from 024aacd0 to 025aacd3 has its CatchHandler @ 024aacf0 */
                    /* try { // try from 024aacd4 to 025aacf3 has its CatchHandler @ 024a936c */
                    /* catch() { ... } // from try @ 024aacd0 with catch @ 024aacf0 */
                    /* try { // try from 024aacf4 to 025aacfb has its CatchHandler @ 024aad04 */
                    /* try { // try from 024aacfc to 025aad07 has its CatchHandler @ 024a936c */
                    /* catch() { ... } // from try @ 024aac18 with catch @ 024aad04
                       catch() { ... } // from try @ 024aacf4 with catch @ 024aad04 */
  if (*(long *)(param_7 + 0x38) != 0) {
    fVar12 = param_3;
    lVar6 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_7 + 0x38),0);
    fVar17 = _UNK_00e20590;
    uVar9 = UnityEngine_Random__Range_43b64a8(_UNK_00e1fe50,0);
    if (lVar6 != 0) {
      fVar10 = (float)UnityEngine_Transform__get_up_43d16f4(lVar6,0);
      fVar18 = fVar17;
      fVar20 = fVar12;
      sincosf(uVar9,&fStack_94,&fStack_98);
      fVar11 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar6,0);
      uVar5 = _UNK_00e20ae0;
      fVar4 = _UNK_00e2082c;
      uVar3 = _UNK_00e204d0;
      fVar2 = _UNK_00e20390;
      uVar1 = _UNK_00e202d8;
      uVar9 = _UNK_00e1fea8;
      if (0 < param_9) {
        fVar20 = fStack_94 * fVar20;
        param_4 = param_4 * _UNK_00e2009c;
        iVar8 = 0;
        fVar12 = fStack_98 * fVar12 + fVar20;
        do {
          fVar19 = fVar2;
          fVar13 = (float)UnityEngine_Random__Range_43b64a8(uVar1,fVar2,0);
          fVar14 = (float)UnityEngine_Transform__get_right_43d15f4(lVar6,0);
          lVar7 = *(long *)(param_7 + 0xb0);
          fVar15 = (float)UnityEngine_Random__Range_43b64a8(uVar3,0x3f800000,0);
          fVar16 = (float)UnityEngine_Random__Range_43b64a8(uVar9,uVar5,0);
          if (lVar7 == 0) goto LAB_024aaf60;
          fVar13 = ((fVar13 + (float)iVar8) / (float)param_9) * fVar4;
          sincosf(fVar13 + fVar13,&fStack_9c,&fStack_a0);
          fVar13 = fVar20 * fStack_a0;
          fVar15 = param_4 * fVar15;
          fVar20 = param_3;
          Dino_BusSand_View_GrainParticles__Spark_23ae9e8
                    (param_1,param_2,param_3,
                     fVar15 * (fVar14 * fStack_a0 +
                              (fStack_98 * fVar10 + fStack_94 * fVar11) * fStack_9c),
                     fVar15 * (fVar19 * fStack_a0 +
                              (fStack_98 * fVar17 + fStack_94 * fVar18) * fStack_9c),
                     fVar15 * (fVar13 + fVar12 * fStack_9c),param_5,fVar16 * param_6,lVar7,param_8,0
                    );
          iVar8 = iVar8 + 1;
        } while (param_9 != iVar8);
      }
      return;
    }
  }
LAB_024aaf60:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

