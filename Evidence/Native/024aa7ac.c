/* IL2CPP: Dino.BusSand.View.GameView$$Sphere
void Dino_BusSand_View_GameView__Sphere (Dino_BusSand_View_GameView_o* __this, UnityEngine_Vector3_o c, UnityEngine_Color32_o col, int32_t n, float r, float size, float life, float h, float whiten, float drag, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$Sphere
   void Dino_BusSand_View_GameView__Sphere (Dino_BusSand_View_GameView_o* __this,
   UnityEngine_Vector3_o c, UnityEngine_Color32_o col, int32_t n, float r, float size, float life,
   float h, float whiten, float drag, const MethodInfo* method); */

void Dino_BusSand_View_GameView__Sphere_23aa7ac
               (undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
               float param_6,long param_7,undefined4 param_8,int param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float in_stack_00000000;
  
  if (*(long *)(param_7 + 0x38) != 0) {
    fVar12 = param_2;
    fVar15 = param_3;
    lVar6 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_7 + 0x38),0);
    if (lVar6 != 0) {
      fVar7 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar6,0);
      uVar5 = _UNK_00e20a20;
      fVar4 = _UNK_00e208e8;
      uVar3 = _UNK_00e20178;
      uVar2 = _UNK_00e20170;
      uVar1 = _UNK_00e200f8;
      if (0 < param_9) {
                    /* try { // try from 024aa848 to 025aa84b has its CatchHandler @ 024aab08 */
                    /* try { // try from 024aa858 to 025aa877 has its CatchHandler @ 024aab8c */
        fVar13 = param_4 * in_stack_00000000;
        fVar16 = fVar15;
        do {
          fVar8 = (float)UnityEngine_Random__get_onUnitSphere_43b66a0(0);
          lVar6 = *(long *)(param_7 + 0xb0);
          fVar9 = (float)UnityEngine_Random__Range_43b64a8(uVar5,0x3f800000,0);
          fVar10 = (float)UnityEngine_Random__Range_43b64a8(0x3f400000,uVar3,0);
                    /* try { // try from 024aa8bc to 025aa8bf has its CatchHandler @ 024aacac */
                    /* try { // try from 024aa8c0 to 025aa8c3 has its CatchHandler @ 024aac94 */
                    /* try { // try from 024aa8c4 to 025aa8c7 has its CatchHandler @ 024aacbc */
          fVar11 = (float)UnityEngine_Random__Range_43b64a8(uVar1,uVar2,0);
                    /* try { // try from 024aa8c8 to 025aa8cb has its CatchHandler @ 024aac90 */
          if (lVar6 == 0) goto LAB_024aa988;
                    /* try { // try from 024aa8cc to 025aa8cf has its CatchHandler @ 024aacbc */
                    /* try { // try from 024aa8d0 to 025aa8d3 has its CatchHandler @ 024aac8c */
                    /* try { // try from 024aa8d4 to 025aa8db has its CatchHandler @ 024aac70 */
                    /* try { // try from 024aa8dc to 025aa8df has its CatchHandler @ 024aac64 */
                    /* try { // try from 024aa8e0 to 025aa8e3 has its CatchHandler @ 024aac60 */
                    /* try { // try from 024aa8e4 to 025aa8e7 has its CatchHandler @ 024aac5c */
          fVar9 = param_4 * in_stack_00000000 * fVar9;
                    /* try { // try from 024aa8e8 to 025aa8f3 has its CatchHandler @ 024aacbc */
                    /* try { // try from 024aa8f4 to 025aa8f7 has its CatchHandler @ 024aac48 */
                    /* try { // try from 024aa8f8 to 025aa8fb has its CatchHandler @ 024aabe0 */
                    /* try { // try from 024aa8fc to 025aa8ff has its CatchHandler @ 024aabdc */
                    /* try { // try from 024aa900 to 025aa907 has its CatchHandler @ 024aac30 */
          fVar14 = (fVar15 * fVar16 + fVar7 * fVar8 + fVar12 * fVar13) * fVar4;
                    /* try { // try from 024aa908 to 025aa90b has its CatchHandler @ 024aabd0 */
                    /* try { // try from 024aa90c to 025aa917 has its CatchHandler @ 024aac30 */
          fVar17 = fVar16 - fVar15 * fVar14;
                    /* try { // try from 024aa918 to 025aa91b has its CatchHandler @ 024aabc0 */
          fVar18 = fVar13 - fVar12 * fVar14;
                    /* try { // try from 024aa91c to 025aa91f has its CatchHandler @ 024aabbc */
                    /* try { // try from 024aa920 to 025aa923 has its CatchHandler @ 024aab94 */
                    /* try { // try from 024aa924 to 025aa927 has its CatchHandler @ 024aab9c */
                    /* try { // try from 024aa928 to 025aa92f has its CatchHandler @ 024aabc4 */
                    /* try { // try from 024aa930 to 025aa933 has its CatchHandler @ 024aab80 */
                    /* try { // try from 024aa934 to 025aa937 has its CatchHandler @ 024aab68 */
                    /* try { // try from 024aa938 to 025aa93b has its CatchHandler @ 024aab5c */
          fVar13 = param_2;
          fVar16 = param_3;
                    /* try { // try from 024aa93c to 025aa93f has its CatchHandler @ 024aab58 */
                    /* try { // try from 024aa940 to 025aa943 has its CatchHandler @ 024aab54 */
                    /* try { // try from 024aa944 to 025aa947 has its CatchHandler @ 024aab40 */
                    /* try { // try from 024aa948 to 025aa94b has its CatchHandler @ 024aab3c */
                    /* try { // try from 024aa94c to 025aa94f has its CatchHandler @ 024aab30 */
                    /* try { // try from 024aa950 to 025aa953 has its CatchHandler @ 024aaaf4 */
                    /* try { // try from 024aa954 to 025aa957 has its CatchHandler @ 024aaaf0 */
                    /* try { // try from 024aa958 to 025aa95b has its CatchHandler @ 024aaaec */
          Dino_BusSand_View_GrainParticles__Spark_23ae9e8
                    (param_1,param_2,param_3,fVar9 * (fVar8 - fVar7 * fVar14),fVar9 * fVar18,
                     fVar9 * fVar17,fVar10 * param_5,fVar11 * param_6,lVar6,param_8,0);
                    /* try { // try from 024aa95c to 025aa95f has its CatchHandler @ 024aaad0 */
          param_9 = param_9 + -1;
                    /* try { // try from 024aa960 to 025aa963 has its CatchHandler @ 024aaacc */
        } while (param_9 != 0);
      }
                    /* try { // try from 024aa964 to 025aa967 has its CatchHandler @ 024aaac8 */
                    /* try { // try from 024aa968 to 025aa96b has its CatchHandler @ 024aaab8 */
                    /* try { // try from 024aa96c to 025aa973 has its CatchHandler @ 024aab90 */
                    /* try { // try from 024aa974 to 025aa977 has its CatchHandler @ 024aaaac */
                    /* try { // try from 024aa978 to 025aa97b has its CatchHandler @ 024aab20 */
                    /* try { // try from 024aa97c to 025aa97f has its CatchHandler @ 024aaaa4 */
                    /* try { // try from 024aa980 to 025aa983 has its CatchHandler @ 024aab1c */
                    /* try { // try from 024aa984 to 025aa987 has its CatchHandler @ 024aaa90 */
      return;
    }
  }
LAB_024aa988:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024aa988 to 025aa98b has its CatchHandler @ 024aab70 */
  FUN_02133224();
}

